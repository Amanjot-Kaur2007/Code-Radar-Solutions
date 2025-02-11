#include <stdio.h>

int main() {
    int num;
    printf("");
    scanf("%d", &num);
    if (!(num > 0)) {
        printf("True", num);
    } else {
        printf("False", num);
    }

    return 0;
}
