#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int multiply=1;
    for (int i=1; i<=n; i++) {
        multiply=1;
        for (int j=1; j<=n; j++) {
            multiply=i*j;
            printf("%d   ",multiply);
        }
        printf("\n");
    }
    return 0;
}
