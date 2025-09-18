#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int x=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n+i-1;j++){
            if (j<=n-i){
                printf("   ");
            }
            else if(i==n){
                printf("%d ",x);
                x++;
            }
            else{
                printf("%d  ",x);
                x++;
            }  
        }
        printf("\n");  
    }

    return 0;
}