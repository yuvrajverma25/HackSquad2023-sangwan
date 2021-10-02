#include<stdio.h>
#include<limits.h>
int C[100][100];
int S[100][100];

void parenthesization(int i,int j)
{
    if(i==j)
        printf("A%d",i);
    else{
        printf("(");
        parenthesization(i,S[i][j]);
        parenthesization(S[i][j]+1,j);
        printf(")");
    }
}
int main()
{
    int n,d,i,k,j,min;
    printf("Enter the number of matrices : ");
    scanf("%d",&n);
    int P[n+1];
    printf("Enter the dimensions of matrices : \n");
    for(int i=0;i<=n;i++)
        scanf("%d",&P[i]);

    for(d=1;d<=(n-1);d++)
    {
        for(i=1;i<=(n-d);i++)
        {
            min = INT_MAX;
            j = i+d;
            for(k=i;k<j;k++)
            {
                int temp = C[i][k] + C[k+1][j] + P[i-1]*P[k]*P[j];
                if(temp<min)
                {
                    min = temp;
                    S[i][j] = k;
                }
            }
            C[i][j] = min;
        }
    }

    printf("\nThe minimum cost of multiplying matrices is : %d\n",C[1][n]);
    printf("The optimal parenthesization is :\n");
    parenthesization(1,n);
    printf("\n");
    return 0;
}
