#include <stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    int x=0;
    for(int i=1;i<=n;i++){
        x=0;
        for(int j=1;j<=n;j++){
            if(j<i){
                printf(" ");
            }
            else{
                x++;
                printf("%d",x);
            }
        }
        printf("\n");
    }
    return 0;
}
