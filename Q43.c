#include <stdio.h>

int main() {
    int rows;
    printf("Rows:");
    scanf("%d",&rows);
    printf("Columns:");
    int columns;
    scanf("%d",&columns);
    int x;
    for (int i=1;i<=rows;i++){
        x=0;
        for (int j=1;j<=columns;j++){
            if(j==1 || i==1 || j==columns || i==rows){
                x++;
                printf("%d",x);
            }
            else{
                x++;
                printf(" ");
            }
        }
        printf("\n");  
    }

    return 0;
}

