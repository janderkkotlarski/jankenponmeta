#include "fibran.h"

#include <iostream>
#include <chrono>

fibran::fibran()
{
  seed_fib();
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

void fibran::single_fib() {
  next_fib();

  // m_memory.push_back(m_fib[0]);
}

void fibran::multi_fib(const unsigned amount) {
  for (unsigned count { 0 }; count < amount; ++count) {
    next_fib();
  }

  // m_memory.push_back(m_fib[0]);
}

void fibran::auto_fib() {
  multi_fib(m_sub);
}

unsigned fibran::get_val() {
  return m_fib[0];
}

std::vector <unsigned> fibran::get_memory() {
  return m_memory;
}

void fibran::show_val() {
  std::cout << m_fib[0] << std::endl;
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

void mem_show(const std::vector <unsigned> &memory) {
  for (const unsigned mem: memory) {
    std::cout << "[" << mem << "]";
  }

  std::cout << std::endl;
}

void mem_show(const std::vector <unsigned> &memory, const unsigned length)
{
  unsigned count{ 0 };

  for (const unsigned mem: memory) {
   std::cout << "[" << mem << "]";
   ++count;

   if (count == length) {
     std::cout << std::endl;
     count = 0;
   }
  }

  std::cout << std::endl;
}
