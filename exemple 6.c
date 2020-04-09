#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int heures = 0, minutes = 90;

    printf("%d heures et %d minutes (variables du main avant modif)\n\n", heures, minutes);

    int* ptrHeures = &heures;
    int* ptrMinutes = &minutes;

    decoupeMinutes(ptrHeures, ptrMinutes);

    printf("%d heures et %d minutes (variables du main après modif)\n\n", heures, minutes);

    printf("%d heures et %d minutes (valeurs vers ou pointent les pointeurs)\n\n", *ptrHeures, *ptrMinutes);

    return 0;
}

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60;
}
