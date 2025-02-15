#include <stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);
    if(n>0){
        if (n>1 && n<100){
        printf("In Range");
         }
        else{
        printf("Out Of Range");
        }
    else{
      printf("Out Of Range");  
    }
    }
    return 0;
}