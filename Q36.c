#include <stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    int x=64+n;
    for(int i=65;i<=x;i++){
        for(int s=65;s<i;s++){
             printf(" ");
        }
        for(int j=65;j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}
