#include "functions.h"

unsigned power(const unsigned base, const unsigned expo) {
  unsigned mult { 1 };

  for (unsigned count { 0 }; count < expo; ++count) {
    mult *= base;
  }

  return mult;
}
