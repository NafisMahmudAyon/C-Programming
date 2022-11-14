#include <stdio.h>

ascending(int number[3]) {
    int i, j, a, n;
    n=3;


    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);
}

descending(int number[3]) {
    int i, j, a, n;
    n=3;


    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] < number[j])
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in descending order are given below \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);
}

normal(int number[3]) {
    int i, n;
    n=3;
    printf("The numbers arranged in orginal order are given below \n");
    for (i = 0; i < n; i++){
        printf("%d\n", number[i]);
    }
}

main()
{
    int i, n, number[10];
    printf("Welcome to Student Record System!\n");
    printf("\nPlease enter 3 scores: ");
    for (i = 0; i < 3; i++){
        scanf("%d", &number[i]);
    }
    printf("\nMenu:\n\t1. Sort scores in ascending order");
    printf("\n\t2. Sort scores in descending order");
    printf("\n\t3. Display scores in orginal order");
    printf("\nPlease enter your choice: ");
    scanf("%d", &n);

    if(n==1){
        ascending(number);
    }
    else if(n==2){
        descending(number);
    }
    else if(n==3){
        normal(number);
    }
    else {
        printf("You Enter Wronge Number");
    }
}
