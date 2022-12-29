#include <stdio.h>
struct add_complex
{
    int real;
    int complex;
} ac[2];
void main()
{
    struct add_complex n1, n2, n3;
    printf("Enter the Real part of First Number\n");
    scanf("%d", &n1.real);
    printf("Enter the Complex part of First Number\n");
    scanf("%d", &n1.complex);
    printf("Enter the Real part of Second Number\n");
    scanf("%d", &n2.real);
    printf("Enter the Complex part of Second Number\n");
    scanf("%d", &n2.complex);
    n3.real = n1.real + n2.real;
    n3.complex = n1.complex + n2.complex;
    printf("Result = %d  + %dj", n3.real, n3.complex);
}
