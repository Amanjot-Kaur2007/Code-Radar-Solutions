#include<stdio.h>
int main(){
    int a,b,c,n;
    printf("");
    scanf("%d",&n);
    for(a=1;a<=n,a++){
        for(c=n;c>=a;c--){
            printf(" ");
        }
        for(b=1;b<=2*a-1;b++){
            printf("*");
        }
        printf("\n");
    }
    for(a=n;a>=n,a--){
        for(c=n;c>=a;c--){
            printf(" ");
        }
        for(b=1;b<=2*a-1;b++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}