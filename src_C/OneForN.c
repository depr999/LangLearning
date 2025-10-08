// Напиши программу, которая:
// Запрашивает у пользователя целое число N.
// Считает сумму всех чисел от 1 до N включительно.
// Выводит результат на экран.
#include <stdio.h>

int main(void) {
    int N;
    int count = 0;

    printf("Введите число N: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("Error! The N most be positive\n");
        return 1;
    } else {
        for(int i = 1; i <= N; ++i) {
            count += i;
        }
    }
    printf("Сумма от 1 до %d: %d\n", N, count);
    
    return 0;
}