#include "functions.h"
#include "graphics.h"
#include "jankenpon.h"
#include "player.h"

#include <iostream>

int main(void)
{

  fibran fibi;

  std::cout << power(3, 4) << std::endl;

  player joker(fibi, true);

  display_sign(joker.get_sign());

  return 0;
}
