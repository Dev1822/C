#include <stdio.h>

int main() {
    int rows;
    printf("Rows:");
    scanf("%d",&rows);
    printf("Columns:");
    int columns;
    scanf("%d",&columns);
    for (int i=1;i<=rows;i++){
        for (int j=1;j<=columns;j++){
            if(j==1 || i==1 || j==columns || i==rows){
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

