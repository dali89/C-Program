#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("enter any number");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("Sunday");
        break;
    
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Tuesday");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 5:
        printf("Thursday");
        break;
        case 6:
        printf("Friday");
        break;
        case 7:
        printf("Saturday");
        break;
    default:
    printf("enter correct choice");
        break;
    }
    getch();
}