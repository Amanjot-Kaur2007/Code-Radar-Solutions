#include <stdio.h>

int main() {
    int num1, num2;
    printf("");
    scanf("%d %d", &num1,&num2);
    if (num1 > num2) {
        printf("%d\n", num1);
    } else (num2 > num1) {
        printf("%d\n", num2);
    }

    return 0;
}
