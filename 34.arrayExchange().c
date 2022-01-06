// Написать функцию
// void arrayExchange(int array[], int len)

// Попарно обменять местами все четные элементы массива с нечетными, начиная с нулевого.
// a[0] <-> a[1] a[2] <-> a[3] .....
// Если последний элемент не имеет пары — не менять его значение.

// Запрещено использование дополнительного массива.

#include <stdio.h>

#define SIZE 11

void arrayExchange(int array[], int len) {
    for ( int i = 0, j = 1; j < len; i += 2, j += 2 ) {
        int temp = array[i];
        
        array[i] = array[j];
        array[j] = temp;
    }
}

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    
    arrayExchange(array, SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
