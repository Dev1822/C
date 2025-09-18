#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<n;i++){
        for (int j=1;j<=n+i-1;j++){
            if (j<=n-i){
                printf(" ");
            }  
            else{
                if (i+j==n+1 ||j==n+i-1){
                    printf("*"); 
                } 
                else {
                    printf(" "); 
                }
            }
        }
        printf("\n");  
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n+(n-i);j++){
            if(i<=j){
                if(i==j ||j==n+(n-i)){
                    printf("*");                 
                }
                else{
                    printf(" ");
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");  
    }

    return 0;
}

