#include<stdio.h>
int main()
{
    int a[100],i,size=0 ,esum=0,eodd=0;
    scanf("%d",&size);
        for( int i=0;i<size;)
        { printf("%d"a[i]);
          if(a[i]%2==0) 
          esum+=a[i];
          else
          osum+=a[i];
        }
     printf("sum of even %d odd %d",esum,osum);
    return 0;
}
