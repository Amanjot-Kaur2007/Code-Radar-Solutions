#include<stdio.h>
int main(){
    int a,b;
    printf("");
    scanf("%d %d",&a,&b);
    if(a==b*b || b==a*a){
        printf("Yes");
    }
    else{
        printf("No");
    }
}