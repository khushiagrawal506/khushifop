#include<stdio.h>
int main(){
    int cho;
    float a,b;
    printf("enter two number");
    scanf("%f %f",&a,&b);
    printf("enter 1 for add,2 for sub,3 for multiply,4 for div");
    scanf("%d",&cho);

    switch(cho){
        case 1:
        printf("%f",a+b);
        break;
        case 2:
        printf("%f",a-b);
        break;
        case 3:
        printf("%f",a*b);
        break;
        case 4:
        printf("%f",a/b);
        break;
        default:
        printf("invalid");
        break;
    }
}