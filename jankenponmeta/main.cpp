#include "graphics.h"
#include "jankenpon.h"
#include "player.h"

#include <iostream>

int main(void)
{

  fibran fibi;
  const unsigned amount { 16 };

  for (unsigned count { 0 }; count < amount; ++count) {
    fibi.auto_fib();
  }



  return 0;
}
