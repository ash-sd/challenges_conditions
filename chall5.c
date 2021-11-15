#include <stdio.h>
#include <math.h>

int main()
{

    float a,b,c;
    float x1,x2;
    float delta;

    printf("Give a value for a, b and c:\n");
    scanf("%f %f %f", &a, &b, &c);

    delta = pow(b,1-4*a*c)/(4*a,a) ;

    if (delta == 0)
    {
        printf("x equal to: %f %f %f",-b / pow(2,a));

    }
    else if (delta > 0)
    {
        x1 = (-b + sqrt(delta))/pow(2,a);
        x2 = (-b - sqrt(delta))/pow(2,a);

        printf("the solutions are:%f %f,", x1, x2);

    }
    else


    return 0;
}
