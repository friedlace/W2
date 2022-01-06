// В файле task.in дана строка длиной не более 100 символов.
// Прочитать строку в память и произвести ее реверс.
// Результат вывести в task.out.

// Пример ввода
// hello
// Пример вывода
// olleh

#include <stdio.h>

#define LIMIT 101

int strLen(char str[]) {
    int len = 0;
    
    for ( ; str[len] != 0; len++ );
    return len;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[LIMIT];
    
    fscanf(in, "%s", str);
    fclose(in);
    for ( int i = 0, j = strLen(str) - 1; i < j; i++, j-- ) {
        char temp = str[j];
        
        str[j] = str[i];
        str[i] = temp;
    }
    fprintf(out, "%s\n", str);
    fclose(out);
    
    return 0;
}
