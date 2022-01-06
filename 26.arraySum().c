// Написать функцию:
// int arraySum(int array[], int size)
// Вернуть сумму элементов массива.
// size > 0


// #include <stdio.h>

int arraySum(int array[], int size) {
    int sum = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        sum += array[i];
    }
    return sum;
}

// int main() {
//     int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//     printf("%d\n", arraySum(array, 10));
    
//     return 0;
// }
