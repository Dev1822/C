#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int middle;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(n%2==0){
                middle=n/2;
            }
            else{
                middle=(n+1)/2;
            }
            if(j==1 || i==1 || j==n || i==n){
                printf("*");
            }
            else if(j==middle && i==middle){
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