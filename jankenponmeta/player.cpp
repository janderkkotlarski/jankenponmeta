#include "player.h"

#include <iostream>

player::player()
{
}

player::player(const sign5 sign)
  : m_sign(sign), m_five(true)
{
}

player::player(fibran &fibi, const bool five)
{
  if (five) {
    m_sign = random_sign5(fibi);
  }
  else {
    m_sign = random_sign3(fibi);
  }
}

sign5 player::get_sign() {
  return m_sign;
}

int player::get_score() const {
  return m_score;
}

int player::get_round() {
  return m_round;
}

void player::show_sign() const {
  display_sign(m_sign);
}

void player::show_score() const {
  std::cout << m_score << std::endl;
}

void player::add_score(const int result) {
  m_score += result;
  ++m_round;
}

void show_player_signs(const std::vector <player> &players) {
  for (const player &joker: players) {
    joker.show_sign();
  }

  std::cout << std::endl;
}

void show_player_scores(const std::vector <player> &players) {
  for (const player &joker: players) {
    joker.show_score();
  }

  std::cout << std::endl;
}

void match(player &player_a, player &player_b) {
  if (player_a.get_round() > -1 && player_a.get_round() < 4 &&
      player_a.get_round() == player_b.get_round()) {
    const int result_a { compare_sign5(player_a.get_sign(), player_b.get_sign()) };

    player_a.add_score(result_a);
    player_b.add_score(-result_a);
  }
}

void round(std::vector <player> &clowns) {
  const int size = clowns.size();

  for (int i{ 0 }; i < size / 2; ++i) {
    match(clowns[2 * i], clowns[2 * i + 1]);
  }

  int min{ 0 };
  int max{ 0 };

  for (const player &joker: clowns) {
    const int score{ joker.get_score() };

    if (score > max) {
      max = score;
    }

    if (score < min) {
      min = score;
    }
  }

  int here{ 0 };

  for (int i{ max }; i > min; --i) {
    for (int j {0}; j < size; ++j) {
      if (clowns[j].get_score() == i) {
        player joker{ clowns[here] };

        clowns[here] = clowns[j];
        clowns[j] = joker;

        ++here;
      }
    }
  }
}

void tourney(std::vector <player> &clowns, const int rounds) {
  for (int i { 0 }; i < rounds; ++i) {
    round(clowns);
  }
}
