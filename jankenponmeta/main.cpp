#include "graphics.h"
#include "jankenpon.h"
#include "player.h"

#include <iostream>

int main(void)
{

  fibran fibi;
  const unsigned amount { 16 };

  // player yugi(fibi, false);

  // yugi.show_sign();

  std::vector <player> jesters;



  for (unsigned count { 0 }; count < amount; ++count) {
    // fibi.auto_fib();

    player joker(fibi, false);

    jesters.push_back(joker);
  }



  show_player_signs(jesters);

  return 0;
}
