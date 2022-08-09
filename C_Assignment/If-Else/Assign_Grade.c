/**
 * C program to enter marks of five subjects and find percentage and grade
 */

#include <stdio.h>

int main()
{
    int phy, chem, bio, math, comp; 
    float per; 

    /* Input marks of five subjects from user */
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);


    /* Calculate percentage */
    per = (phy + chem + bio + math + comp) / 5.0;

    printf("Percentage = %.2f\n", per);


    /* Find grade according to the percentage */
    if(per >= 90)
    {
        printf("Grade O");
    }
    else if(per >= 80)
    {
        printf("Grade E");
    }
    else if(per >= 70)
    {
        printf("Grade A");
    }
    else if(per >= 60)
    {
        printf("Grade B");
    }
    else if(per >= 50)
    {
        printf("Grade C");
    }
    else if(per >= 40)
    {
        printf("Grade D");
    }
    else
    {
        printf("FAIL");
    }

    return 0;
}