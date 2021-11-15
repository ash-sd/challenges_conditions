#include <stdio.h>


int main()
{
    int a,b,sum;

    printf("Enter the first value:\n");
    scanf("%d",&a);
    printf("Enter the second value:\n");
    scanf("%d",&b);

    if(a == b)
        printf("The sum is:%d",(a+b)*3);

    else
        printf("The sum is:%d",(a+b));




    return 0;
}
