#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%2==0){
        printf("even = %d" ,n);
    }
   else{
       printf("odd = %d" ,n);
   }
   
    getch();
    return 0;
}