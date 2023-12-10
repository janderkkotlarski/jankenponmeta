#ifndef FIBRAN_H
#define FIBRAN_H

#include <vector>

class fibran
{
private:
  const unsigned m_max { 999999999 };

  const unsigned m_sub { 333 };

  std::vector <unsigned> m_fib{ 0, 0, 0 };

  std::vector <unsigned> m_memory;

  std::vector <unsigned> m_divory;

  unsigned add(const unsigned val1, const unsigned val2);

  void seed_fib();



public:
  fibran();

  void next_fib();

  void rand_fib();

  unsigned get_rand();

  unsigned get_val();

  std::vector <unsigned> get_memory();

  void show_fib();

  void div_mem(const unsigned divi);

  void display_fib();
  void display_val();
  void display_mem();
  void display_div();
};

unsigned special_add(const unsigned val1, const unsigned val2, const unsigned max);

unsigned chronumber(const unsigned max);

void mem_show(const std::vector <unsigned> &memory);

std::vector <unsigned> unrests(const std::vector <unsigned> &memory, const unsigned div);

#endif // FIBRAN_H
