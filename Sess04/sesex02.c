//
// Created by Owner on 6/25/2025.
//
#include <stdio.h>
int main() {
    int i,n;
    printf("Nhap phan tu\n");
    scanf("%d",&i);

    int arr[n];
    for(int j=0;j<n;j++) {
        printf("Nhap phan tu\n");
        scanf("%d",&arr[j]);
    }
    int max=arr[0];
    int maxIndex=0;
    for(int j=0;j<n;j++) {
        if(arr[j]>max) {
            max=arr[j];
            maxIndex=j;
        }
    }
    printf("Chi so cua phan tu lon nhat dau tien cua mang %d\n",maxIndex);
    return 0;
}
