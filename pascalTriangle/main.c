#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, coef = 0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int space=n-1; space>i; space--)
            printf(" ");
        for(int j=0; j<=i; j++)
        {
            if(j==0 || i==0)
                coef = 1;
            else
                coef = coef * (i-j+1)/j;
            printf("%d",coef);
        }
        printf("\n");
    }
    return 0;
}
