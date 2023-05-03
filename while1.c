#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    write a c program to print n natural numbers using while both normal and reverse order.

    */

    int n,i;
    scanf("%d",&n);

    while(i<n)
    {
        printf("%d\t",i+1);
        printf("%d\n",n-i);
        i++;
    }

    return 0;
}
