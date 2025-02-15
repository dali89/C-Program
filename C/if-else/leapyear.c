#include<stdio.h>
#include<conio.h>
void main(){
    int yr;
    printf("enter year ");
    scanf("%d",yr);

    if((yr%4==0 && yr%100!= 0) || yr%400 == 0){
        printf("%d is a leap year");
    }
    getch();
    return 0;
}