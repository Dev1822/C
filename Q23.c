#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x=64+n;
    for (int i=0;i<n;i++){
        for (int s=0;s<i;s++){
            printf("  ");
        }
        for (int j=65;j<=x-i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}