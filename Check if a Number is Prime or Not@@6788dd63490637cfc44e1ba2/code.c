#include<stdio.h>
int main(){
    int a,b=1;
    scanf("%d",&a);
    for(int i=2,i<a,i++){
        if(a%i==0){
            b=0;
            break;
        }
    }
    if(b==0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}