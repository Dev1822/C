    #include <stdio.h>
    
    int main() {
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                printf(" ");
            }
            int a=i+64;
            for(int k=65;k<=a;k++){
                printf("%c",k);
            }
            
            printf("\n");
        }
    
        return 0;
    }