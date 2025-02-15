#include<stdio.h>
#include<conio.h>

void main(){
    int i,f;
    f=1;
    int n;
    printf("enter number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       f=f*i
    }
    printf("%d =",f);
    getch();
    return 0;
}