#include<stdio.h>
int main(){
    int num,original,rem,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    original=num;
    while(num>0){
        rem=num%10;
        sum+=rem*rem*rem;
        num/=10;
    }
    if(sum==original)
        printf("armstrong number\n");
    else
        printf("not armstrong number\n");
    return 0;
}