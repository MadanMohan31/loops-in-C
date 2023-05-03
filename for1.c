#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    write a C program to print n natural numbers in both normal and reverse order


    */

    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",i+1);
        printf("%d\n",n-i);
    }
    return 0;
}
