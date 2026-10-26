#include <stdio.h>
int main()
{
    int i, j;
    for(i = 1;j <= 9 ; i++){
        for(j = 1;j <= i;j++){
        printf("%d*%d=%d\t", j, i, j*i);
        }
        printf("\n");
    }
    return 0;
}