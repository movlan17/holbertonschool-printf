#include "main.h"  // ya da _printf funksiyasının prototipi haradadırsa onu daxil et
#include <stdio.h> // test üçün standart printf (istəyə bağlı)

int main(void)
{
    int len;

    len = _printf("Let's print a simple sentence.\n");
    _printf("Length: %d\n", len);

    len = _printf("%c\n", 'S');
    _printf("Length: %d\n", len);

    len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
    _printf("Length: %d\n", len);

    len = _printf("%s", "This sentence is retrieved from va_args!\n");
    _printf("Length: %d\n", len);

    len = _printf("%%\n");
    _printf("Length: %d\n", len);

    return 0;
}
