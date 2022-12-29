#include<stdio.h>
struct student
{
    int roll_no;
    int marks[6];
    char name[20]; 
}s1;
int main()
{
    int k;
    struct student s1;
    scanf("%d", &s1.roll_no);
    scanf("%s", &s1.name);
    for(k=0;k<6;k++)
    {
        scanf("%d", &s1.marks[k]);
    }
    int i,j,t;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(s1.marks[i]>s1.marks[j])
            {
                t=s1.marks[i];
                s1.marks[i]=s1.marks[j];
                s1.marks[j]=t;
            }
        }
    }
    
    if(((s1.marks[5]+s1.marks[4]+s1.marks[3]+s1.marks[2])*100)/4 >= 95)
    printf("Yes");
    else
    printf("No");




    
}
