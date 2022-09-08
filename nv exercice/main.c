#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char sexe;
   printf("veullez entrer le sexe :\n");
    scanf ("%c",&sexe);
     printf("veullez entrer l'age :\n");
    scanf ("%d",&age);

    if ((sexe == 'h' && age >= 20 ) || (sexe=='f' && (age>= 18 && age<=35))){
        printf ("pay impot");

    }
    else
        printf ("Pas  d impot");



    return 0;
}
