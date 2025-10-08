// Напишу программу на C, которая:
// Запрашивает у пользователя два целых числа.
// Выводит их сумму, разность, произведение и частное.

#include <stdio.h>

int main(void) {
    int first_num, second_num;
    printf("Введите первое число: ");
    scanf("%d", &first_num);
    printf("\nВведите второе число: ");
    scanf("%d", &second_num);
    
    printf("\nСумма: %d\nРазность: %d\nПроизведение: %d\n", first_num + second_num, first_num - second_num, first_num * second_num);
    if(second_num != 0)
    {
        printf("Частное: %f\n", (float)first_num / second_num);      
    }
    
    return 0;
}