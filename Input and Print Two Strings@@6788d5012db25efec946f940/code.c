#include <stdio.h>

int main() {
    char str1[30], str2[30];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    printf("You entered: %s\n", str1);
    printf("You entered: %s\n", str2);

    return 0;
}
