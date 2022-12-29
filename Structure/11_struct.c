#include<stdio.h>
#include<string.h>
struct date
{
    int date;
    char month[20];
    int year;
};
int main()
{
    struct date d1,d2;
    int i,j;
    printf("enter date 1\n");
    scanf("%d", &d1.date);
    scanf("%s", d1.month);
    scanf("%d", &d1.year);
    printf("enter date 2\n");
    scanf("%d", &d2.date);
    scanf("%s", d2.month);
    scanf("%d", &d2.year);
    if(d1.date == d2.date && d1.year==d2.year && strcmp(d1.month,d2.month)==0)
    printf("dates are equal");
    else
    printf("not equal"); 
}