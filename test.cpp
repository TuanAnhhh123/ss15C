
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
    char email[50];
};


struct Student students[100];


int studentCount = 0;


void inputStudent(struct Student *student) {
    printf("Nhap ho va ten: ");
    scanf("%s", &*student.name);

    printf("Nhap tuoi: ");
    scanf("%d", &*student.age);

    printf("Nhap so dien thoai: ");
    scanf("%s", &*student.phoneNumber);

    printf("Nhap email: ");
    scanf("%s", &*student.email);
}


void addStudent() {
    if (studentCount < 100) {
        struct Student newStudent;
        inputStudent(&newStudent);

        students[studentCount++] = newStudent;

        printf("Them sinh vien thanh cong!\n");
    } else {
        printf("Khong the them sinh vien. Mang da day!\n");
    }
}


void editStudent(int position) {
    if (position >= 0 && position < studentCount) {
        printf("Nhap thong tin moi cho sinh vien thu %d:\n", position + 1);
        inputStudent(&students[position]);

        printf("Sua thong tin sinh vien thanh cong!\n");
    } else {
        printf("Vi tri khong hop le!\n");
    }
}


void deleteStudent(int position) {
    if (position >= 0 && position < studentCount) {
        for (int i = position; i < studentCount - 1; i++){
            students[i] = students[i + 1];
        }

        --studentCount;

        printf("Xoa sinh vien thanh cong!\n");
    } else {	
        printf("Vi tri khong hop le!\n");
    }
}
														

void printStudents() {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < studentCount; ++i) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ho va ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
        printf("Email: %s\n", students[i].email);
        printf("\n");
    }
}

int main() {
    int choice;
    do {
        printf("1. Them sinh vien\n");
        printf("2. Sua thong tin sinh vien\n");
        printf("3. Xoa sinh vien\n");
        printf("4. In danh sach sinh vien\n");
        printf("5. Thoat\n");

        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2: {
                int position;
                printf("Nhap vi tri muon sua: ");
                scanf("%d", &position);
                editStudent(position - 1);
                break;
            }
            case 3: {
                int position;
                printf("Nhap vi tri muon xoa: ");
                scanf("%d", &position);
                deleteStudent(position - 1);
                break;
            }
            case 4:
                printStudents();
                break;
            case 5:
                exit(0);
            
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (1);

    return 0;
}
