#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int middle;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(n%2==1){
                middle=(n+1)/2;
            }
            else{
                middle=n/2;
            }
            if(i==middle || j==middle){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");  
    }

    return 0;
}

