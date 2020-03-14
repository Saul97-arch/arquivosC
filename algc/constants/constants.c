#include <stdio.h>
/* About constansts: A constant is declared similarly to variables, 
except it is prepended with the const keyword, and you always need to specify a value. */
/* Another way to define constants is by using this syntax:
In this case, you don't need to add a type, and you don't also need the = equal sign, 
and you omit the semicolon at the end.The C compiler will infer the type from the value specified, at compile time.*/
#define IDADE = 22;
int main(void){
    /* It's a convention declare the constants with uppercase */
    const int AGE = 22;
    const char NAME[5] = "Saulo";
}
