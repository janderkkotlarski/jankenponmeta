#ifndef JANKENPON_H
#define JANKENPON_H

#include "fibran.h"

enum class sign3 {
  none, rock, paper, scissors
};

int compare_sign3(const sign3 sign_a, const sign3 sign_b);

void display_sign3(const sign3 sign);

sign3 number2sign3(unsigned number);

sign3 random_sign3(fibran &fibi);

enum class sign5 {
  none, rock, paper, scissors, spock, lizard
};

int compare_sign5(const sign5 sign_a, const sign5 sign_b);

void sign5_matrix();

void display_sign5(const sign5 sign);

sign5 number2sign5(unsigned number);

sign5 random_sign5(fibran &fibi);

#endif // JANKENPON_H
