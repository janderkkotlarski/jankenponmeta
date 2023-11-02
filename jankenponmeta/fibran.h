#ifndef FIBRAN_H
#define FIBRAN_H

#include <vector>

class fibran
{
private:
  const unsigned m_max { 999999999 };

  const unsigned m_sub { 333 };

  std::vector <unsigned> m_fib{ 0, 0, 0 };

  unsigned add(const unsigned val1, const unsigned val2);

  void seed_fib();

  void next_fib();

public:
  fibran();

  void rand_fib();

  unsigned get_val();

  void display_fib();
  void display_val();
};

unsigned special_add(const unsigned val1, const unsigned val2, const unsigned max);

unsigned chronumber(const unsigned max);

#endif // FIBRAN_H
