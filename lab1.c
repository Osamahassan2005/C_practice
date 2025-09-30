
#include <stdio.h>
//Q-1
// int main() {
//     char emplyee_id[20];
//     float worked_hour;
//     float amount_per_hour;

//     printf("Employee ID : ");
//     scanf("%s",&emplyee_id);

//     printf("Total Worked hour in a month : ");
//     scanf("%f",&worked_hour);

//     printf("Amount received per hour : ");
//     scanf("%f",&amount_per_hour);

//     printf("Emplyee ID : %s",emplyee_id);
//     printf("\nSalary: %.2f",worked_hour*amount_per_hour);
//     return 0;
// }

//Q-2
int main(){
    float hieght;
    float width;

    printf("Enter Hieght:");
    scanf("%f",&hieght);
    printf("Enter width : ");
    scanf("%f",&width);
    printf("Perimeter Of Rectangle: %.2f",2*(hieght+width));
    printf("\nArea Of Rectangle: %.2f",hieght*width);
    return 0;
}

//Q-3
// int main(){
//     float height;

//     printf("Enter the hieght in cm: ");
//     scanf("%f",&height);

//     if (height < 150){
//         printf("Category: Dwarf\n");
//     } else if (height == 150 ){
//         printf("Category: Average\n");
//     } else if (height >=165){
//         printf("Category: Tall\n");
//     } else {
//         printf("Category: Between Average and Tall\n");
//     }
//     return 0;
// }

//Q-4
// void printBinaryDigit(int digit) {
//     switch(digit) {
//         case 0: printf("0"); break;
//         case 1: printf("1"); break;
//     }
// }
// void decimalToBinary(int n) {
//     if (n > 1) {
//         decimalToBinary(n / 2);
//     }
//     printBinaryDigit(n % 2);
// }
// int main() {
//     int decimal;   
//     printf("Enter a decimal number: ");
//     scanf("%d", &decimal);
    
//     if (decimal == 0) {
//         printf("Binary: 0\n");
//     } else {
//         printf("Binary: ");
//         decimalToBinary(decimal);
//         printf("\n");
//     } 
//     return 0;
// }


// //Q-5

// // Recursive function to calculate nth Fibonacci number
// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
// // Recursive function to print Fibonacci series without loops
// void printFibonacci(int current, int n) {
//     if (current < n) {
//         printf("%d ", fibonacci(current));
//         printFibonacci(current + 1, n);
//     }
// }
// int main() {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series: ");
//     printFibonacci(0, n); // Start from term 0 up to n-1
//     printf("\n");   
//     return 0;
// }
