#include "player.h"

player::player()
{
}

player::player(fibran &fibi)
  : m_sign(random_sign(fibi))
{
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

void player::add_score(const int result) {
  m_score += result;
  ++m_round;
}

void match(player &player_a, player &player_b) {
  if (player_a.get_round() > 1 && player_a.get_round() < 5 &&
      player_a.get_round() == player_b.get_round()) {
    const int result_a { compare_signs(player_a.get_sign(), player_b.get_sign()) };

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
