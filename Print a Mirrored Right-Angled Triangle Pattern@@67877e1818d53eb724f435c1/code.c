#include<stdio.h>
int main(){
    int i,j,n,s;
    printf("");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=n;s>=i;s--){
            printf("");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}