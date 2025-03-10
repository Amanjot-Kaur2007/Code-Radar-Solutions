#include<stdio.h>
int main(){
    int x,n=1;
    scanf("%d",&n);
    for(int i=1;i<=x;i++){
        for(int j=0;j<i;j++){
            printf("%d ",n++);
        }
        printf("\n");
    }
    return 0;
}