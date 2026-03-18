#include <stdio.h>

int main() {
    // Please write your code here.
    int score;
    scanf("%d",&score);

    if(90<=score)
        printf("A");
    else if (80<=score)
        printf("B");
    else if(70<=score)
        printf("C");
    else if(60<=score)
        printf("D");
    else
        printf("F");
    return 0;
}