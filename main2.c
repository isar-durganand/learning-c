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


// #include <stdio.h>

// int main(){
//     int a, b, sum;
//     printf("Enter the both numbers(With space separated): ");
//     scanf("%d %d", &a, &b);

//     sum = a + b;

//     printf("Sum of two numbers = %d", sum);
//     return 0;
// }



#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c){
        printf("All numbers are equal.\n");
    } else if(a>=b && a>=c){
        printf("%d is the largest number.\n", a);
    } else if(b>=a && b>=c){
        printf("%d is the largest number.\n", b);
    } else {
        printf("%d is the largest number.\n", c);
    }
    return 0;
}