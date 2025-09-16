#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int x=64;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            x++;
            printf("%c \t",x);
        }
        printf("\n");
    }

    return 0;
}