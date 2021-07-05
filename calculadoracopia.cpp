#include <stdio.h>
int main() {
  char operador;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operador);
  printf("Enter two operands: ");
  scanf("%f %f", &first, &second);

  switch (operador) {
    case '+':
      printf("%f + %f = %f", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}

