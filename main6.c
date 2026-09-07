//WAP to print, if the given number is Odd or Even

#include <stdio.h>

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n%2==0){
        printf("%d is an even number", n);
    }
    else{
        printf("%d is an odd number", n);
    }
    return 0;
}