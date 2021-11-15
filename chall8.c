#include <stdio.h>


int main()
{

    char c;
    printf("Enter a character:\n");
    scanf("%c",&c);

    if(c >= 65 && c<=90 )
        printf("The letter you entered is uppercase.");

    else
        printf("The letter you entered is lowercase.");



    return 0;
}
