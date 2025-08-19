#include <stdio.h>
int main() {
    int arr[9],sum=0;
    int totalSum = 55; 
    printf("Enter 9 numbers::\n");
    for(int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    int missing=totalSum-sum;
    printf("%d\n",missing);
    return 0;
}
