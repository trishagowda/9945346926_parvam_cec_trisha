//generate numerical pattern
#include<stdio.h>
int main()
{
    int n=4,i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",j+i);
        }
        printf("\n");
    }
return 0;
}