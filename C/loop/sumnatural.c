#include<stdio.h>
#include<conio.h>

void main(){
    int i;
    int sum=0;
    
    for(i=1;i<=100;i++){
      sum=sum+i;
    }
    printf("Sum of hundred natural numbers = %d",sum);
    getch();
    return 0;
}