
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "include/word.h"
int main() {
    // Инициализация переменной для выбора пользователя
    int choice = 0; // Переменная для хранения выбора пользователя

    Word words[5];
    char eng[10];

    int correct = 0;
    char answer[100];
    char *eng_words[] = {"cat", "dog", "table", "pencil", "ball"};
    char *rus_words[] = {"кот", "собака", "стол", "ручка", "мяч"};

    for (int i = 0; i < 5; i++)
    {
        words[i].id = i + 1;
        strcpy(words[i].english, eng_words[i]);
        strcpy(words[i].russian, rus_words[i]);
    }


    while (true) // Бесконечный цикл для отображения меню и обработки выбора пользователя
    {

	system("clear");

        printf("=== АНГЛО-РУССКИЙ ПРАКТИКУМ ===\n");
        printf("Версия 0.1\n");
        printf("Программа запущена успешно!\n");

        printf("МЕНЮ:\n");
        printf("1. Учить слова\n");
        printf("2. Добавить слово\n");
        printf("3. Выйти\n");


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
	    


	    //printf("Список слов:\n");
	    //for (int i = 0; i < 5; i++) {
		//printf("%d. %s - %s\n", words[i].id, words[i].english, words[i].russian);
	    //}

	    for (int i = 0; i < 5; i++) {
	        printf("\nВопрос %d из 5:\n", i + 1);
		printf("Слово: %s\n", words[i].english);
		printf("Введите перевод: ");

	        scanf("%s", answer);
	    	    if (strcmp(answer, words[i].russian) == 0) {
			printf("Perfecto!!!");
			correct++;
	    	    } else {printf("NAIN!!! Правильный ответ: %s\n", words[i].russian);}
	    }
	    
            printf("\nРезультат: %d из 5\n", correct);
	    printf("\nНажмите Enter для продолжения...");
	    getchar(); // съедаем \n от scanf
	    getchar(); // ждем Enter
            break;
        case 2:
            printf("Вы выбрали 'Добавить слово' (пока еще не реализовано)\n");
            printf("\nНажмите Enter для продолжения...");
            getchar(); // съедаем \n от scanf
            getchar(); // ждем Enter

	    break;

        case 3:

            printf("Выход из программы.\n");
            return 0;


        default:
            printf("Неверный выбор. Пожалуйста, попробуйте снова.\n");
            break;
        }
    }

    return 0;
}
