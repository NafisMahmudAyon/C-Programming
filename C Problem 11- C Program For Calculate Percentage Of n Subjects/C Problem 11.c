// Problem 11:
// QUE: C Program For Calculate Percentage Of n Subjects.

// Source Code:

#include<stdio.h>

main()
{
    // Follow US on =>> [ C Programming ]
  
   	int sub,marks,n,i,sum=0,tmp=0,arr[10],Percentage;

    printf("\nEnter number of subject : \n");
    scanf("%d", &n);
    
    tmp=n*100;
    printf("\nEnter The Marks: \n");

    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++) {
        sum=sum+arr[i];
    } 
    
    Percentage = ( sum * 100 ) / tmp;
    printf("\nPercentage Of Student : %d\n", Percentage);
}