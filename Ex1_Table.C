/*
Date : 13-07-2021
Program : Make a Table
Example : 2 x 1 = 2
          2 x 2 = 4
          .
          .
          2 x 10 = 20
*/

#include <stdio.h>

int main()
{
    float n, i;

    printf("Enter any Number :");
    scanf("%f", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%.1f x %.1f = %.1f\n", n, i, n * i);
    }
    return 0;
}