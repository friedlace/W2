// Ввести положительную длину последовательности чисел, затем саму последовательность.
// Вывести искаженную последовательность, полученную применением к исходным членам побитовой
// операции xor с числом 42.
// Каждый член вывести на отдельной строке.
// Пример ввода
// 2
// 0 42
// Пример вывода
// 42
// 0

#include <stdio.h>

int main() {
    int len;
    int x;
    
    scanf("%d", &len);
    for ( int i = 0; i < len; i++ ) {
        scanf("%d", &x);
        printf("%d\n", x^42);
    }
    
    return 0;
}
