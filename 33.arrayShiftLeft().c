// Написать функцию:
// void sliceShiftLeft(int array[], int start, int end)
// Осуществить циклический сдвиг части массива на один элемент влево от start до end включительно.

void arrayShiftLeft(int array[], int size) {
    int temp = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        array[i-1] = array[i];
    }
    array[size-1] = temp;
}
