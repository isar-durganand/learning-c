//Program to find the largest number between 2 numbers

// #include <stdio.h>

// int main(){
//     int a, b;
//     printf("Enter the first number : ");
//     scanf("%d", &a);
//     printf("Enter the second number : ");
//     scanf("%d", &b);

//     if(a>b){
//         printf("%d is the largest number.", a);
//     }else{
//         printf("%d is the largest number.", b);

//     }
    
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int a, b, largest;
//     printf("Enter the first number : ");
//     scanf("%d", &a);
//     printf("Enter the second number : ");
//     scanf("%d", &b);

//     if(a>b){
//         largest = a;
//         // printf("%d is the largest number.", a);
//     }else{
//         // printf("%d is the largest number.", b);
//         largest = b;

//     }

//     printf("The largest number is : %d", largest);
//     return 0;
// }




#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    if(a>b){
        // largest = a;
        printf("%d is the largest number.", a);
    }else if(a=b) {
        printf("Both %d and %d are equal", a, b);
    } else{
        printf("%d is the largest number", b);
    }
    return 0;
}