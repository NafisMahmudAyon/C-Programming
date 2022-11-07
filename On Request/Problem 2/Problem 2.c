#include<stdio.h>
#include<math.h>
int main() {

    int a[3], i, j;
    int sum=0;
    int avg=0;
    
    printf("Welcome to students record system!\n");
    printf("Pls enter 3 score:\n");
    
    for(i=1; i<=3; i++)
    {
      scanf("%d", &a[i]);
      sum = sum + a[i];
    }
    
    avg = (sum/3);
    
    printf("Menu:\n1. Calculate total score.\n2. Calculate average score.\nEnter your choice: ");
    scanf("%d", &j);
    
    if(j==1)
    {
      printf("The total score: %d", sum);
    }
    
    else if(j==2)
    {
      printf("The average score: %d", avg);
    }
    else{
      printf("you enter wrong number ");
    }
}