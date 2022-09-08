#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 ,n2 ,s, add,sous,prod,div;
   printf("saisir le premier nombre :");
    scanf ("%d",&n1);

      printf("saisir le deuxieme nombre :");
    scanf ("%d",&n2);
    add = n1+n2;
     sous= n1-n2;
      prod= n1*n2;
       div= n1/n2;
       printf("%d + %d = %d \n",n1,n2,add);
       printf("%d - %d = %d \n",n1,n2,sous);
        printf("%d * %d = %d \n",n1,n2,prod);
       printf("%d / %d = %d \n",n1,n2,div);
    return 0;
}
