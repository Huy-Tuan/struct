#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int id;
    char name[50];
    int age;
    long long phoneNumber;
};

void initializeStudents(struct Student students[], int *size) {
    students[0] = (struct Student){1, "Nguyen Van A", 20, 123456789};
    students[1] = (struct Student){2, "Tran Thi B", 21, 987654321};
    students[2] = (struct Student){3, "Le Van C", 22, 912345678};
    students[3] = (struct Student){4, "Pham Thi D", 23, 967891234};
    students[4] = (struct Student){5, "Nguyen Van E", 24, 934567890};
    *size = 5;
}

void printStudents(struct Student students[], int size) {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: 0%lld\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

void deletStudent(struct Student students[], int size) {
	char studentDeleted[50];
	printf("Hay nhap ten sinh vien can xoa: ");
	fgets(studentDeleted, sizeof(studentDeleted),stdin);
	for(int i = 0; i < size; i++){
		strcmp(studentDeleted, students[i]);
	}
	for(int i = 0; i < size; i++){
		if(studentDeleted == students[i].name){
		strcpy(students[i].name, students[i+1].name);
		students[i].age = students[i + 1].age;
		students[i].phoneNumber = students[i + 1].phoneNumber;	
	 }
	}
	size--;
	printf("Danh sach sinh vien sau khi xoa: \n");
	for(int i = 0; i < size; i++){
		printf("ID: %d, Name: %s, Age: %d, Phone: 0%lld\n",
            students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
	}
}
int main () {
	struct Student students[50];
	int size;
	initializeStudents(students, &size);
	printStudents(students, size);
	deletStudent(students, size);
	return 0;
}
