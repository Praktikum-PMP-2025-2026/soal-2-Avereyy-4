#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int level = 0;
    int index = 0;

    while (index < N) {
        int nodes_in_level = pow(2, level);

        printf("LEVEL %d: ", level);

        for (int i = 0; i < nodes_in_level && index < N; i++) {
            printf("%d", arr[index]);
            index++;

            if (i != nodes_in_level - 1 && index < N)
                printf(" ");
        }

        printf("\n");
        level++;
    }

    return 0;
}
