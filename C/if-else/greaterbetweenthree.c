#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is greater" ,a);
    }
    if(b>a && b>c){
        printf("%d is greater" ,b);
    }
    if(c>a && c>b){
        printf("%d is greater" ,c);
    }
    if(a==b){
        printf("both are equal" );
    }
   
    getch();
}