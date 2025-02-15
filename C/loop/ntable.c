#include<stdio.h>
#include<conio.h>

void main(){
    int i;
    int n;
    printf("enter number");
    scanf("%d",&n);
    for(i=0;i<10;i++){
        printf("%d\n",n*i);
    }
    getch();
    return 0;
}