
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "include/word.h"
int main()
{
    // Инициализация переменной для выбора пользователя
    int choice = 0; // Переменная для хранения выбора пользователя
    
    Word test_word;
    Word words[5];
    char eng[10];
    char *eng_words[] = {"cat", "dog", "table", "pencil", "ball"};
    char *rus_words[] = {"кот", "собака", "стол", "ручка", "мяч"};
    
    for (int i = 0; i < 5; i++) {
	words[i].id = i + 1;
	strcpy(words[i].english, eng_words[i]);
	strcpy(words[i].russian, rus_words[i]);
    }

    // Заполнение поля: id = 1, english = "hello", russian = "привет"
    test_word.id = 1;
    strcpy(test_word.english, "hello");
    strcpy(test_word.russian, "привет");

        printf("=== АНГЛО-РУССКИЙ ПРАКТИКУМ ===\n");
        printf("Версия 0.1\n");
        printf("Программа запущена успешно!\n");

    while (true) // Бесконечный цикл для отображения меню и обработки выбора пользователя
    {
	system("clear");
	if (choice == 0) {
            printf("МЕНЮ:\n");
            printf("1. Учить слова\n");
            printf("2. Добавить слово\n");
            printf("3. Выйти\n");
	}

	if (scanf("%d", &choice) != 1) {
	    // Обработка: пользователь ввел не число
	    while (getchar() != '\n'); // очищаем буфер
	    printf("Ошибка: введите число!\n");
	    continue;
	}
	
        switch (choice)
        {
        case 1:
            printf("Вы выбрали 'Учить слова' \n");

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
