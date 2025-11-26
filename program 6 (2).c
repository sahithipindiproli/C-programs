#include <stdio.h>
int main(){
    int x;
    float y;
    char ch;
    char s[100];

    printf("Enter an integer: ");
    scanf("%d", &x);

    printf("Enter floating point number: ");
    scanf("%f", &y);

    printf("Enter a character: ");
    scanf(" %c", &ch);   // ???????? space ??? newline ignore ????????

    printf("Enter a word: ");
    scanf("%s",s);

    printf("The integer is %d\n", x);
    printf("The floating point number is %f\n", y);
    printf("The character is %c\n", ch);
    printf("The string is %s\n", s);

    return 0;
}

