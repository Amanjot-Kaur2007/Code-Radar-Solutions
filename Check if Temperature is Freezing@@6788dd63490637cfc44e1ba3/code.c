#include<stdio.h>
int main(){
    int temp;
    printf("");
    scanf("%d",&temp);
    if (temp<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
    return 0;
}