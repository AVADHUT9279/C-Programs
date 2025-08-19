#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter Start Number::");
    scanf("%d",&start);
    printf("Enter End Number::");
    scanf("%d",&end);
    for(int i=1;i<=10;i++){
        for(int j=start;j<=end;j++){
            printf("%d\t",i*j);
        }printf("\n");
    }
    return 0;

}
