//
// Created by Owner on 6/25/2025.
//
#include <stdio.h>
#include <string.h>

#define SIZE 5

typedef struct {
    int id;
    char name[50];
    int age;
} Student;

int main() {
    Student students[SIZE];
    int searchId, found = 0;

    //thông tin sinh viên
    printf("Nhap thong tin cho %d sinh vien:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("\nSinh vien %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        getchar(); // Đọc ký tự newline sau scanf
        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Xoá dấu newline
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
    }

    // Nhập id 
    printf("\nNhap ID can tim: ");
    scanf("%d", &searchId);

    for (int i = 0; i < SIZE; i++) {
        if (students[i].id == searchId) {
            printf("\nSinh vien tim thay:\n");
            printf("ID: %d\nTen: %s\nTuoi: %d\n", students[i].id, students[i].name, students[i].age);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nSinh vien khong ton tai\n");
    }

    return 0;
}

