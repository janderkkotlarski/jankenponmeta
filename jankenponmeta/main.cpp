#include "functions.h"
#include "graphics.h"
#include "jankenpon.h"
#include "player.h"
#include "tourney.h"

#include <iostream>

int main(void)
{

  fibran fibi;

  // std::cout << power(3, 4) << std::endl;

  // player joker(fibi, true);

  // display_sign(joker.get_sign());

  // tourney tournament(fibi);

  unsigned ident{ 1 };

  const bool five{ false };

  /*

  tourney tour(fibi, five, ident);

  tour.show_player_signs();
  tour.show_player_scores();
  tour.tournament();
  tour.show_player_signs();
  tour.show_player_scores();

  */

  std::vector <tourney> tours { generate_tourneys(fibi, five, ident, 3) };

  tourneys_displays(tours);
  tourneys_tournament(tours);
  tourneys_displays(tours);

  return 0;
}
