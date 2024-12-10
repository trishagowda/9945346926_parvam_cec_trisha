
#include<stdio.h>
int main()
{
    int a=19;
    int b=20;
    printf("before swaping a=%d,b=%d", a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping a=%d ,b=%d", a,b);
    return 0;
}