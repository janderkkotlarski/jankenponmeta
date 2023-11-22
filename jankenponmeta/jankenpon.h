#ifndef JANKENPON_H
#define JANKENPON_H

#include "fibran.h"

enum class sign5 {
  none, rock, paper, scissors, spock, lizard
};

int compare_sign3(const sign5 sign_a, const sign5 sign_b);
int compare_sign5(const sign5 sign_a, const sign5 sign_b);

sign5 number2sign(unsigned number);

void display_sign(const sign5 sign);

sign5 random_sign3(fibran &fibi);
sign5 random_sign5(fibran &fibi);

#endif // JANKENPON_H
