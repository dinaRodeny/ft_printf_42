# ft_printf

`ft_printf` is a 42 school project that recreates the core behavior of the C
standard library's `printf` function. It uses variadic arguments and writes
formatted output to standard output.

## Supported conversions

| Conversion | Output |
| --- | --- |
| `%c` | A character |
| `%s` | A string (`(null)` for a null string pointer) |
| `%p` | A pointer address (`(nil)` for a null pointer) |
| `%d`, `%i` | A signed decimal integer |
| `%u` | An unsigned decimal integer |
| `%x`, `%X` | An unsigned hexadecimal integer, lowercase or uppercase |
| `%%` | A literal percent sign |

## Build

Build the static library with the provided Makefile:

```sh
make
```

This creates `libftprintf.a`. Remove the object files with `make clean`, or
remove both the object files and the library with `make fclean`.

## Usage

Include `ft_printf.h` and link your program against the library:

```c
#include "ft_printf.h"

int main(void)
{
	ft_printf("Hello, %s! Number: %d\n", "42", 42);
	return (0);
}
```

For example, compile the program (saved as `main.c`) from the project directory:

```sh
cc -Wall -Wextra -Werror main.c -I. -L. -lftprintf -o example
```

## Resources

- `printf(3)` — the C formatted-output function reference
- `stdarg(3)` — variadic argument handling
