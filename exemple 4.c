int main(int argc, char *argv[])
{
    int age = 34;

    int *pointeurSurAge;

    pointeurSurAge = &age;

    printf("%d\n", age); // valeur d'age
    printf("%d\n", &age); // adresse mémoire d'age
    printf("\n");

    printf("%d\n", pointeurSurAge); // valeur du pointeur
    printf("%d\n", *pointeurSurAge); // valeur stockée à l'adresse stockée dans le pointeur
    printf("%d\n", &pointeurSurAge); // adresse mémoire du pointeur

    return 0;
}
