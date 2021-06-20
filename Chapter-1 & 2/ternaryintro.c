/* Program to to find greatest among two numbers using ternary operators
  This operator is useful for making two-way decisions.(can be used in place of if else statements)
  syntax : conditional statement ? (expression 1) : expression2;
  if the conditional statement is true (non-zero ) then expression 1 is executed
  if the conditional statement is false (zero) then expression 2 is  executed.
  This operator is called ternary because it has three OPERANDS.
   */

#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter two no’s\n");
    scanf("%d %d", &a, &b);
    c = (a > b ? a : b); //if a is greater than b then c is assigned the value of a
                         // else if b is greater it's value is assigned to c.
    printf("the value of c is %d", c);
}
