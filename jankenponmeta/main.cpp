#include "functions.h"
#include "graphics.h"
#include "jankenpon.h"
#include "player.h"
#include "tourney.h"

#include <iostream>

int main(void)
{

  fibran fibi;

  std::cout << power(3, 4) << std::endl;

  player joker(fibi, true);

  // display_sign(joker.get_sign());

  // tourney tournament(fibi);

  tourney tour(fibi);

  return 0;
}
