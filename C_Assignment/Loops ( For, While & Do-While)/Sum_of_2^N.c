#include<stdio.h>
 
int main()
{
    float sum = 0.0, j = 1.0;
    int count, limit;
    printf("\nThe Sum of Series 1+1/2+1/4+1/8...+1/n \n");
    printf("Enter The Limit: ");
    scanf("%d", &limit);
    for(count = 1; count <= limit; count++)
    {
        sum = sum + (1/j);
        j = j * 2;
    }
    printf("\nSum of Series:\t %f", sum);
    printf("\n");
    return 0;
}