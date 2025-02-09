#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sex;
    int tall;
    printf("input sex and tall: ");
    scanf("%c, %d", &sex, &tall);
    if (sex == 'F') {
        if (tall >= 150)
            printf("halo kurcaci cantik");
        else
            printf("apalah");
    } else
        if (tall >= 170)
            printf("raksasa ya lu");
        else
            printf("apalah #2");
    return 0;
}
