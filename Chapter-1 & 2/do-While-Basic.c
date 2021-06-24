/* do-while is exit controlled loop
 do-while first executes the code in do block then checks the condition.
 The code in do block will be executed "at-least once" regardless of the condidtion being false.*/


#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        printf("%d \n", i);
        i++;
    } while (i <= 10);
    return 0;
}
