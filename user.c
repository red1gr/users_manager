#include <stdio.h>
#include "user.h"
#include <stdbool.h>
#include <string.h>


User users[MAX_USERS];
int userCount = 0;

void addUser() {
    User *u = &users[userCount];

    printf("Enter ID: ");
    scanf("%d", &u->id);

    printf("Enter Name: ");
    scanf("%s", u->name);

    int Tage;
    printf("Enter Age: ");
    scanf("%d", &Tage);

    while (Tage < 0 || Tage > 100) {
        printf("Invalid age. Enter again: ");
        scanf("%d", &Tage);
    }

    u->age = Tage;

    userCount++;
}

void showUsers() {
    for (int i = 0; i < userCount; i++) {
        printf("%d | %s | %d\n", users[i].id, users[i].name, users[i].age);
    }

    char ans;
    printf("Do you want me to sort users by age (y|n)? ");
    scanf(" %c", &ans);

    if (ans == 'y') {
        for (int i = 0; i < userCount - 1; i++) {
            for (int j = i + 1; j < userCount; j++) {
                if (users[i].age > users[j].age) {
                    User temp = users[i];
                    users[i] = users[j];
                    users[j] = temp;
                }
            }
        }

        printf("Users sorted by age:\n");
        for (int i = 0; i < userCount; i++) {
            printf("%d | %s | %d\n", users[i].id, users[i].name, users[i].age);
        }
    } else {
        printf("ok!\n");
    }
}

void SearchUserById() {
    int enteredUserId;
    printf("Please Enter User ID: ");
    scanf("%d", &enteredUserId);

    bool found = false;
    for (int i = 0; i < userCount; i++) {
        if (users[i].id == enteredUserId) {
            printf("USER FOUND:\nID: %d | Name: %s | Age: %d\n",
                   users[i].id,
                   users[i].name,
                   users[i].age);
            found = true;
            break;
        }
    }

    if (!found) {
        printf("User with ID %d not found.\n", enteredUserId);
    }
}
 

void DeleteUserById() {
    int enteredUserId;
    printf("Please Enter User ID: ");
    scanf("%d", &enteredUserId);

    bool deleted = false;

    for (int i = 0; i < userCount; i++) {
        if (users[i].id == enteredUserId) {
            printf("USER FOUND:\nID: %d | NAME: %s | AGE: %d\nIS DELETED\n",
                   users[i].id,
                   users[i].name,
                   users[i].age);

            for (int j = i; j < userCount - 1; j++) {
                users[j] = users[j + 1];
            }

            userCount--;
            deleted = true;
            break;
        }
    }

    if (!deleted) {
        printf("User with ID %d not found.\n", enteredUserId);
    }
}


#include <stdio.h>

#define XOR_KEY 0xAA  

void SaveUserstoFile() {
    FILE *file = fopen("users.dat", "wb"); 
    if (file == NULL) {
        printf("Error: Could not open file for writing!\n");
        return;
    }

    for (int i = 0; i < userCount; i++) {
       
        int encryptedId = users[i].id ^ XOR_KEY;
        fwrite(&encryptedId, sizeof(int), 1, file);

        
        int encryptedAge = users[i].age ^ XOR_KEY;
        fwrite(&encryptedAge, sizeof(int), 1, file);

       
        for (int j = 0; j < sizeof(users[i].name); j++) {
            char encryptedChar = users[i].name[j] ^ XOR_KEY;
            fwrite(&encryptedChar, sizeof(char), 1, file);
        }
    }

    fclose(file);
    printf("Users saved and encrypted successfully!\n");
}
