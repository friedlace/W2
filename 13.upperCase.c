// В файле task.in дана последовательность символов.
// Перевести все буквы в верхний регистр и вывести результирующую последовательность в файл task.out

// Пример ввода
// abcd
// Пример вывода
// ABCD

#include <stdio.h>

int main() {
    char str;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( ; fscanf(in, "%c", &str) == 1; ) {
        if ( str >= 'a' && str <= 'z' ) {
            str -= 'a' - 'A';
        }
        fprintf(out, "%c", str);
    }
    fclose(in);
    fprintf(out, "\n");
    fclose(out);
    
    return 0;
}
