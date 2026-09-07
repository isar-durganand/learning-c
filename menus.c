//WAP to create a restaurant Menus using switch case statement

#include <stdio.h>

int main(){
    int choice;
    printf("Welcome to the Restaurant!\n");
    printf("Please select an option from the menu(1-7):\n");
    printf("1. Pizza\n2. Burger\n3. Pasta\n4. Salad\n5. Sandwich\n6. Soup\n7. Cold Coffee\n");

    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("You have selected Pizza.\n");
            break;
        case 2:
            printf("You have selected Burger.\n");
            break;
        case 3:
            printf("You have selected Pasta.\n");
            break;
        case 4:
            printf("You have selected Salad.\n");
            break;
        case 5:
            printf("You have selected Sandwich.\n");
            break;
        case 6:
            printf("You have selected Soup.\n");
            break;
        case 7:
            printf("You have selected Cold Coffee.\n");
            break;
        default:
            printf("Invalid choice! Please select a valid option from the menu.\n");
    }

    return 0;
}