
![helloworld](https://user-images.githubusercontent.com/98338462/158496175-46b426ee-5e60-45c1-8672-47335e83119e.PNG)


### README _PRINTF

    This is a brief description of the code of the _printf function,
    developed by Agustín Labadie and Germán Izquierdo.
    
    It was coded using vi/vim text editors in GitBash and Windows Powershell and compiled 
    using the GNU-GCC compiler with the following flags: 
    
    gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

    Now, we will explain the functioning of our functions. 

#### _printf.c 

    This is our main function. It's pourpuse is to produce an output according to a format, 
    returning the lenght of the output string and printing it's contents to stdout.

    Here the program will iterate on the recived string to identify every character. 
    //if (format[i] != '%')//

    It will also iterate on the selector structs, wich are used to identify the function 
    to be applied to print the given argument.
    //if (format[i + 1] == selector[j].x)//

    It will also check for various border cases, including NULL arguments and a bunch of other cases.

#### main.h 

    This is our library file. In here you cand find all the prototypes for our functions, 
    the used standard librearies, and the model for our structs. 


#### print_c.c

    This function will be called by the selector iteration to check for and print characters.
    It will return the number of printed characters.

#### print_s.c
    
    This function will be called by the selector iteration to check for and print strings.
    It will also check for a NULL string given as an argument, preventing this border case.
    It will return the number of printed characters.

#### print_i.c

    This function will be called by the selector iteration to check for and print intergers.
    its range is from -2147483648 to -2147483647.
    Returns number of printed characters.

#### print_ui.c 

    This is an auxiliary function to print_i, handles negative numbers by unsigned int.
    Returns number of printed characters.

#### _putchar.c

    System call used to print the characters. It uses the write system call. 
    It's our flagship, the function we use to print all chars. man write(2) for more info
    Returns 1 for success.

#### _pow.c

    Functions that calculates a numbers power, needs a base and an exponential.
    Returns result.
    
    
    
    
   (image:medium.com)
