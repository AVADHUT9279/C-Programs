#include<stdio.h>
int main(){
    char name[10];
    printf("Enter name::");
    scanf(" %s",name);
    int count=0,size=0,i=0;
    while(name[i]!=0){
        size++;
        i++;
    }
    char start=0;
    char end=size-1;
    if(start<end){
        char temp=name[start];
        name[start]=name[end];
        name[end]=temp;
        start++;
        end--;
    }
    printf(" %s",name);
    return 0;
}