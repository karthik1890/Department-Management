#include <stdio.h>
#include <string.h>

#define MAX 100
#define NAME_LEN 50
#define HEAD_LEN 50

typedef struct {
    int id;
    char name[NAME_LEN];
    char head[HEAD_LEN];
    int faculty;
    int students;
    int active;     // 1 = exists, 0 = deleted
} Department;

Department dept[MAX];
int count = 0;

void addDepartment() {
    if(count >= MAX) {
        printf("Storage full!\n");
        return;
    }

    Department d;
    printf("Enter Department ID: ");
    scanf("%d", &d.id);

    // flush newline
    getchar();

    printf("Enter Department Name: ");
    fgets(d.name, NAME_LEN, stdin);
    d.name[strcspn(d.name, "\n")] = '\0';

    printf("Enter Head of Department: ");
    fgets(d.head, HEAD_LEN, stdin);
    d.head[strcspn(d.head, "\n")] = '\0';

    printf("Enter No. of Faculty: ");
    scanf("%d", &d.faculty);

    printf("Enter No. of Students: ");
    scanf("%d", &d.students);

    d.active = 1;
    dept[count++] = d;

    printf("Department Added Successfully!\n");
}

void displayDepartments() {
    if(count == 0) {
        printf("No departments available.\n");
        return;
    }

    printf("\n--- All Departments ---\n");
    for(int i = 0; i < count; i++) {
        if(dept[i].active) {
            printf("ID: %d\n", dept[i].id);
            printf("Name: %s\n", dept[i].name);
            printf("Head: %s\n", dept[i].head);
            printf("Faculty: %d\n", dept[i].faculty);
            printf("Students: %d\n", dept[i].students);
            printf("----------------------------\n");
        }
    }
}

void searchDepartment() {
    int id;
    printf("Enter Department ID to Search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if(dept[i].active && dept[i].id == id) {
            printf("\nDepartment Found:\n");
            printf("ID: %d\n", dept[i].id);
            printf("Name: %s\n", dept[i].name);
            printf("Head: %s\n", dept[i].head);
            printf("Faculty: %d\n", dept[i].faculty);
            printf("Students: %d\n", dept[i].students);
            return;
        }
    }
    printf("Department Not Found!\n");
}

void updateDepartment() {
    int id;
    printf("Enter Department ID to Update: ");
    scanf("%d", &id);
    getchar();

    for(int i = 0; i < count; i++) {
        if(dept[i].active && dept[i].id == id) {
            printf("Enter New Name: ");
            fgets(dept[i].name, NAME_LEN, stdin);
            dept[i].name[strcspn(dept[i].name, "\n")] = '\0';

            printf("Enter New Head: ");
            fgets(dept[i].head, HEAD_LEN, stdin);
            dept[i].head[strcspn(dept[i].head, "\n")] = '\0';

            printf("Enter New Faculty Count: ");
            scanf("%d", &dept[i].faculty);

            printf("Enter New Student Count: ");
            scanf("%d", &dept[i].students);

            printf("Department Updated!\n");
            return;
        }
    }

    printf("Department Not Found!\n");
}

void deleteDepartment() {
    int id;
    printf("Enter Department ID to Delete: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if(dept[i].active && dept[i].id == id) {
            dept[i].active = 0;
            printf("Department Deleted Successfully!\n");
            return;
        }
    }

    printf("Department Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n=== University Department Management ===\n");
        printf("1. Add Department\n");
        printf("2. Display Departments\n");
        printf("3. Search Department\n");
        printf("4. Update Department\n");
        printf("5. Delete Department\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1: addDepartment(); break;
            case 2: displayDepartments(); break;
            case 3: searchDepartment(); break;
            case 4: updateDepartment(); break;
            case 5: deleteDepartment(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while(choice != 0);

    return 0;
}
