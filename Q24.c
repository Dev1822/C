#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("1\n");
    for (int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(int k=i-1;k>=1;k--){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}