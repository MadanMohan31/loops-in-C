#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    write a c code, to count number of digits present in the number.

    */

    int n,NOD=0;
    scanf("%d",&n);

    do
    {

        NOD++;
        n /= 10;

    }while(n!=0);

    printf("%d",NOD);

    return 0;
}
