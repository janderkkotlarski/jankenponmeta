#ifndef TOURNEY_H
#define TOURNEY_H

#include "functions.h"
#include "player.h"

#include <vector>

class tourney
{
private:
  const bool five { false };

  unsigned m_rounds { 4 };

  unsigned m_places { power(2, m_rounds) };

  std::vector <player> m_players;
public:
  tourney(fibran &fibi);



};

#endif // TOURNEY_H
