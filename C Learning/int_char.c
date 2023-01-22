#include <stdio.h>

int main()
{

    // int x ,y  ,z;
    // printf("Enter the value of x and then y\n");
    // scanf("%d%d" , &x , &y);
    // // printf("Enter the value of y\n");
    // // scanf("%d" , &y);
    // z = x + y;
    // printf("The value of %d + %d equals %d\n" , x , y, z);
    // return 0;

    // int ch;
    // printf("Enter a character\n");
    // scanf("%c" , &ch);
    // printf("The character you entered is:  %c ", ch);
    // return 0;

    // float f;6
    // double d;
    // scanf("%f %lf", &f, &d);
    // printf("%f %lf\n ", f, d);
    // return 0;

    // int ch;
    // printf("Please Enter Your Name :\n ");
    // scanf("%c", &ch);
    // printf("Your name is %c", ch);

    // float x, y, z;
    // scanf("%f %f", &x, &y);
    // z = x + y;
    // printf("%f  %f = %f", x, y, z);

    // double x;
    // scanf("%lf", &x);
    // printf("Your Lucky Number is %.2lf", x);
    // int x = -5;
    // if (x >= 0)
    // {
    //     printf("X is Positive");
    // }
    // else
    // {
    //     printf("X is negetive");
    // }
    // return 0;

    char chr;
    scanf("%c", &chr);
    if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonent");
    }

    return 0;
}
