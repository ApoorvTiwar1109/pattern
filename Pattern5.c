#include <stdio.h>

int main() {
    int i, l, N;
    scanf("%d", &N);
    for (i=1; i<N+1; i++) {
        for (l=i-1; l<1+(2*(i-1)); l++) {
            printf("%d ", l+1);
        }
        printf("\n");
    }

    int k;
    printf("\nEnter 0 to exit the program : ");
    scanf("%d", &k);

    return 0;

}
