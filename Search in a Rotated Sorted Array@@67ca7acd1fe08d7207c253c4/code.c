#include<stdio.h>
void searchInRotatedArray(int arr[], int n, int target){
    target=target%n;
    for (int i=n-target-1;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int j=0;j<n-target-1,j++){
        printf("%d ",arr[j]);
    }
}