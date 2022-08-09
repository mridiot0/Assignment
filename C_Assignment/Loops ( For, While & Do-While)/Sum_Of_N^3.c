#include <stdio.h>

#include <math.h>

int main() {

   float sum=0.0,i;

   int n;

   printf("Enter limit: ");

   scanf("%d",&n);

   for(i=0;i<n;i++)

       sum+=1/pow(-3,i);

   printf("Sum of the series is: %f",sum);

   return 0;

}

