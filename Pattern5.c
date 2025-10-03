#include <stdio.h>

int main() {
    int i, j, N;
    scanf("%d", &N);
    for (i=1; i<N+1; i++) {
        for (j=i-1; j<1+(2*(i-1)); j++) {
            printf("%d ", j+1);
        }
        printf("\n");
    }

    int k;
    printf("\nEnter 0 to exit the program : ");
    scanf("%d", &k);

    return 0;
}