#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[50];
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

void editStudent(struct Student students[], int size) {
    int id;
    printf("Nhap ID sinh vien can chinh sua: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (students[i].id == id) {
            found = 1;
            printf("Nhap ten moi: ");
            getchar();
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0';

            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);

            printf("Chinh sua thanh cong.\n");
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien voi ID %d.\n", id);
    }
}

int main() {
    struct Student students[50];
    int size;

    initializeStudents(students, &size);
    printStudents(students, size);

    editStudent(students, size);

    printStudents(students, size);

    return 0;
}

