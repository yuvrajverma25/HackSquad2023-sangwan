#include <stdio.h>

int main()
{
    int n3 = 0, n1 = 0, n2 = 1, number_limit;
    printf("Enter Number : ");
    scanf("%d", &number_limit);
    for (int i = 0; i < number_limit; i++)
    {
        if (i == 0 || i == 1)
        {
            printf("%d ", i);
        }
        else
        {
            n3 = n2 + n1;
            n1 = n2;
            n2 = n3;
            printf("%d ", n3);
        }
    }
}