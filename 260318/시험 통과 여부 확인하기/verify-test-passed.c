#include <stdio.h>

int main() {
    // Please write your code here.
    int score;
    scanf("%d",&score);

    if(score>=80)
        printf("pass");
    else
        printf("%d more score",80-score);
    return 0;
}