#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A , B,C ;
    printf("ENTRER LA VALLEUR DE A :");
    scanf ("%d",&A);
     printf("ENTRER LA VALLEUR DE B :");
    scanf ("%d",&B);
    C = A ;
    A =B  ;
    B = C ;
    printf ("A :%d \n",A);
    printf (" B :%d \n",B);
    return 0;
}
