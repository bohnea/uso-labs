#include <stdio.h>
 
int check_if_palindrome(int n)
{
    int new_n = 0;
    int old_n = n;
 
    while (n > 0) {
        int r = n % 10;
        n /= 10;
        new_n = new_n * 10 + r;
    }
 
    return (new_n == old_n) ? 1 : 0;
}
 
int main(void)
{
    int n;
 
    printf("Please gimme a number: ");
    scanf("%d", &n);
 
    if (check_if_palindrome(n)) {
        printf("%d is a palindome\n", n);
    } else {
        printf("%d is not a palindrome\n", n);
    }
 
    return 0;
}
