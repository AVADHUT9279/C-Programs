#include<stdio.h>

int main(){
    int n,rem=0,result=0;
    printf("Enter Number::");
    scanf("%d",&n);
    int orignal=n;
    while(orignal!=0){
        rem=orignal%10;
        result=result*10+rem;
        orignal=orignal/10;
    }
    if(n==result){
        printf("Plandrome number");
    }
    else{
        printf("Not Plandrome number");
    }

    return 0;
}