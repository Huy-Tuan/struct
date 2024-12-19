#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void initializeStudents(struct Student students[], int *size) {
    students[0] = (struct Student){1, "Nguyen Van A", 20, "0123456789"};
    students[1] = (struct Student){2, "Tran Thi B", 21, "0987654321"};
    students[2] = (struct Student){3, "Le Van C", 22, "0912345678"};
    students[3] = (struct Student){4, "Pham Thi D", 23, "0967891234"};
    students[4] = (struct Student){5, "Nguyen Van E", 24, "0934567890"};
    *size = 5;
}

void printStudents(struct Student students[], int size) {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

void addStudent(struct Student students[], int *size) {
    if (*size >= 50) {
        printf("Khong the them sinh vien vi mang da day.\n");
        return;
    }

    struct Student newStudent;
    printf("Nhap ID sinh vien: ");
    scanf("%d", &newStudent.id);

    printf("Nhap ten sinh vien: ");
    getchar();
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);

    printf("Nhap so dien thoai sinh vien: ");
    getchar();
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0';

    students[*size] = newStudent;
    (*size)++;

    printf("Them sinh vien thanh cong.\n");
}

int main() {
    struct Student students[50];
    int size;

    initializeStudents(students, &size);
    printStudents(students, size);

    printf("\nThem sinh vien moi:\n");
    addStudent(students, &size);

    printf("\nDanh sach sinh vien sau khi them:\n");
    printStudents(students, size);

    return 0;
}

