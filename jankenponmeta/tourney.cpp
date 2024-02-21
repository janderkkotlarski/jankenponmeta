#include "tourney.h"

#include "functions.h"

#include <iostream>

tourney::tourney(fibran &fibi) {
  for (unsigned count { 0 }; count < m_places; ++count) {
    m_players.push_back(player{ fibi, m_five });
  }
}

tourney::tourney(fibran &fibi, const bool five)
  : m_five(five)
{
  for (unsigned count { 0 }; count < m_places; ++count) {
    m_players.push_back(player{ fibi, m_five });
  }
}

tourney::tourney(fibran &fibi, const bool five, unsigned &ident)
  : m_five(five)
{
  for (unsigned count { 0 }; count < m_places; ++count) {
    m_players.push_back(player{ fibi, m_five, ident});
  }
}

void tourney::show_player_signs() {
  for (const player joker: m_players) {
    joker.show_sign();
    joker.show_ident();
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
    // std::cout << index << std::endl;

    if (index + 1 < m_players.size()){
      match(m_players[index], m_players[index + 1]);
    }

    index += 2;
  }
}

void tourney::bracket() {
  for (unsigned i { 0 }; i < m_players.size() - 1;  ++i) {
    for (unsigned j { i + 1 }; j < m_players.size();  ++j) {
      if (m_players[j].get_score() > m_players[i].get_score()) {
        const player joker = m_players[i];

        m_players[i] = m_players[j];
        m_players[j] = joker;
      }
    }
  }
}


void tourney::tournament() {
  for (unsigned i { 0 }; i < m_rounds; ++i) {
    round();
    bracket();
  }
}

void tournament_cycle(std::vector <tourney> &tours) {
  for (tourney &tour: tours) {
    tour.tournament();
  }
}

std::vector <tourney> generate_tourneys(const unsigned amount) {
  std::vector <tourney> tours;

  for (unsigned count { 0 }; count < amount; ++count) {
    tourney tour(fibi, five, ident);
    tours.push_back();
  }
}
