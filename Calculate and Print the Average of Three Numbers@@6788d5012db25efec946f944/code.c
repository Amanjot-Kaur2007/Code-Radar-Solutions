#include <stdio.h>

int main() {
    float num1, num2, num3, average;
    printf("");
    scanf("%f %f %f", &num1, &num2, &num3);
    average = (num1 + num2 + num3) / 3.0;
    printf("Average: ", average);

    return 0;
}
