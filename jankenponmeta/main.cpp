#include "graphics.h"
#include "jankenpon.h"
#include "player.h"

int main(void)
{
  // graphics_2d();

  // sign5_matrix();

  fibran fibi;

  std::vector <player> clowns;

  const int rounds{ 4 };

  int pod_size{ 1 };

  for (int i = 0; i < rounds; ++i) {
    pod_size *= 2;
  }

  for (int i = 0; i < pod_size; ++i) {
    clowns.push_back(player(fibi));
  }

  for (const player &joker: clowns) {
    joker.show_sign();
  }

  round(clowns);

  for (const player &joker: clowns) {
    joker.show_sign();
  }

  return 0;
}
