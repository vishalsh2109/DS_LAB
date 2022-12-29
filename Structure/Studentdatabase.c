#include<stdio.h>
struct student
{
 int r;
 char name[20];
 float s1,s2,s3,s4,s5;
}s[5];
void main()
{
    int i;
    float max1,max2,max3,p[3],pmax,x=0,y=0,z=0,xa,ya,za;
    for(i=0;i<3;i++)
    {
        printf("Enter Details of %d student\n", i+1);
        scanf("%d%s%f%f%f%f%f", &s[i].r, s[i].name, &s[i].s1, &s[i].s2, &s[i].s3, &s[i].s4, &s[i].s5);
        p[i]=(s[i].s1+s[i].s2+s[i].s3)/3;
        x=x+s[i].s1;
        y=y+s[i].s2;
        z=z+s[i].s3;
    }

    xa=x/3;
    ya=y/3;
    za=z/3;

    for(i=0;i<3;i++)
    {
        printf("Details of %d student\n", i+1);
        printf("%d\n%s\n%f\n%f\n%f\n%f\n%f\n%f\n", s[i].r, s[i].name, s[i].s1, s[i].s2, s[i].s3, s[i].s4 ,s[i].s5, p[i]);
    }
    max1=s[0].s1;
    for(i=0;i<3;i++)
    {
      if(s[i].s1>max1) 
      max1=s[i].s1;
    }
    printf("Maximum marks in Subject 1 is %f\n", max1);

     max2=s[0].s2;
    for(i=0;i<3;i++)
    {
      if(s[i].s2>max2)
      max2=s[i].s2;
    }
    printf("Maximum marks in Subject 2 is %f\n", max2);

     max3=s[0].s3;
    for(i=0;i<3;i++)
    {
      if(s[i].s3>max3)
      max3=s[i].s3;
    }
    printf("Maximum marks in Subject 3 is %f\n", max3);

    pmax=(s[0].s1+s[0].s2+s[0].s3)/3;
    for(i=0;i<3;i++)
    {
      if((s[i].s1+s[i].s2+s[i].s3)/3>pmax)
      pmax=(s[i].s1+s[i].s2+s[i].s3)/3;
    }
    printf("Maximum percentage is %f\n", pmax);

    for(i=0;i<3;i++)
    {
        if(s[i].s1<xa)
            printf("Student %d with marks %f\n", i+1,s[i].s1);
    }

     for(i=0;i<3;i++)
    {
        if(s[i].s2<ya)
            printf("Student %d with marks %f\n", i+1,s[i].s2);
    }

     for(i=0;i<3;i++)
    {
        if(s[i].s3<za)
            printf("Student %d with marks %f\n", i+1,s[i].s3);
    }

}


