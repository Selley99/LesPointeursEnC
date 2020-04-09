#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int heures = 0, minutes = 90;

    printf("%d heures et %d minutes (avant modif)\n\n", heures, minutes);

    decoupeMinutes(&heures, &minutes);


    printf("%d heures et %d minutes (après la fonction)\n\n", heures, minutes);

    return 0;
}

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60;
}
