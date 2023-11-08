#ifndef PLAYER_H
#define PLAYER_H

#include "jankenpon.h"

class player
{
private:
  sign3 m_sign3{ sign3::none };
  sign5 m_sign5{ sign5::none };
  int m_score{ 0 };
  int m_round{ 0 };

public:
  player();

  player(const sign3 sign);
  player(const sign5 sign);

  player(fibran &fibi);

  sign5 get_sign5();

  int get_score() const;

  int get_round();

  void show_sign5() const;

  void show_score() const;

  void add_score(const int result);
};

void show_player_scores(const std::vector <player> &players);

void match(player &player_a, player &player_b);

void round(std::vector <player> &clowns);

void tourney(std::vector <player> &clowns, const int rounds);

#endif // PLAYER_H
