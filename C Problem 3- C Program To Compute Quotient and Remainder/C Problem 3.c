// Problem 3:
// QUE: C Program To Compute Quotient and Remainder

// Source Code:

#include<stdio.h>

main()
{
   // Follow US on =>> [ C Programming ]
  
   	int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Computes quotient
    quotient = dividend / divisor;

    // Computes remainder
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);;

}