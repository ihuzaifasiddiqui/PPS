/* syntax of while
while(condition){
statement(s)
}*/

#include <stdio.h>
int main()
{
    int i = 1;
    
    while (i <= 5)// the following  block of code will be executed only if the condition is true
    {
        printf("%d\n", i);
        ++i;//pre increment operator, first increments then assigns the value to i
    }

    return 0;
}

