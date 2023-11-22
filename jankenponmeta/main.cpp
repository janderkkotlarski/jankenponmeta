#include "graphics.h"
#include "jankenpon.h"
#include "player.h"

#include <iostream>

int main(void)
{
  // graphics_2d();

  // sign5_matrix();

  fibran fibi;

  std::vector <player> clowns;

  const int rounds{ 4 };

  int pod_size{ 1 };

  for (int i = 0; i < rounds; ++i) {
    pod_size *= 2;
  }

  for (int i = 0; i < pod_size; ++i) {
    clowns.push_back(player(fibi, false));
  }

  show_player_signs(clowns);
  show_player_scores(clowns);

  // round(clowns);

  tourney(clowns, rounds);


  show_player_signs(clowns);
  show_player_scores(clowns);

  std::cout << std::endl;

  std::vector <player> jesters;

  /*
  jesters.push_back(player(sign5::rock));
  jesters.push_back(player(sign5::paper));

  show_player_scores(jesters);

  match(jesters[0], jesters[1]);

  show_player_scores(jesters);
  */

  return 0;
}
