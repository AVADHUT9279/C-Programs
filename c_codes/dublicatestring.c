#include<stdio.h>

int main(){
    char name[]="ava dhutt";
    // printf("Enter name::");
    // scanf(" %s",name);
    int count=0,size=0,i=0;
    while(name[i]!='\0'){
        size++;
        i++;
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(name[i]==name[j]){
                printf("%c\t",name[i]);
            }
        }
    }
    return 0;
}