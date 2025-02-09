#include <stdio.h>
#include <stdlib.h>

int main()
{
    // nested for loop
    /* int i, j;
    for(i = 1; i<=3; i++) {
        for(j = 1; j <= 4; j++) {
            if(i == j)
                printf("i * j = %d\n", i*j);
        }
    } */

    // putchar
    /* int i, j, n;
    scanf("%d" ,&n);
    for (i=  1; i <= n; i++) {
        for (j = 1; j<=n; j++) {
            putchar('*');
        }
        putchar('*');
    } */

    int i, j, n = 0;
    for(i = 1; i <= 4; i++) {
        for (j = 1; j <= 5; j++, n++) {
            if (n % 5 == 0) printf("\n");
            printf("%d\t", i*j);
        }
        printf("\n");
    }
    return 0;
}
