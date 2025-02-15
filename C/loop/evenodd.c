#include<stdio.h>
#include<conio.h>

void main(){
    int i;
    int n;
    printf("Enter number");
    scanf("%d",n);
    for(i=1;i<=200;i++){
        if(n%2 !=0){
        printf("odd = %d\t",n);}
        else{
        printf("even = %d\t",n);
        }
    }
    getch();
    return 0;
}