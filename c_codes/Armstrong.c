#include<stdio.h>

int main(){
    int n,rem=0,result=0;
    printf("Enter Number::");
    scanf("%d",&n);
    int orignal=n;
    while(orignal!=0){
        rem=orignal%10;
        result=result+(rem*rem*rem);
        orignal=orignal/10;
    }
    if(n==result){
        printf("Arnustrong Number");
    }
    else{
        printf("Not Armustrong");
    }

    return 0;
}