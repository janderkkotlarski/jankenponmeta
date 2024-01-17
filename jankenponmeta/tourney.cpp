#include "tourney.h"

#include "functions.h"

tourney::tourney(fibran &fibi) {
  /*
  for (unsigned count { 0 }; count < m_places; ++count) {
    m_players.push_back(player{ fibi, m_five });
  }
  */
}

void tourney::show_players() {
  for (const player joker: m_players) {
    joker.show_sign();
  }
}
