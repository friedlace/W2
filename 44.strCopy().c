// void strCopy(char target[], char source[])

// Гарантируется, что строка target не короче строки source.

void strCopy(char target[], char source[]) {
    for ( ; *source != '\0'; target++, source++ ) {
        *target = *source;
    }
    *target = *source;
}
