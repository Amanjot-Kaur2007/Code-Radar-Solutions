#include<stdio.h>
int isPrime(int num){
    int flag=1;
    for int(i=2;i<num;i++){
        if(num%i==0) {
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    scanf("%d"&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isprime(num));
    }
    return 0;
}
