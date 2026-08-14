#ifndef USER_H
#define USER_H

#define MAX_USERS 5

typedef struct {
    int id;
    char name[50];
    int age;
} User;

void addUser();
void showUsers();
void SearchUserById();
void DeleteUserById();
void SaveUserstoFile();
#endif
