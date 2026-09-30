
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "include/word.h"
int main()
{
    // Инициализация переменной для выбора пользователя
    int choice = 0; // Переменная для хранения выбора пользователя
    Word test_word;
    Word words[5];
    char eng[10];
    
    
    // Заполнение поля: id = 1, english = "hello", russian = "привет"
    test_word.id = 1;
    strcpy(test_word.english, "hello");
    strcpy(test_word.russian, "привет");

        printf("=== АНГЛО-РУССКИЙ ПРАКТИКУМ ===\n");
        printf("Версия 0.1\n");
        printf("Программа запущена успешно!\n");

    while (true) // Бесконечный цикл для отображения меню и обработки выбора пользователя
    {
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
            printf("Вы выбрали 'Учить слова'.\n");
	    
            break;
        case 2:
            printf("Вы выбрали 'Добавить слово'.\n");

            for (int i = 0; i < 5; i++) {
		words[i].id = i + 1;
		
		//strcpy(words[i].english, scanf("%s", eng));
	    }

	    break;
        case 3:
            printf("Выход из программы.\n");
            return 0;
	    break;
        default:
            printf("Неверный выбор. Пожалуйста, попробуйте снова.\n");
	    break;
        }
        
    }
    
   
    return 0;
}
