#include<stdio.h>
void bubbleSort(int arr[], int n){
    for (int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;        
            flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}
void printArray(int arr[], int n){
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n ");
}