#include "graphics.h"
#include "jankenpon.h"
#include "player.h"

#include <iostream>

int main(void)
{
  // graphics_2d();

  // sign5_matrix();

  fibran fibi;
  // fibi.show_fib();

  const unsigned amount { 16 };

  for (unsigned count { 0 }; count < amount; ++count) {
    fibi.next_fib();
    // fibi.show_fib();
  }

  // fibi.display_mem();
  // fibi.div_mem(5);
  // fibi.display_div();

  const std::vector <unsigned> mem = fibi.get_memory();



  const unsigned vid{ 3 };

  std::vector <unsigned> div;

  div = unrests(mem, vid);

  // div.push_back(mem[0] % vid);

  mem_show(div);

  // div.push_back(mem[0] % vid);

  // mem_show(div);

  // std::cout << mem[0]; // << ':' << div;


  return 0;
}
