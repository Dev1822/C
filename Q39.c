#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int x;
    for(int i=1;i<=n;i++){
        x=0;
        for(int j=n;j>=1;j--){
            if(j>i){
                printf(" ");
            }
            else{
                x++;
                printf("%c",'A'+x-1);
            }
        }
        
        printf("\n");
    }

    return 0;
}