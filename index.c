#include <stdio.h>
#include <stdlib.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, c;

    printf("The value of a : \n");
    scanf("%d", &a);

    printf("The value of b : \n");
    scanf("%d", &b);

    c = add(a, b);

    printf("The sum is %d \n", c);

    printf("Hello");

    return 0;
}