#include <stdio.h>


int main()

{
    int num;
    printf("Enter a value:\n");
    scanf("%d", &num);

    if(num > 0)
        printf("The value is negative.");

    else if(num < 0)

        printf("The value is positive.");

    else
        printf("The value is zero.");



    return 0;
}
