#include<stdio.h>
void bubbleSort(int arr[], int n){
    for (int i=0;i<size-1;i++){
        flag=0;
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;        
            flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}
void printArray(int arr[], int size){
    for (int i=o;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}