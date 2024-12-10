//print the num div by 5 btw m n
#include<stdio.h>
int main()
{
    int n,m, div;
    printf("enter the value of m:");
    scanf("%d",&m);
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the value od div:");
    scanf("%d",&div);
    for(int i =0;i<=5;i++)
    {
        if(i%div==0 && i>=m && i<=n)
        {
            printf("%d\n",i);
        }
    }
    return 0;
    

}