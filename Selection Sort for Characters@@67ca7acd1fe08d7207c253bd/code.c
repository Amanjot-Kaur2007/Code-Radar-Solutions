#include<stdio.h>
void selectionSort(char arr[], int n){
    for(int i=0;i<n-1;i++){
        minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        if(minindex!=i){
            char temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }
    }
}
void printArray(char arr, int n){
    for (int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}