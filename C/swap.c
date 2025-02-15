#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
     int c;

    printf("enter length and breadth");
    scanf("%d %d",&a,&b);
       a=a+b;
       b=a-b;
       a=a-b;    
   
    printf("swapping of two number is %d and %d" ,a,b);
    getch();
}