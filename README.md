# C Language Learning Guide - From Basics to Intermediate

A personal learning document for mastering C programming from college. This guide progresses from fundamentals to advanced topics with code examples and practice problems.

---

## Table of Contents
1. [C Basics](#c-basics)
2. [Variables & Data Types](#variables--data-types)
3. [Input/Output Operations](#inputoutput-operations)
4. [Conditional Statements](#conditional-statements)
5. [Loops](#loops)
6. [Arrays](#arrays)
7. [Functions](#functions)
8. [Pointers](#pointers)
9. [Strings](#strings)
10. [Common Mistakes](#common-mistakes)
11. [Practice Problems](#practice-problems)

---

## C Basics

### What is C?
- Low-level language with high-level features
- Procedural programming language
- Compiled language (faster execution)
- Foundation for learning other languages

### Basic Program Structure
```c
#include <stdio.h>    // Include standard input/output library

int main(){           // Main function - entry point
    printf("Hello, C!"); // Statement
    return 0;         // Return 0 (success)
}
```

### Key Points:
- Every program starts with `main()` function
- `#include` directives bring in libraries
- Statements end with semicolon `;`
- Proper indentation makes code readable

---

## Variables & Data Types

### Primary Data Types

| Type | Size | Range | Example |
|------|------|-------|---------|
| `int` | 2-4 bytes | -2,147,483,648 to 2,147,483,647 | `int age = 25;` |
| `float` | 4 bytes | Up to 6-7 digits precision | `float pi = 3.14;` |
| `double` | 8 bytes | Up to 15-16 digits precision | `double area = 3.14159;` |
| `char` | 1 byte | Single character | `char initial = 'A';` |

### Variable Declaration & Initialization
```c
int age;                    // Declaration
age = 25;                   // Initialization
int score = 100;            // Declaration + Initialization (Preferred)

// Multiple declarations
int x = 5, y = 10, z = 15;
```

---

## Input/Output Operations

### printf() - Output to Screen
```c
#include <stdio.h>

int main(){
    int num = 42;
    float price = 19.99;
    
    printf("Simple text\n");                    // \n = newline
    printf("Number: %d\n", num);               // %d = integer format
    printf("Price: %.2f\n", price);            // %.2f = 2 decimal places
    printf("Text: %s\n", "Hello");             // %s = string format
    printf("Char: %c\n", 'A');                 // %c = character format
    
    return 0;
}
```

### Common Format Specifiers
- `%d` - Integer
- `%f` - Float
- `%.2f` - Float with 2 decimal places
- `%s` - String
- `%c` - Single character

### scanf() - Input from User
```c
#include <stdio.h>

int main(){
    int age;
    float height;
    
    printf("Enter your age: ");
    scanf("%d", &age);                         // & = address of variable
    
    printf("Enter your height: ");
    scanf("%f", &height);                      // & required for all scanf
    
    printf("Age: %d, Height: %.2f\n", age, height);
    
    return 0;
}
```

### Important: `&` in scanf()
- `scanf()` needs the **address** of the variable, not just its name
- Always use `&` before variable name in `scanf()`
- Exception: arrays and strings don't need `&`

---

## Conditional Statements

### if Statement
```c
#include <stdio.h>

int main(){
    int a = 10;
    
    if(a > 5){
        printf("a is greater than 5\n");
    }
    
    return 0;
}
```

### if-else Statement
```c
int a = 3, b = 7;

if(a > b){
    printf("%d is larger\n", a);
} else {
    printf("%d is larger\n", b);
}
```

### if-else if-else Statement
```c
int score = 75;

if(score >= 90){
    printf("Grade: A\n");
} else if(score >= 80){
    printf("Grade: B\n");
} else if(score >= 70){
    printf("Grade: C\n");
} else {
    printf("Grade: F\n");
}
```

### Multiple Conditions (Logical Operators)
```c
// AND operator: &&
if(age >= 18 && age <= 60){
    printf("Working age\n");
}

// OR operator: ||
if(day == 6 || day == 7){
    printf("Weekend!\n");
}

// NOT operator: !
if(!isRaining){
    printf("Go out to play\n");
}
```

### Comparison Operators
| Operator | Meaning | Example |
|----------|---------|---------|
| `==` | Equal to | `if(a == b)` |
| `!=` | Not equal to | `if(a != b)` |
| `>` | Greater than | `if(a > b)` |
| `<` | Less than | `if(a < b)` |
| `>=` | Greater or equal | `if(a >= b)` |
| `<=` | Less or equal | `if(a <= b)` |

### Nested if Statements
```c
int age = 25;
int hasLicense = 1;  // 1 = true, 0 = false

if(age >= 18){
    if(hasLicense == 1){
        printf("You can drive\n");
    } else {
        printf("Get a license first\n");
    }
} else {
    printf("Too young to drive\n");
}
```

### switch Statement
```c
int day = 3;

switch(day){
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    default:
        printf("Unknown day\n");
}
```

---

## Loops

### while Loop
```c
int i = 1;

while(i <= 5){
    printf("%d\n", i);
    i++;  // Increment: i = i + 1
}
// Output: 1 2 3 4 5
```

### do-while Loop (Runs at least once)
```c
int i = 1;

do {
    printf("%d\n", i);
    i++;
} while(i <= 5);
```

### for Loop (Most Common)
```c
// Syntax: for(initialization; condition; increment/decrement)
for(int i = 1; i <= 5; i++){
    printf("%d\n", i);
}
// Output: 1 2 3 4 5
```

### Loop Control Statements
```c
// break - Exit loop immediately
for(int i = 1; i <= 10; i++){
    if(i == 5) break;
    printf("%d\n", i);
}
// Output: 1 2 3 4

// continue - Skip current iteration
for(int i = 1; i <= 5; i++){
    if(i == 3) continue;
    printf("%d\n", i);
}
// Output: 1 2 4 5
```

### Increment/Decrement Operators
```c
int a = 5;
a++;        // Post-increment: a = 6
++a;        // Pre-increment: a = 7
a--;        // Post-decrement: a = 6
--a;        // Pre-decrement: a = 5

a += 3;     // a = a + 3 (Compound assignment)
a -= 2;     // a = a - 2
a *= 2;     // a = a * 2
a /= 3;     // a = a / 3
```

---

## Arrays

### 1D Arrays
```c
#include <stdio.h>

int main(){
    // Declaration and initialization
    int numbers[5] = {10, 20, 30, 40, 50};
    
    // Access elements (0-indexed)
    printf("%d\n", numbers[0]);    // 10
    printf("%d\n", numbers[2]);    // 30
    
    // Modify elements
    numbers[1] = 25;
    
    // Loop through array
    for(int i = 0; i < 5; i++){
        printf("%d\n", numbers[i]);
    }
    
    return 0;
}
```

### 2D Arrays
```c
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

// Access element
printf("%d\n", matrix[0][2]);    // 3
printf("%d\n", matrix[2][1]);    // 8

// Loop through 2D array
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
}
```

### Array of Strings
```c
char fruits[3][20] = {
    "Apple",
    "Banana",
    "Orange"
};

printf("%s\n", fruits[0]);    // Apple
```

---

## Functions

### Function Definition
```c
// Syntax: return_type function_name(parameters){
//     function body
//     return value (if return_type is not void)
// }

int add(int a, int b){      // Parameters
    int sum = a + b;
    return sum;             // Return type: int
}

void greet(char name[]){    // No return value (void)
    printf("Hello, %s\n", name);
}

int main(){
    int result = add(5, 3);         // Function call with arguments
    printf("Sum: %d\n", result);    // 8
    
    greet("Alice");                 // Hello, Alice
    
    return 0;
}
```

### Function Prototypes (Forward Declaration)
```c
// Declare before main()
int multiply(int x, int y);

int main(){
    int result = multiply(4, 5);
    printf("%d\n", result);
    return 0;
}

// Define after main()
int multiply(int x, int y){
    return x * y;
}
```

### Types of Functions
- **Parameterless, No Return**: `void functionName(){}`
- **Parameterless, With Return**: `int functionName(){}`
- **With Parameters, No Return**: `void functionName(int a, int b){}`
- **With Parameters, With Return**: `int functionName(int a, int b){}`

---

## Pointers

### Basic Pointer Concepts
```c
int x = 10;
int *p;         // Pointer declaration
p = &x;         // & = address-of operator

printf("%d\n", x);      // 10 (value)
printf("%p\n", &x);     // Memory address of x
printf("%p\n", p);      // Same address
printf("%d\n", *p);     // 10 (dereference: value at address)

*p = 20;        // Change value through pointer
printf("%d\n", x);      // 20 (x changed!)
```

### Pointer to Arrays
```c
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr;         // arr is already an address

printf("%d\n", *ptr);           // 1
printf("%d\n", *(ptr + 1));     // 2
printf("%d\n", ptr[2]);         // 3 (equivalent)
```

---

## Strings

### Character Arrays as Strings
```c
char str[50];                   // String declaration
printf("Enter name: ");
scanf("%s", str);               // NO & for strings!

printf("Hello, %s\n", str);
```

### String Functions (Need `#include <string.h>`)
```c
#include <string.h>

char str1[50] = "Hello";
char str2[50] = "World";

int len = strlen(str1);         // Length: 5
strcpy(str2, str1);             // Copy str1 to str2
strcat(str1, str2);             // Concatenate
int cmp = strcmp(str1, str2);   // Compare (0 if equal)
```

---

## Common Mistakes

### ❌ Mistake 1: Using `=` instead of `==` in Comparisons
```c
// WRONG
if(a = b){          // This assigns b to a!
    printf("Equal\n");
}

// CORRECT
if(a == b){         // This compares
    printf("Equal\n");
}
```

### ❌ Mistake 2: Forgetting `&` in scanf()
```c
// WRONG
int age;
scanf("%d", age);   // No &

// CORRECT
int age;
scanf("%d", &age);  // With &
```

### ❌ Mistake 3: Integer Division Loss
```c
// WRONG
float pi = 22/7;    // Result: 3.0 (integer division)

// CORRECT
float pi = 22.0/7;  // Result: 3.142857...
```

### ❌ Mistake 4: Array Index Out of Bounds
```c
int arr[5];
printf("%d\n", arr[10]);    // Undefined behavior!
// Stay within 0-4 for 5-element array
```

### ❌ Mistake 5: Not Initializing Variables
```c
// WRONG
int x;
printf("%d\n", x);  // Garbage value

// CORRECT
int x = 0;
printf("%d\n", x);  // 0
```

### ❌ Mistake 6: Using scanf() in loops without clearing buffer
```c
// Problem: Newline character stays in input buffer
int num;
scanf("%d", &num);
scanf("%c", &char);  // Gets newline, not character!

// Solution: Add space before %c
scanf(" %c", &char);
```

---

## Practice Problems

### Level 1: Basics & Conditionals

**1. Simple Calculator**
Create a program that takes two numbers and an operator (+, -, *, /) and performs the operation.

**2. Grade Calculator**
Write a program that takes marks and outputs the grade:
- A: 90-100
- B: 80-89
- C: 70-79
- D: 60-69
- F: Below 60

**3. Leap Year Checker**
Check if a given year is a leap year.
- Divisible by 400 → Leap
- Divisible by 100 (but not 400) → Not leap
- Divisible by 4 (but not 100) → Leap
- Otherwise → Not leap

### Level 2: Loops

**4. Number Pyramid**
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

**5. Factorial Calculator**
Calculate n! (factorial) using a loop.

**6. Fibonacci Series**
Print first n Fibonacci numbers: 0, 1, 1, 2, 3, 5, 8, 13...

### Level 3: Arrays & Functions

**7. Array Sum & Average**
Write a function to find sum and average of array elements.

**8. Reverse an Array**
Reverse the order of array elements.

**9. Search in Array**
Implement linear search to find if an element exists in array.

### Level 4: Strings

**10. String Length Without strlen()**
Count string length without using built-in functions.

**11. Palindrome Checker**
Check if a string is a palindrome.

**12. Count Vowels & Consonants**
Count vowels and consonants in a string.

---

## Learning Path

### Phase 1: Fundamentals (Current Level ✓)
- [x] Variables and data types
- [x] Input/Output (printf, scanf)
- [x] Conditional statements
- [ ] Loops (in progress)
- [ ] Arrays

### Phase 2: Intermediate
- [ ] Functions and recursion
- [ ] Strings and string manipulation
- [ ] Pointers (basic)

### Phase 3: Advanced
- [ ] Dynamic memory allocation (malloc, free)
- [ ] Structures and unions
- [ ] File I/O operations
- [ ] Pointers (advanced)
- [ ] Pre-processor directives

### Phase 4: Advanced Topics
- [ ] Recursion
- [ ] Linked lists
- [ ] Binary search trees
- [ ] Sorting algorithms
- [ ] Searching algorithms

---

## Useful Tips

✅ **Write code daily** - Practice makes perfect
✅ **Debug step by step** - Use printf() to check values
✅ **Read error messages** - They often point to the problem
✅ **Start small** - Solve simple problems before complex ones
✅ **Understand, don't memorize** - Focus on how and why
✅ **Test edge cases** - What if input is 0, negative, or very large?
✅ **Comment your code** - Helps you remember what you did

---

## Quick Reference

```c
// Program Template
#include <stdio.h>
#include <string.h>

int main(){
    // Your code here
    
    return 0;
}

// Common shortcuts
i++         // i = i + 1
i--         // i = i - 1
a += 5      // a = a + 5
printf()    // Output
scanf()     // Input
if-else     // Conditional
for/while   // Loops
```

---

## Resources for Further Learning
- Practice on: HackerRank, LeetCode, Codechef
- Books: "The C Programming Language" by Kernighan and Ritchie
- YouTube: Follow channels dedicated to C programming
- College assignments: Always do them!

---

**Last Updated:** When actively learning
**Keep this document updated with your progress!**
