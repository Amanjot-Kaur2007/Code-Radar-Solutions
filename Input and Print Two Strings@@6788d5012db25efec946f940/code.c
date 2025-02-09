#include <stdio.h>

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    printf("You entered: %s\n", str1);
    printf("You entered: %s\n", str2);

    return 0;
}
