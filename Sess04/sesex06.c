//
// Created by Owner on 6/25/2025.
//
#include <stdio.h>

int main() {
    int n ,i ;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu: ");
        scanf("%d", &arr[i]);
    }
    int max = -1 ;
    int check;
    printf("Phan tu: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            check = i;
        }
        if (arr[i] == max) {
            printf("Phan tu: ");
        }}
    return 0;
    }
