#include <stdio.h>

#define CONSTANT 10
int main() {
    int a = 5;
    int b = 3;
    int c = 2;
    int sum = a + b + c;
    printf("Sum: %d\n", sum);
    printf("Constant: %d\n", CONSTANT);
    a++;
    printf("Incremented a: %d\n", a);

    return 0;
}
