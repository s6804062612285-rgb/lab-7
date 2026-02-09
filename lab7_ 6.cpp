#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m, n;
    int array[20][20];
    int used[201] = {0};

    srand(time(NULL));
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int num;
            do {
                num = (rand() % 101) + 100;
            } while (used[num] == 1);
            
            array[i][j] = num;
            used[num] = 1;
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}