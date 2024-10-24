#include <stdio.h>

int main() {
    int a, b;
    printf("10: ");
    scanf("%d", &a);
    printf("15: ");
    scanf("%d", &b);
    if (a > b) {
        printf("15: %d\n", a);
    } else if (b > a) {
        printf("10: %d\n", b);
    } else {
        printf("15: %d\n", a);
    }

    return 0;
}

