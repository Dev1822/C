#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("A\n");
    int x=64+n;
    for (int i=66;i<=x;i++){
        for(int j=65;j<=i;j++){
            printf("%c ",j);
        }
        for(int k=i-1;k>=65;k--){
            printf("%c ",k);
        }
        printf("\n");
    }
    return 0;
}