#include<stdio.h>
#include<conio.h>
void main(){
    int p,t;
    float r;
    float si;
    printf("enter priniple and time");
    scanf("%d %d",&p,&t);
     printf("enter rate");
    scanf("%f",&r);

    si=(p*r*t)/100;
    printf("simple interest is %f" ,si);
    getch();
}