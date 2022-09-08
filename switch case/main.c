#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Menu  machine cafe\n");
    printf ("1 cafe noir \n 2 cafe au lait \n 3 cafe chocolat\n");
    printf("veullez choisir \n");
    scanf ("%d",&n);
    switch (n)
    {
        case 1 : printf ("vous avez choisi cafe noir");
        break;
        case 2 : printf ("vous avez choisi cafe au lait");
            break;
        case 3 : printf ("vous avez choisi cafe chocolat");
        break ;
        default :
             printf (" vous n'avait pas choisie");
     }
    return 0;
}
