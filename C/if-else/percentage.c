#include<stdio.h>
#include<conio.h>
void main(){
    int per;
    printf("enter percentage");
    scanf("%d",&per);
    if(per>=90){
        printf("A+");
    }
    if(per>=80 && per<90){
        printf("A");
    }
    if(per>=70 && per<80){
        printf("B+");
    }
    if(per>=60 && per<70){
        printf("B");
    }
    if(per>=50 && per<60){
        printf("C+");
    }
    if(per>=40 && per<60){
        printf("C");
    }
   
    getch();
    return 0;
}