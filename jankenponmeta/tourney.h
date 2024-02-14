#ifndef TOURNEY_H
#define TOURNEY_H

#include "functions.h"
#include "player.h"

#include <vector>

class tourney {
private:
  const bool m_five { false };

  const unsigned m_rounds { 4 };

  unsigned m_places { power(2, m_rounds) };

  std::vector <player> m_players;
public:
  tourney(fibran &fibi);

  tourney(fibran &fibi, const bool five);

  tourney(fibran &fibi, const bool five, unsigned &ident);

  void show_player_signs();

  void show_player_scores();

  void round();

  void bracket();

  void tournament();
};

void tournament_cycle(std::vector <tourney> &tours);

#endif // TOURNEY_H
