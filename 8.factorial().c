// Написать функцию, которая находит наибольший общий делитель.
// int gcd(int a, int b)

// Передаваемые значения больше нуля.

int factorial(int n) {
    if ( n <= 1 ) {
        if ( n < 0 ) {
            return -1;
        }
        return 1;
    }
    return n * factorial(n-1);
}
