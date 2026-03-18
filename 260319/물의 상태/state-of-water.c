#include <stdio.h>

int main() {
    // Please write your code here.
    int temper;
    scanf("%d",&temper);

    if(temper<0)
        printf("ice");
    else if(temper>=100)
        printf("vapor");
    else
        printf("water");
    return 0;
}