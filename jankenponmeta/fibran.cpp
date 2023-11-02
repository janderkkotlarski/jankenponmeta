#include "fibran.h"

#include <iostream>
#include <chrono>

fibran::fibran()
{
  seed_fib();
  rand_fib();
}

unsigned fibran::add(const unsigned val1, const unsigned val2) {
  return special_add(val1, val2, m_max);
}

void fibran::seed_fib() {
  m_fib[2] = chronumber(m_max);
  m_fib[1] = chronumber(m_max / 3);
  m_fib[0] = add(m_fib[1], m_fib[2]);
}

void fibran::next_fib() {
  m_fib[2] = m_fib[1];
  m_fib[1] = m_fib[0];
  m_fib[0] = add(m_fib[1], m_fib[2]);
}

void fibran::rand_fib() {
  const unsigned amount { m_fib[0] % m_sub + m_sub / 3};

  for (unsigned i{ 0 }; i < amount; ++i) {
    next_fib();
  }
}

unsigned fibran::get_val() {
  const unsigned val{ m_fib[0] };
  rand_fib();

  return val;
}

void fibran::display_fib() {
  std::cout << "[" << m_fib[0] << "][" << m_fib[1] << "][" << m_fib[2] << "]" << std::endl;
}

void fibran::display_val() {
  std::cout << get_val() << std::endl;
}

unsigned special_add(const unsigned val1, const unsigned val2, const unsigned max) {
  return (val1 + val2) % max;
}

unsigned chronumber(const unsigned max) {
  std::chrono::system_clock clock;

  const auto current { clock.now() };
  const long long seed { std::chrono::duration_cast<std::chrono::microseconds>(current.time_since_epoch()).count() };
  return static_cast<unsigned>(seed) % max;
}
