#ifndef PLAYER_H
#define PLAYER_H

#include "jankenpon.h"

#include <vector>

class player
{
private:
  sign5 m_sign{ sign5::none };
  int m_score{ 0 };
  int m_round{ 0 };
  bool m_five{ false };

public:
  player();

  player(const sign5 sign);

  player(fibran &fibi, const bool five);

  sign5 get_sign();

  int get_score() const;

  int get_round();

  void show_sign() const;

  void show_score() const;

  void add_score(const int result);
};

void show_player_signs(const std::vector <player> &players);

void show_player_scores(const std::vector <player> &players);

void match(player &player_a, player &player_b);

void round(std::vector <player> &clowns);

void tourney(std::vector <player> &clowns, const int rounds);

#endif // PLAYER_H
