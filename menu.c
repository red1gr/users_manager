#include <stdio.h>
#include "menu.h"
#include "user.h"
#include "math_tools.h"

void showMenu() {
    printf("\n==== C MASTER SYSTEM ====\n");
    printf("1. Add User\n");
    printf("2. Show Users\n");
    printf("3. Search User by Id\n");
    printf("4. Delete User by Id\n");
    printf("5. Save Users by Id\n");
    printf("6. Math Tools\n");
    printf("0. Exit\n");
    printf("Choose: ");
}

void handleChoice(int choice) {
    switch (choice) {
        case 1:
            addUser();
            break;
        case 2:
            showUsers();
            break;
        case 3:
            SearchUserById();
            break;
        case 4:
            DeleteUserById();
            break;
        case 5:
            SaveUserstoFile();
            break;
        case 6:
            mathMenu();
            break;
        
        case 0:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice\n");
    }
}
