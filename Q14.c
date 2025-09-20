#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int count;
    for (int i=1;i<=n;i++){
        count=0;
        for (int j=1;j<=n+i-1;j++){
            if (j<=n-i){
                printf(" ");
            }  
            else{
                count++;
                printf("%d",count);
            }  
        }
        printf("\n");  
    }

    return 0;
}