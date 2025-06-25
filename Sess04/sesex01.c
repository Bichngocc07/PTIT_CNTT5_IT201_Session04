//
// Created by Owner on 6/25/2025.
//
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[i+1]) {
            printf("Chi so dau tien la: ");
            int t = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = t;
        }
    }
    if (!found) {
        printf("Khong tim thay phan tu");
        return 0;
    }
}