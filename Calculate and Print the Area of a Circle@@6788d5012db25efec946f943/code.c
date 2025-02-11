#include <stdio.h>
#define PI 3.14159

int main() {
    double radius, area;
    printf("");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("Area", area);

    return 0;
}
