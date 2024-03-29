#include "jankenpon.h"

#include <iostream>
#include <vector>

int compare_sign3(const sign5 sign_a, const sign5 sign_b) {
  if (sign_a == sign_b && sign_a != sign5::none &&
      sign_a != sign5::spock && sign_a != sign5::lizard) {
    return 0;
  }

  if ((sign_a == sign5::rock && sign_b == sign5::scissors) ||
      (sign_a == sign5::paper && sign_b == sign5::rock) ||
      (sign_a == sign5::scissors && sign_b == sign5::paper)) {
    return 1;
  }

  if ((sign_a == sign5::rock && sign_b == sign5::paper) ||
      (sign_a == sign5::paper && sign_b == sign5::scissors) ||
      (sign_a == sign5::scissors && sign_b == sign5::rock)) {
    return -1;
  }

  return -1000;
}

int compare_sign5(const sign5 sign_a, const sign5 sign_b) {
  if (sign_a == sign_b && sign_a != sign5::none) {
    return 0;
  }

  if ((sign_a == sign5::rock && sign_b == sign5::scissors) ||
      (sign_a == sign5::rock && sign_b == sign5::lizard) ||
      (sign_a == sign5::paper && sign_b == sign5::rock) ||
      (sign_a == sign5::paper && sign_b == sign5::spock) ||
      (sign_a == sign5::scissors && sign_b == sign5::paper) ||
      (sign_a == sign5::scissors && sign_b == sign5::lizard) ||
      (sign_a == sign5::lizard && sign_b == sign5::paper) ||
      (sign_a == sign5::lizard && sign_b == sign5::spock) ||
      (sign_a == sign5::spock && sign_b == sign5::scissors)||
      (sign_a == sign5::spock && sign_b == sign5::rock)) {
    return 1;
  }

  if ((sign_a == sign5::rock && sign_b == sign5::paper) ||
      (sign_a == sign5::rock && sign_b == sign5::spock) ||
      (sign_a == sign5::paper && sign_b == sign5::scissors) ||
      (sign_a == sign5::paper && sign_b == sign5::lizard) ||
      (sign_a == sign5::scissors && sign_b == sign5::rock) ||
      (sign_a == sign5::scissors && sign_b == sign5::spock) ||
      (sign_a == sign5::lizard && sign_b == sign5::scissors) ||
      (sign_a == sign5::lizard && sign_b == sign5::rock) ||
      (sign_a == sign5::spock && sign_b == sign5::paper)||
      (sign_a == sign5::spock && sign_b == sign5::lizard)) {
    return -1;
  }

  return -1000;
}

void display_sign(const sign5 sign) {
  switch (sign) {
    case sign5::none:
      std::cout << "none";
      break;
    case sign5::rock:
      std::cout << "rock";
      break;
    case sign5::paper:
      std::cout << "paper";
      break;
    case sign5::scissors:
      std::cout << "scissors";
      break;
    case sign5::spock:
      std::cout << "spock";
      break;
    case sign5::lizard:
      std::cout << "lizard";
      break;
    default:
      std::cout << "void";
  }
}

void display_signs(const std::vector <sign5> &signs) {
  for (const sign5 sign: signs) {
    display_sign(sign);
    std::cout << " ";
  }

  std::cout << std::endl;
}

sign5 number2sign(unsigned number) {
  switch (number) {
    case 0:
      return sign5::rock;
      break;
    case 1:
      return sign5::paper;
      break;
    case 2:
      return sign5::scissors;
      break;
    case 3:
      return sign5::spock;
      break;
    case 4:
      return sign5::lizard;
      break;
    default:
      return sign5::none;
  }
}

sign5 random_sign(fibran &fibi, const bool five) {
  fibi.auto_fib();

  const unsigned divi = (five) ? 5 : 3;

  const unsigned number = fibi.get_val() % divi;

  return number2sign(number);
}

sign5 random_sign3(fibran &fibi) {
  fibi.auto_fib();

  const unsigned number = fibi.get_val() % 3;

  return number2sign(number);
}

sign5 random_sign5(fibran &fibi) {
  fibi.auto_fib();

  const unsigned number = fibi.get_val() % 5;

  return number2sign(number);
}


