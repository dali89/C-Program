#include<stdio.h>
#include<conio.h>
void main(){
    int a=3;
    int *p;
    p = &a;

    printf("%d",a);
    printf("%d",p);

    printf("%d",&a);
    printf("%d",&p);

    printf("%d",*p);
    printf("%d",*(&p));

    printf("%d",**(&p));
    getch();
}