#include "graphics.h"
#include "jankenpon.h"
#include "player.h"

#include <iostream>

int main(void)
{

  fibran fibi;
  const unsigned amount { 10000000 };

  const unsigned division { 10 };

  std::vector <unsigned> hits;

  for (unsigned count { 0 }; count < division; ++count) {
    hits.push_back(0);
  }

  std::cout << division << std::endl;

  for (unsigned count { 0 }; count < amount; ++count) {
    fibi.auto_fib();
    ++hits[fibi.get_val() % division];
  }

  for (const unsigned hit: hits) {
    std::cout << "[" << hit << "]";
  }

  std::cout << std::endl;

  std::cout << amount << std::endl;

  // player yugi(fibi, false);

  // yugi.show_sign();

  /*

  std::vector <player> jesters;



  for (unsigned count { 0 }; count < amount; ++count) {
    // fibi.auto_fib();

    player joker(fibi, false);

    jesters.push_back(joker);
  }



  show_player_signs(jesters);
  show_player_scores(jesters);

  const unsigned rounds{256};

  for (unsigned count {0}; count < rounds; ++count) {
    round(jesters);
  }

  show_player_signs(jesters);
  show_player_scores(jesters);

  */

  return 0;
}
