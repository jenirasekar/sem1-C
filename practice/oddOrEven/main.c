#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("input number: ");
    scanf("%d", &x);
    if(x % 2 == 0) {
        printf("the number is even");
    } else {
        printf("the number is odd");
    }
    return 0;
}
