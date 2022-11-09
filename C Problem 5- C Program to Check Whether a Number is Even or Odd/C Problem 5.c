// Problem 5:
// QUE: C Program to Check Whether a Number is Even or Odd.

// Source Code:

#include<stdio.h>

main()
{
   // Follow US on =>> [ C Programming ]
  
   	int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

}