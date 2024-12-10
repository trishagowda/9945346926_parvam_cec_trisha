//generate numerical pattern
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
return 0;
}