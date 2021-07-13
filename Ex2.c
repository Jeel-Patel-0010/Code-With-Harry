/*
 Date : 13-07-2021
Program :
*/
#include <stdio.h>

void main()
{
    int maths, science;
    printf("Enter Maths Marks : ");
    scanf("%d", &maths);

    printf("Enter Science Marks : ");
    scanf("%d", &science);

    if (maths <= 25)
    {

        printf("You fail in Maths");
    }
    else if (science <= 25)
    {
        printf("You fail in Science");
    }
    else
    {
        printf("You passed in Maths & Science You won 50 rupee");
    }
    getchar();
}