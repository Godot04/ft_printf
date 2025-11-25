# ft_printf - Custom Printf Implementation

![42 school](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white)
![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Norminette](https://img.shields.io/badge/Norminette-passing-success?style=flat-square)

## 📖 About

**ft_printf** is a project at 42 School that involves recreating the `printf()` function from the C standard library. This project teaches variadic functions, format parsing, type conversion, and low-level output operations using the `write()` system call.

Through this project, I learned how to handle variable numbers of arguments, parse format strings, and implement different type conversions while maintaining strict adherence to coding standards.

## 🎯 Project Goals

- Understand and implement variadic functions using `stdarg.h`
- Parse format strings and handle multiple conversion specifiers
- Learn type conversion and low-level output operations
- Follow the 42 School coding standards (Norminette)
- Return the number of printed characters (matching standard `printf()` behavior)

## � Format Specifiers Implemented

### Conversion Specifiers

My implementation supports the following format specifiers:

- `%c` - Print a single character
- `%s` - Print a string (handles NULL as "(null)")
- `%p` - Print a pointer address in hexadecimal format (handles NULL as "(nil)")
- `%d` - Print a signed decimal integer
- `%i` - Print a signed integer (same as %d)
- `%u` - Print an unsigned decimal integer
- `%x` - Print a number in lowercase hexadecimal
- `%X` - Print a number in uppercase hexadecimal
- `%%` - Print a percent sign

### Implementation Structure

The project is organized with a modular approach:

- **ft_printf.c** - Main function that parses format string and delegates to handlers
- **ft_printf.h** - Header file with function prototypes
- **pathes/** - Directory containing individual format specifier handlers:
  - `ch_path.c` - Character conversion
  - `string_path.c` - String conversion
  - `decimal_path.c` - Signed integer conversion
  - `unsigned_decimal_path.c` - Unsigned integer conversion
  - `hexadecimal_lower_path.c` - Lowercase hexadecimal conversion
  - `hexadecimal_upper_path.c` - Uppercase hexadecimal conversion
  - `void_path.c` - Pointer address conversion
- **libft/** - Custom C library used for utility functions

## �️ Compilation

### Building the Library

To compile the library, simply run:

```bash
make
```

This creates `libftprintf.a` - a static library containing all the functions.

### Available Commands

- `make` - Compile the library
- `make clean` - Remove object files
- `make fclean` - Remove object files and the library
- `make re` - Recompile everything from scratch

## � Usage Example

```c
#include "ft_printf.h"

int main(void)
{
    int count;

    // Print a string
    count = ft_printf("Hello, %s!\n", "World");
    ft_printf("Characters printed: %d\n", count);

    // Print numbers in different formats
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    ft_printf("Uppercase hex: %X\n", 255);
    ft_printf("Unsigned: %u\n", 4294967295U);

    // Print pointer address
    int x = 42;
    ft_printf("Pointer: %p\n", &x);

    // Print character and percent
    ft_printf("Character: %c\n", 'A');
    ft_printf("Percent: %%\n");

    return 0;
}
```

Compile your program with the library:

```bash
gcc -Wall -Wextra -Werror your_program.c libftprintf.a -o your_program
```

## ⚙️ Technical Details

- **Language**: C
- **Compiler**: gcc
- **Flags**: `-Wall -Wextra -Werror`
- **Norm**: 42 Norminette
- **Library Type**: Static library (`.a`)
- **Dependencies**: libft (included)

## 🔍 Implementation Highlights

- **Variadic Functions**: Uses `va_list`, `va_start`, `va_arg`, and `va_end` from `stdarg.h`
- **Modular Design**: Each conversion specifier has its own dedicated handler function
- **Direct Output**: Uses `write()` system calls without buffering
- **Return Value**: Tracks and returns total number of characters printed
- **Edge Cases**: Properly handles NULL pointers, zero values, and boundary conditions
- **Memory Management**: Careful allocation and deallocation to prevent leaks

## � Notes

- All functions follow the 42 Norminette coding standards
- Memory is properly managed with no leaks
- Returns the total number of characters printed
- Handles edge cases (NULL pointers, zero values, INT_MIN, INT_MAX, etc.)
- This implementation does not include bonus features (field width, precision, flags)
- The library is designed to be reusable in future 42 projects

## � Author

**opopov** - 42 School Student

---

*Created as part of the 42 School curriculum - November/December 2024*
