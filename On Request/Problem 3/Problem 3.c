#include <stdio.h>
#include <conio.h>
#define PI 3.1416

main ()
{
    float r, A;
    printf("Enter the radious of circle: ");
    scanf("%f",&r);

    A= PI * r * r;

    printf("\nThe area of circle is %f", A);
    getch();
}
