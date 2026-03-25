#include <stdio.h>

int main() {
    // Please write your code here.
    char find;
    scanf("%c",&find);

    char str[][10] = {"apple",
                    "banana",
                    "grape",
                    "blueberry",
                    "orange"};

    int cnt =0;
    for(int i=0; i<5; i++)
    {
        if(str[i][2]==find || str[i][3]==find)
        {
            cnt++;
            for(int j =0; str[i][j]!='\0'; j++)
                printf("%c",str[i][j]);
            printf("\n");
        }
    }
    printf("%d",cnt);
    return 0;
}