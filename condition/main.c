#include <stdio.h>
#include <stdlib.h>

int main()
{
    //comparaison
    int n1,n2;
    printf("entrer le premier nbr \n");
    scanf ("%d",&n1);
     printf("entrer le deuxieme nbr \n");
    scanf ("%d",&n2);
    if (n1 > n2){
        printf ("n1 %d est plus grand");
    }
    else {
        printf ("n2  est plus grand");
    }
    return 0;
}
