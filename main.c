#include <stdio.h>
#include "menu.h"
int main(){
    int choice;
    do{
        showMenu();
        scanf("%d",&choice);
        handleChoice(choice);
    }while(choice != 0);
    return 0;
}