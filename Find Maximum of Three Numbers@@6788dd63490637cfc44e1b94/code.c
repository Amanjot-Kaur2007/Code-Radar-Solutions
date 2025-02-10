#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("");
    printf("");
    scanf("%d", &num1);
    printf("");
    scanf("%d", &num2);
    printf("");
    scanf("%d", &num3);
    if (num1 >= num2 && num1 >= num3) {
        printf("", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("", num2);
    } else {
        printf("", num3);
    }

    return 0;
}
