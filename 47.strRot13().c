// Написать функцию:
// void strRot13(char str[])
// Зашифровать строку по алгоритму ROT13

void strRot13(char str[]) {
    for ( int i = 0, charI = str[0]; charI != '\0'; i++, charI = str[i] ) {
        if ( charI >= 'a' && charI <= 'm' ) {
            str[i] += 13;
        } else if ( charI > 'm' && charI <= 'z' ) {
            str[i] -= 13;
        } else if ( charI >= 'A' && charI <= 'M' ) {
            str[i] += 13;
        } else if ( charI > 'M' && charI <= 'Z' ) {
            str[i] -= 13;
        }
    }
}
