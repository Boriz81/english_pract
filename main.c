
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "include/word.h"
int main()
{
    // Инициализация переменной для выбора пользователя
    int choice = 0; // Переменная для хранения выбора пользователя

    Word words[5];
    char eng[10];
    char *eng_words[] = {"cat", "dog", "table", "pencil", "ball"};
    char *rus_words[] = {"кот", "собака", "стол", "ручка", "мяч"};

    for (int i = 0; i < 5; i++)
    {
        words[i].id = i + 1;
        strcpy(words[i].english, eng_words[i]);
        strcpy(words[i].russian, rus_words[i]);
    }

    printf("=== АНГЛО-РУССКИЙ ПРАКТИКУМ ===\n");
    printf("Версия 0.1\n");
    printf("Программа запущена успешно!\n");

    while (true) // Бесконечный цикл для отображения меню и обработки выбора пользователя
    {
<<<<<<< HEAD
	system("clear");
	if (choice == 0) {
=======
        if (choice == 0)
        {
>>>>>>> 82ece2326cc4903db292b5240f3373b76f10219b
            printf("МЕНЮ:\n");
            printf("1. Учить слова\n");
            printf("2. Добавить слово\n");
            printf("3. Выйти\n");
        }

        if (scanf("%d", &choice) != 1)
        {
            // Обработка: пользователь ввел не число
            while (getchar() != '\n')
                ; // очищаем буфер
            printf("Ошибка: введите число!\n");
            continue;
        }

        switch (choice)
        {
        case 1:
            printf("Вы выбрали 'Учить слова' \n");

<<<<<<< HEAD
	    printf("Список слов:\n");
	    for (int i = 0; i < 5; i++) {
		printf("%d. %s - %s\n", words[i].id, words[i].english, words[i].russian);
	    }
	    printf("\nНажмите 4 для возврата в меню\n");
	    printf("\nНажмите Enter для продолжения...");
	    getchar(); // съедаем \n от scanf
	    getchar(); // ждем Enter
            break;
        case 2:
            printf("Вы выбрали 'Добавить слово' (пока еще не реализовано)\n");
            printf("\nНажмите Enter для продолжения...");
	    getchar();
	    getchar();
	    break;
=======
            printf("Список слов:\n");
            for (int i = 0; i < 5; i++)
            {
                printf("%d. %s - %s\n", words[i].id, words[i].english, words[i].russian);
            }
            printf("\nНажмите 4 для возврата в меню\n");
            break;
        case 2:
            printf("Вы выбрали 'Добавить слово' <<  back to the menu! набери 4\n");
            // for (int i = 0; i < 5; i++) {
            //	words[i].id = i + 1;

            // strcpy(words[i].english, scanf("%s", eng));
            // }
            break;
>>>>>>> 82ece2326cc4903db292b5240f3373b76f10219b
        case 3:

            printf("Выход из программы.\n");
            return 0;
            break;
        case 4:
            choice = 0;
            break;
        default:
            printf("Неверный выбор. Пожалуйста, попробуйте снова.\n");
            break;
        }
    }

    return 0;
}
