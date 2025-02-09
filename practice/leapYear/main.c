#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("input a year:");
    scanf("%d", &year);
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 != 0)) {
        printf("it's a leap year!");
    } else{
        printf("it is not a leap year lol");
    }
    return 0;
}
