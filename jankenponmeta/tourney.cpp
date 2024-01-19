#include "tourney.h"

#include "functions.h"

#include <iostream>

tourney::tourney(fibran &fibi) {
  for (unsigned count { 0 }; count < m_places; ++count) {
    m_players.push_back(player{ fibi, m_five });
  }
}

void tourney::show_player_signs() {
  for (const player joker: m_players) {
    joker.show_sign();
    std::cout << ":";
  }

  std::cout << std::endl;
}

void tourney::show_player_scores() {
  for (const player joker: m_players) {
    joker.show_score();
    std::cout << ":";
  }

  std::cout << std::endl;
}

void tourney::round() {
  unsigned index { 0 };

  while (index < m_players.size()) {
    index += 2;
  }
}
