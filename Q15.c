#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int x;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            x=64+k;
            printf("%c",x);
        }
        for(int l=i+1;l<i*2;l++){
            x=64+l;
            printf("%c",x);
        }
        
        printf("\n");
    }

    return 0;
}