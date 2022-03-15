## README _PRINTF

    This is a brief description of the code of the _printf function,
    developed by Agustín Labadie and Germán Izquierdo.
    
    It was coded using vi/vim text editors in GitBash and Windows Powershell and compiled 
    using the GNU-GCC compiler with the following flags: 
    
    gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

    Now, we will explain the functioning of our functions. 

_printf.c 

    This is our main function. It's pourpuse is to produce an output according to a format, 
    returning the lenght of the output string and printing it's contents to stdout.

    Here the program will iterate on the recived string to identify every character. 
    //if (format[i] != '%')//

    It will also iterate on the selector structs, wich are used to identify the function 
    to be applied to print the given argument.
    //if (format[i + 1] == selector[j].x)//

    It will also check for various border cases, including NULL arguments and a bunch of other cases.

main.h 

    This is our library file. In here you cand find all the prototypes for our functions, 
    the used standard librearies, and the model for our structs. 


print_c.c

    This function will be called by the selector iteration to check for and print characters.
    It will return the number of printed characters.

print_s.c
    
    This function will be called by the selector iteration to check for and print strings.
    It will also check for a NULL string given as an argument, preventing this border case.
    It will return the number of printed characters.

print_i.c

    Description

print_ui.c 

    description

_putchar.c

    System call used to print the characters. It uses the write system call. 
    It's our flagship, the function we use to print all chars. man write(2) for more info

_pow.c

    Function used to resolve the print_i.c and print_ui.c functions
