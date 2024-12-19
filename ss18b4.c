#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int id;
	char fullName[50];
	int age;
	char phoneNumber[50];
} SinhVien;

int main () {
	SinhVien students[50];
	printf("Nhap thong tin cho tung sinh vien \n");
	for(int i = 0; i < 5; i++){
		printf("Thong tinh sinh vien thu %d:\n", i+1);
		students[i].id = i + 1;
		printf("id:%d\n",students[i].id);		
		printf("Ho va ten: " );
		fgets(students[i].fullName, sizeof(students[i].fullName), stdin);
		size_t len = strlen(students[i].fullName);
		if(len > 0 && students[i].fullName[len - 1] == '\n'){
			students[i].fullName[len - 1] = '\0';
		}
		printf("Tuoi: ");
		scanf("%d", &students[i].age);
		getchar();
		printf("So dien thoai: ");
		fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
	}
	printf("\nSau day la thong tin cua sinh vien vua nhap: \n");
	for(int i = 0; i < 5; i++){
		printf("\nid:%d\n",students[i].id);
		printf("Ho va ten sinh vien %d la: %s\n", i + 1, students[i].fullName);
		printf("Tuoi cua sinh vien thu %d la: %d\n", i + 1, students[i].age);
		printf("So dien thoai cua sinh vien thu %d la: %s",i + 1, students[i].phoneNumber);
	}
	printf("\n");
	return 0;
}

