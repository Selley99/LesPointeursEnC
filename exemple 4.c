int main(int argc, char *argv[])
{
    int age = 34;

    int *pointeurSurAge;

    pointeurSurAge = &age;

    printf("%d\n", age); // valeur d'age
    printf("%d\n", &age); // adresse m�moire d'age
    printf("\n");

    printf("%d\n", pointeurSurAge); // valeur du pointeur
    printf("%d\n", *pointeurSurAge); // valeur stock�e � l'adresse stock�e dans le pointeur
    printf("%d\n", &pointeurSurAge); // adresse m�moire du pointeur

    return 0;
}
