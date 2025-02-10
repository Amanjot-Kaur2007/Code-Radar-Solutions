#include <stdio.h>

int main() {
    int num;
    printf("");
    scanf("%d", &num);
    if (num > 0) {
        printf("Positive", num);
    } else if (num < 0) {
        printf("Negative", num);
    } else {
        printf("Zero");
    }

    return 0;
}
