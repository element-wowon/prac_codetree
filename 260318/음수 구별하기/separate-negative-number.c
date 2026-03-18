#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    if(n<0)
        printf("minus");
    else
        printf("plus");
    return 0;
}