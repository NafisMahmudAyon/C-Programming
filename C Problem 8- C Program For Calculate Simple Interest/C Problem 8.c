// Problem 8:
// QUE: C Program For Calculate Simple Interest.

// Source Code:

#include<stdio.h>

main()
{
    // Follow US on =>> [ C Programming ]
  
   	float amount, rate, time, si;

    printf("\nEnter Principal Amount : ");
    scanf("%f", &amount);

    printf("\nEnter Rate of Interest : ");
    scanf("%f", &rate);

    printf("\nEnter Period of Time  (In Year) : ");
    scanf("%f", &time);

    si = (amount * rate * time) / 100;
    printf("\nSimple Interest : %f", si);

}