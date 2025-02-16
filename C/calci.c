#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("enter any number");
    scanf("%d",&n);
    int a,b;
    printf("Enter two no.");
    scanf("%d %d",&a,&b);
    int c;

    switch (n)
    {
    case 1:
        c=a+b
        printf("Sum = %d",c);
        break;
    
        case 2:
        c=a-b
        printf("Diff = %d",c);
        break;
        case 3:
        c=a*b
        printf("Mul = %d",c);
        break;
        case 4:
        c=a/b
        printf("Div = %d",c);
        break;
        
    default:
      printf("enter correct choice");
        break;
    }
    getch();
}