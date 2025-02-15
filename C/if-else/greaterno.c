#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is greater" ,a);
    }
    if(a<b){
        printf("%d is greater" ,b);
    }
    if(a==b){
        printf("both are equal" );
    }
   
    getch();
}