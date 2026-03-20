#include<stdio.h>
int main(){
    int marks[5],i;
    float total=0,avg;
    int pass=1;

    printf("enter marks of 5 subjects:\n");
    for(i=0;i<5;i++){
        scanf("%d",&marks[i]);
        total+=marks[i];
        if(marks[i]<40){
            pass=0;
        }
    }
    avg=total/5;
    if(pass==0){
        printf("result:fail\n");

    }else{
        printf("result:pass\n");
        if(avg>=75)
            printf("grade:distinction\n");
        else if(avg>=60)
            printf("grade:frist division\n");
        else if(avg>=50)
            printf("grade:second division\n");
        else if(avg>=40)
            printf("grade:third division\n");
    }
    return 0;
}