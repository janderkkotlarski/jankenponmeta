#ifndef PLAYER_H
#define PLAYER_H

#include "jankenpon.h"

class player
{
private:
  sign5 m_sign{ sign5::rock };
  int m_score{ 0 };
  int m_round{ 0 };

public:
  player();

  player(fibran &fibi);

  sign5 get_sign();

  int get_score() const;

  int get_round();

  void show_sign() const;

  void add_score(const int result);
};



void match(player &player_a, player &player_b);

void round(std::vector <player> &clowns);

#endif // PLAYER_H
