#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien{
	char fullName[50];
	int age;
	char phoneNumber[50];
};

int main () {
	struct SinhVien a;
	printf("Ho va ten: ");
	fgets(a.fullName, sizeof(a.fullName), stdin);
	printf("Tuoi cua ban: ");
	scanf("%d", &a.age);
	printf("So dien thoai: ");
	scanf("%s", &a.phoneNumber);
	printf("Ten cua ban: %s", a.fullName);
	printf("Tuoi cua ban: %d\n", a.age);
	printf("So dien thoai: %s", a.phoneNumber);
}
