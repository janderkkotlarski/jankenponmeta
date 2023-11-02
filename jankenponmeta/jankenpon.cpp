#include "jankenpon.h"

#include <iostream>
#include <vector>

int compare_signs(const sign5 sign_a, const sign5 sign_b) {
  if (sign_a == sign_b) {
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

  return 0;
}

void sign5_matrix() {
  const std::vector <sign5> signs { sign5::rock, sign5::paper, sign5::scissors, sign5::spock, sign5::lizard };

  for (const sign5 sign_a: signs) {
    for (const sign5 sign_b: signs) {
      std::cout << "[" << compare_signs(sign_a, sign_b) << "]";
    }

    std::cout << std::endl;
  }
}

void display_sign(const sign5 &sign) {
  switch (sign) {
    case sign5::rock:
      std::cout << "rock" << std::endl;
      break;
    case sign5::paper:
      std::cout << "paper" << std::endl;
      break;
    case sign5::scissors:
      std::cout << "scissors" << std::endl;
      break;
    case sign5::spock:
      std::cout << "spock" << std::endl;
      break;
    case sign5::lizard:
      std::cout << "lizard" << std::endl;
      break;
    default:
      std::cout << "void" << std::endl;
  }
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
      return sign5::rock;
  }
}

sign5 random_sign(fibran &fibi) {
  const unsigned number = fibi.get_val() % 5;

  return number2sign(number);
}
