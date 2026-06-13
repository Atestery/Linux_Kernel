#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Проверка аргументов: программа + текст + файл
    if (argc != 3) {
        printf("Использование: %s текст файл\n", argv[0]);
        printf("Пример: %s hello file.txt\n", argv[0]);
        return 1;
    }
    
    // Открываем файл
    FILE *file = fopen(argv[2], "r");
    if (file == NULL) {
        printf("Ошибка: не могу открыть файл %s\n", argv[2]);
        return 1;
    }
    
    char line[1000];
    int line_number = 0;
    
    // Читаем файл построчно
    while (fgets(line, sizeof(line), file)) {
        line_number++;
        
        // Ищем текст в строке
        if (strstr(line, argv[1]) != NULL) {
            // Убираем символ новой строки
            line[strcspn(line, "\n")] = '\0';
            printf("%d: %s\n", line_number, line);
        }
    }
    
    fclose(file);
    return 0;
}
