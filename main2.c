// #include <stdio.h>

// int main(){
//     int a, area;
//     printf("Enter the length of square: ");
//     scanf("%d", &a);
    
//     area = a * a;
//     printf("Area of square : %d", area);
    
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     float r, pi = 22/7, area;
//     printf("Enter the radius of circle: ");
//     scanf("%f", &r);
    
//     area = pi * r * r;
//     float circum = 2 * pi * r;
//     printf("Area of circle : %.2f\n", area);
//     printf("Circumference of circle : %.2f", circum);
    
//     return 0;
// }


#include <stdio.h>

int main(){
    int a, b, sum;
    printf("Enter the both numbers(With space separated): ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum of two numbers = %d", sum);
    return 0;
}