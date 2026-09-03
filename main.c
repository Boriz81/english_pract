#include <stdio.h>
#include <stdbool.h>
#include "include/word.h"
int main()
{
    // Инициализация переменной для выбора пользователя
    int choice = 0; // Переменная для хранения выбора пользователя
    Word test_word;
    // Заполнение поля: id = 1, english = "hello", russian = "привет"

    while (true) // Бесконечный цикл для отображения меню и обработки выбора пользователя
    {
        printf("=== АНГЛО-РУССКИЙ ПРАКТИКУМ ===\n");
        printf("Версия 0.1\n");
        printf("Программа запущена успешно!\n");
        printf("МЕНЮ:\n");
        printf("1. Учить слова\n");
        printf("2. Добавить слово\n");
        printf("3. Выйти\n");
	
	printf("Тестовое слово: %s - %s\n", test_word.english, test_word.russian);
        switch (choice)
        {
        case 1:
            printf("Вы выбрали 'Учить слова'.\n");
            break;
        case 2:
            printf("Вы выбрали 'Добавить слово'.\n");
            
	    break;
        case 3:
            printf("Выход из программы.\n");
            return 0;
        default:
            printf("Неверный выбор. Пожалуйста, попробуйте снова.\n");
        }
        scanf("%d", &choice);
    }
    
   
    return 0;
}
