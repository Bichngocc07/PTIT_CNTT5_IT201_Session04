//
// Created by Owner on 6/25/2025.
//
#include <stdio.h>
int main() {
    int n;
    printf("Nhan phan tu\n");
    scanf("%d",&n);
    int arr[n];
    for(int j=0;j<n;j++) {
        printf("Nhan phan tu\n");
        scanf("%d",&arr[j]);
    }
    int min=arr[0];
    int minIndex=0;
    for(int j=0;j<n;j++) {
        if(arr[j]<min) {
            min=arr[j];
            minIndex=j;
        }
    }
    printf("Vi tri phan tu nho nhat: %d\n");

    return 0;
}