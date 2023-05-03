#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    write a c program to check the number is even or odd for n test cases.

    */

    int n,i,num;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(num%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}
