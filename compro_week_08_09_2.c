#include<stdio.h>

int main() {
    int score;
    int sum = 0;

    do {
        printf("Enter score (-1 to stop): ");
        scanf("%d", &score);
        if (score != -1) {
            sum += score;
        }
    }while (score != -1);

    printf("sum of scores = %d\n", sum);
    return 0;
}