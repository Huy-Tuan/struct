#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
	struct Sinh_vien{
		char name[100];
		int age;
		char phone_number[50];
	};
int main () {
	struct Sinh_vien s;
	strcpy(s.name, "Nguyen Cong Gia Huy");
	s.age = 18;
	strcpy(s.phone_number, "123456789");
	printf("Ho va ten: %s\n", s.name);
	printf("Tuoi: %d\n", s.age);
	printf("So dien thoai: %s\n",s.phone_number);
}
