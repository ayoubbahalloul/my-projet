#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B,C ;
    printf("entrer la valeur de A : ");
    scanf ("%f",&A);
   printf("entrer la valeur de B :");
    scanf ("%f",&B);
    C=A;
    A=B;
    B=C;
    printf("A = %.1f \n",A);
    printf("B = %.1f",B);
    return 0;
}
