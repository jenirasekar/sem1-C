#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a=0;
    for(i=1; i<=5; i++) {
        if(i%2!=0) {
        a= a*i+i;
    } else {
        a = a*i;
    };
    }
    printf("%d", a);
    return 0;
}
