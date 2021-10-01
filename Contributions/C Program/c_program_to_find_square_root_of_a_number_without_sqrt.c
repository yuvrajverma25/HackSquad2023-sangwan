#include <stdio.h>
void f1(int,int);
int main()
{
    int i = 1;
    int n;
    printf("Enter the no. you want sqrt :\n");
    scanf("%d", &n);
    f1(n, i);

    return 0;
}
 void f1(int n,int i)
{
    if (n * 10000 - i * i <= 0)
    
        printf("%f",(double) i/ 100);
    
    else
    f1(n,i+1);
}
