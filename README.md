# ft_printf

_This project has been created as part of the 42 curriculum by  Dina Roudiny
## Description

`ft_printf` is a custom implementation of the standard C library function `printf()`. The goal of this project is to recreate the basic behavior of `printf()` while learning about variadic functions, formatted output, type conversions, and low-level output using the `write()` system call.

The function processes a format string, identifies conversion specifiers, retrieves the corresponding arguments using `va_list`, and prints the formatted output to standard output.

The implementation is written in C and follows the modular structure required by the 42 curriculum.

## Instructions

### Compilation

The project is intended to be compiled into a static library named `libftprintf.a`.

If your Makefile defines the usual 42 targets, compile the project with:

bash

```
make
```

Other common Makefile commands are:

bash

```
make clean
make fclean
make re
```

- `make`: Compiles the source files and creates the library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the compiled library.
- `make re`: Rebuilds the project from scratch.

### Usage

Include the project header in your C source file:

c

```
#include "ft_printf.h"
```

Compile your program together with the library:

bash

```
cc main.c -I. -L. -lftprintf -o test
```

Example:

c

```
#include "ft_printf.h"

int main(void)
{
    int count;

    count = ft_printf("Hello, %s! Number: %d\n", "42", 42);
    ft_printf("Characters printed: %d\n", count);
    return (0);
}
```

Expected output:

text

```
Hello, 42! Number: 42
Characters printed: 23
```

The returned value represents the number of characters printed, including the newline character.

## Supported Conversions

The implementation supports the following format specifiers:

|Specifier|Description|
|---|---|
|`%c`|Prints a single character.|
|`%s`|Prints a string. A null string pointer is displayed as `(null)`.|
|`%p`|Prints a pointer address in hexadecimal notation. A null pointer is displayed as `(nil)`.|
|`%d`|Prints a signed decimal integer.|
|`%i`|Prints a signed decimal integer.|
|`%u`|Prints an unsigned decimal integer.|
|`%x`|Prints an unsigned integer in lowercase hexadecimal.|
|`%X`|Prints an unsigned integer in uppercase hexadecimal.|
|`%%`|Prints a literal percent sign.|

## Project Structure

The project is organized into separate source files, with each function responsible for a specific output operation.

- ft_printf.c`: Main formatting function and conversion-specifier dispatch.
- `ft_print_putchar.c`: Prints a single character.
- `ft_print_putstr.c`: Prints a string.
- `ft_print_putnbr.c`: Prints a signed integer.
- `ft_print_unsigned.c`: Prints an unsigned integer.
- `ft_print_ptr.c`: Prints a pointer address.
- `ft_print_hex.c`: Converts and prints a number in hexadecimal notation.
- `ft_printf.h`: Header file containing function prototypes and required library includes.
- `Makefile`: Defines the compilation and library-building rules.

## Implementation Details

### Variadic Functions

The project uses the `<stdarg.h>` library to handle a variable number of arguments.

- `va_start()` initializes access to the variable arguments.
- `va_arg()` retrieves each argument according to its conversion specifier.
- `va_end()` completes the variadic argument handling.

### Output

The implementation uses the `write()` system call to print characters directly to standard output.

The output functions return character counts, allowing `ft_printf()` to calculate and return the total number of characters printed.

### Modular Design

Each conversion is handled by a dedicated helper function. The `converter()` function selects the appropriate helper based on the format specifier, making the implementation easier to understand, maintain, and test.

## Resources

The following resources are relevant to this project:

- The C programming language and variadic functions.
- The `printf(3)` (https://man7.org/linux/man-pages/man3/printf.3.html)
- The `stdarg(3)`(https://man7.org/linux/man-pages/man3/stdarg.3.html)
- The `write(2)` (https://man7.org/linux/man-pages/man2/write.2.html)
- The official 42 project subject and evaluation requirements.


Useful commands for consulting system documentation include:

bash

```
man 3 printf
man 3 stdarg
man 2 write
```
N.B:
For running the whole fucntion using the main use  cc -Wall -Wextra -Werror *.c *.h 
the ./a.out 

## Author

- **Login:** Dina Roudiny 
- **Program:** 42 Málaga
- **Project:** ft_printf