#include "main.h"

/**
 * _print - This function is a custom formated output function
 * it leverages the special character '%' to give a
 * formated output based on the character that follows
*/
int _printf(const char *format, ...)
{
    int print_char = 0; //this will track and return the number of characters printed
    va_list arg_list;

/* if the argument we recieve is an invalid character or empty
this code will immediately terminate the program with a -1 return value */
    if (format == NULL)
        return -1;

/*==================START RECEIVING ARGUMENT FORM USER===================*/
    va_start (arg_list, format);

    while (*format) // THIS WILL ITERATE THROUGH ALL THE CHARACTERS ENTERED
    {
        if (*format != '%')
        {
            write(1, format, 1);
            print_char++;
        }
        else // checks if the character entered is %
        {
            format++; // this the skips the % and check the next data in front of the %
            if (*format == '\0')
                break;

            if (*format == '%') // print for %%
            {
                write(1, format, 1);
                print_char++;
            }
            else if (*format == 'c')
            {
                char c = va_arg(arg_list, int);
                write(1, &c, 1);
                print_char++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(arg_list, char*);
                int string_len = 0;

                while (str[string_len] != '\0')
                    string_len++;
                
                write(1, str, string_len);
                print_char += string_len;
            }
        }
        format++;
    }

    va_end(arg_list);
    return print_char;
}

int main()
{
    _printf("%c\n", 'a');
    _printf("%%\n");  
    _printf("%s\n", "hello");   
    _printf("hello world!\n");   
}