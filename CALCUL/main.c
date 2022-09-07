#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ,i,s;

    printf("saisir un nombre :");
    scanf ("%d",&n);

    for (i=0;i<=10;i++){
        s=n*i;
     printf("%d * %d = %d\n ",n,i,s);}
    return 0;
}
