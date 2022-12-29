#include<stdio.h>
struct convert_time
{
    int hour;
    int min;
    int sec;
};
void main()
{
    struct convert_time t1,t2,t3;
    int h,m;
    printf("Enter value 1 HH:MM:SS\n");
    scanf("%d%d%d", &t1.hour, &t1.min, &t1.sec);
    printf("Enter value 2 HH:MM:SS\n");
    scanf("%d%d%d", &t2.hour, &t2.min, &t2.sec);
    t3.sec=(t1.sec+t2.sec)%60;
    m=(t1.sec+t2.sec)/60;
    t3.min=(t1.min+t2.min+m)%60;
    h=(t1.min+t2.min+m)/60;
    t3.hour=(t1.hour+t2.hour+h);
    printf("%dhours %dmin %dsec", t3.hour,t3.min,t3.sec);
}