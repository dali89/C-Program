#include<stdio.h>
#include<conio.h>

void swap(int *,int *);
void main()
    int a,b;
    printf("Enter two number");
    scanf("%d %d",&a,&b);
    printf("before swapping");
    printf("a=%d ,b=%d",a,b);
    swap(&a,&b);
    // printf("after swapping");
    // printf("a=%d,b=%d",a,b);
    getch();
}
void swap(int *x,int *y){
    int c;
    c=*x;
    *x=*y;
    *y=c;
    printf("after swapping");
    printf("a=%d,b=%d",x,y);
}