#include <stdio.h>

typedef struct
{
    int real;
    int imaginary;
} complex;

int main() {
    complex num1, num2, num3;
    printf("Enter the real and imaginary part of the first complex number: ");
    scanf("%d %d", &num1.real, &num1.imaginary);
    printf("Enter the real and imaginary part of the second complex number: ");
    scanf("%d %d", &num2.real, &num2.imaginary);

    num3.real = num1.real + num2.real;
    num3.imaginary = num1.imaginary + num2.imaginary;
    printf("The sum of the two complex numbers is: %d + %di\n", num3.real, num3.imaginary);

    num3.real = num1.real - num2.real;
    num3.imaginary = num1.imaginary - num2.imaginary;
    printf("The difference of the two complex numbers is: %d + %di\n", num3.real, num3.imaginary);

    return 0;
}