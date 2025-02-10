#include <stdio.h>

int main() {
    int a, b, c;
    printf("");
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);
    printf("");
    scanf("%d", &c);
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Valid", a, b, c);
    } else {
        printf("Invalid", a, b, c);
    }

    return 0;
}
