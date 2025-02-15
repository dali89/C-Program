#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
     int c;

    printf("enter length and breadth");
    scanf("%d %d",&a,&b);
    
    c=a;
    a=b;
    b=c;
    printf("swapping of two number is %d and %d" ,a,b);
    getch();
}