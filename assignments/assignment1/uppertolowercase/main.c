#include <stdio.h>
#include <stdlib.h>

int main()
{
    char uppercase;

    printf("Enter an uppercase letter: ");
    scanf("%c", &uppercase);

    char lowercase = uppercase + 32;
    printf("Corresponding lowercase letter: %c\n", lowercase);
    return 0;
}
