#ifndef JANKENPON_H
#define JANKENPON_H

#include "fibran.h"

enum class sign5 {
  rock, paper, scissors, spock, lizard
};

int compare_signs(const sign5 sign_a, const sign5 sign_b);

void sign5_matrix();

void display_sign(const sign5 &sign);

sign5 number2sign(unsigned number);

sign5 random_sign(fibran &fibi);

#endif // JANKENPON_H
