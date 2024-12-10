//generate numerical pattern
#include<stdio.h>
int main()
{
    int i,j,n;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d",j-i);
        }
        printf("\n");
    }
return 0;
}