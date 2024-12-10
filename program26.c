//array
#include<stdio.h>
int main()
{
    int a[10],i,size=0;
    scanf("%d",&size);
     for( int i=0;i<size;i++)
     scanf("%d" ,&a[i++]);
    printf("array elements are");
    for(i=0;i<=size;i++)
    printf("\n %d",a[i++]);
 return 0;
    
}
