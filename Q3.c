#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a=64+n;
    for(int i=65;i<=a;i++){
        printf("%c\t",i);
    }

    return 0;
}