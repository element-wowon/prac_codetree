#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    int start = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i;j++)
        {
            printf("%d ",start+j);
        }
        start+=i;
        printf("\n");
    }
    return 0;
}