#include<stdio.h>
#include<conio.h>

void main(){
    int i;
    int flag;
    flag=0;
    int n;
    printf("enter number");
    scanf("%d",&n);
    for(i=2;i<n-1;i++){
        if(n%i == 0){
            flag=1;
            break;
        }
    }
if(flag==0)
{
    printf("%d is Prime no.",n);
}
else{
    printf("%d is Not a Prime no.",n);
}
    getch();
    return 0;
}