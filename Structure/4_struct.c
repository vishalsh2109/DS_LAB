#include<stdio.h>
struct feet_inchi
{
    int feet;
    int inch;
};
void main()
{
    struct feet_inchi h1,h2,h3;
    int x;
    printf("Enter value in feet inch\n");
    scanf("%d%d", &h1.feet, &h1.inch);
    scanf("%d%d", &h2.feet, &h2.inch);
    h3.inch=(h1.inch+h2.inch)%12;
    x=(h1.inch+h2.inch)/12;
    h3.feet=(h1.feet+h2.feet+x);
    printf("%d%d", h3.feet, h3.inch);
}