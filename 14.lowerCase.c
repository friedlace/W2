// В файле task.in дана последовательность символов.
// Перевести все буквы в нижний регистр и вывести результирующую последовательность в файл task.out
#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char temp;
    
    for ( ; fscanf(in, "%c", &temp) == 1; ) {
        if ( temp >= 'A' && temp <= 'Z' ) {
            temp += 'a' - 'A';
        }
        fprintf(out, "%c", temp);
    }
    fclose(in);
    fprintf(out, "\n");
    fclose(out);
    
    return 0;
}
