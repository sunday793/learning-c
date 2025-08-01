#include <stdio.h>

// int main(void) 
// {
//     int var;
//     int total = 1024; //инициализация переменной
//     var = 100; //операция присваивания данных

//     // int s, v; //объявление нескольких переменных
//     // s = v = 200; 

//     return 0;
// }

// int main(void)
// {
//     int dec, hex, oct;

//     dec = 100L; //десятичное число
//     hex = 0x1FA; //шестнадцатиричное число
//     oct = 0123; //восьмиричное число

//     return 0;
// }

// int main(void) 
// {
//     char ch;

//     ch = 'd';
//     printf("ch = %c, code = %d\n", ch, ch);

//     return 0;
// }

// int main(void) 
// {
//     int x = 5, y = 10, res;
//     x*=5;
//     x--;

//     res = x + y;
//     printf("Variable: %d + %d = %d\n", x, y, res);

//     return 0;
// }

// #include <stdbool.h>

// int main(void) 
// {
//     bool hasCar = true;

//     return 0;
// }

// int main(void) 
// {
//     const short A = 0; // constanta
    
//     float x = 5.5f, y = 6.67f, res;

//     res = x/y;
//     //printf("Result: %f\n", res);
//     printf("Result: %.2f\n", res);

//     char s = 'S';
//     printf("%c", s);

//     return 0;
// }

int main() 
{
    float x, y, res;
    scanf("%f", &x);
    scanf("%f", &y);

    res = x / y;
    printf("Result: %.2f\n", res);

    
    return 0;
}