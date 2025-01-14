#include<stdio.h>
void sort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }}
void print(int arr[], int s) {
    for (int i = 0; i < s; i++) {
        printf("%d ", arr[i]);
    } printf("\n");
}

int main() {
    int x,arr[100];
    printf("Enter the size of the array:");
    scanf("%d",&x);
    printf("Enter the array elemets:\n");
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    printf("Unsorted array: \n");
    print(arr, x);
    sort(arr, x);
    printf("Sorted array: \n");
    print(arr, x);
    return 0;
}
