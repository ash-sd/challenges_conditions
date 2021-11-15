#include <stdio.h>


int main()
{
    int F,C;

    printf("Enter the value in Fahrenheit:");
    scanf("%d", &F);

    C = (F-32)/1.8;

    printf("The value returned is:%d",C);



    return 0;
}
