#include <stdio.h>

int main() {
    int num;
    printf("");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 11 == 0) {
        printf("Divisible", num);
    } else {
        printf("Not Divisible", num);
    }

    return 0;
}
