//Program to make a calculator
#include <stdio.h>

int main() 
{

  char operand;
  double first, second;
  printf("Enter an operator (+, -, *, /): "); //Taking operator from user
  scanf("%c", &operand);
  printf("Enter two operands: "); //taking 2 operands from user
  scanf("%lf %lf", &first, &second);

  switch (operand) 
  {
    //if  "+" is chosen
    case '+':
      printf("%.2lf + %.2lf = %.2lf", first, second, first + second);
      break;
    //if "-" is chosen  
    case '-':
      printf("%.2lf - %.2lf = %.2lf", first, second, first - second);
      break;
    //if "*" is chosen
    case '*':
      printf("%.2lf * %.2lf = %.2lf", first, second, first * second);
      break;
    //if "/" is chosen
    case '/':
      printf("%.2lf / %.2lf = %.2lf", first, second, first / second);
      break;
    // Wrong input
    default:
      printf("Invalid input");
  }
}