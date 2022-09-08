#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do {
            printf("saisir la note! :\n");
            scanf("%d",&n);
    }while(n<0 || n>=20);
    if (n>=10)
        printf ("felicitation vous etes admis");
    else
        printf("echoue");


    return 0;
}
