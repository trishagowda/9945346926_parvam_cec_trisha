#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the values of x y and z");
    scanf("%d%d%d",&x,&y,&z);
    printf("x>y and x>z");
    if(x<y && x>z)
    {
        printf("x  greater than y and z");
    }
        else if(y>x && y>z)
        {
        printf("y greater than is x and z");
        }
            else if(z>x && z>y)
            {
                printf("z greater than x and y");
            }
        return 0;
}

