#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void sapXepSinhVien(struct SinhVien arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (strcmp(arr[j].name, arr[j + 1].name) > 0) {
                struct SinhVien temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void inDanhSachSinhVien(const struct SinhVien arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", arr[i].id, arr[i].name, arr[i].age, arr[i].phoneNumber);
    }
}

int main() {
    struct SinhVien sinhVienArray[5] = {
        {1, "Tran Van A", 20, "0123456789"},
        {2, "Nguyen Thi B", 19, "0987654321"},
        {3, "Le Van C", 21, "0345678901"},
        {4, "Pham Thi D", 22, "0567890123"},
        {5, "Hoang Van E", 20, "0789012345"}
    };

    printf("Danh sach sinh vien truoc khi sap xep:\n");
    inDanhSachSinhVien(sinhVienArray, 5);

    sapXepSinhVien(sinhVienArray, 5);

    printf("\nDanh sach sinh vien sau khi sap xep:\n");
    inDanhSachSinhVien(sinhVienArray, 5);

    return 0;
}

