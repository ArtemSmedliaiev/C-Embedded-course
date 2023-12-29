#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Введіть першу строку: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Введіть другу строку: ");
    fgets(str2, sizeof(str2), stdin);

    // Порівняння строк за допомогою strcmp
    if (strcmp(str1, str2) == 0) {
        printf("Строки однакові.\n");
    } else {
        printf("Строки різні.\n");
    }

    return 0;
}
