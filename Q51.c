#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int x;
    for (int i=1;i<=n;i++){
        for (int j=0;j<i;j++){
            x=(i+j)%2;
            printf("%d ",x);
        }
        printf("\n");  
    }

    return 0;
}

