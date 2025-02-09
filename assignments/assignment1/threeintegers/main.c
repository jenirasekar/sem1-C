#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    int sum, product;
    float average;

    printf("Enter 1st integer: ");
    scanf("%d", &num1);
    printf("Enter 2nd integer: ");
    scanf("%d", &num2);
    printf("Enter 3rd integer: ");
    scanf("%d", &num3);

    sum = num1 + num2 + num3;
    product = num1 * num2 * num3;
    average = sum / 3;

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Average: %.2f\n", average);

    return 0;
}
