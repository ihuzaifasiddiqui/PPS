/* Program to find greatest among three nos using ternary operators
This question is asked in placements
and also asked as a short or long answer question in exams*/

#include <stdio.h>

void main()
{
    int a, b, c, max;
    printf("Enter three no’s\n");
    scanf("%d %d %d", &a, &b, &c);
    max = (a > b ? (a > c ? a : c) : (b > c ? b : c));
    printf("%d is greater", max);
}
