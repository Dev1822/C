#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a=64+n;
    for(int i=65;i<=a;i++){
        for(int j=65;j<=a;j++){
            printf("%c",j);
        }
        printf("\n");
    }

    return 0;
}