#include<stdio.h>
#include<math.h>
int main(){
    int choice;
    float a,b;
    printf("1.add\n2.subtract\n3.multiply\n4.divide\n5.power(x^y)\n6.square(x^2)\n");
    printf("enter choice:");
    scanf("%d",&choice);

    if(choice>=1 && choice<=5){
        printf("enter two number:");
        scanf("%f%f",&a,&b);

    }else if(choice==6){
        printf("enter a number:");
        scanf("%f",&a);
    }
    switch(choice){
        case 1: printf("result=%.2f",a+b); break;
        case 2: printf("result=%.2f",a-b); break;
        case 3: printf("result=%.2f",a*b); break;
        case 4: printf("result=%.2f",a/b); break;
        case 5: printf("result=%.2f",pow(a,b)); break;
        case 6: printf("result=%.2f",a*a); break;
        default: printf("invaild choice");
    }
    return 0;
}