#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    if (n<1){
        return 1;
    }
    if(n=0){
        return 0;
    }
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);

    return 0;
}
