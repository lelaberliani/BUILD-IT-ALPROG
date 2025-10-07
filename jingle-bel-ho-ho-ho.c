#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);
    
    for(int i = 0; i < N - 1; i++){
        for (int j = 0; j < N - i - 2; j++){
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++){
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = 0; i < N-2; i++){
        printf(" ");
        
    }
    printf("*\n");
    return 0;
}
