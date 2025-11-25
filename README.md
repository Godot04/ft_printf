# ft_printf

A custom implementation of the C standard library function `printf()`. This project is part of the 42 School curriculum and aims to recreate the behavior of `printf()` with support for various format specifiers.

## 📋 Table of Contents

- [About](#about)
- [Features](#features)
- [Format Specifiers](#format-specifiers)
- [Project Structure](#project-structure)
- [Compilation](#compilation)
- [Usage](#usage)
- [Testing](#testing)
- [Implementation Details](#implementation-details)
- [Author](#author)

## 🎯 About

This project involves recoding the `printf()` function from the C standard library. The goal is to understand variadic functions, format parsing, and type conversion while adhering to strict coding standards and memory management rules.

## ✨ Features

- **Variadic Function**: Handles variable number of arguments using `stdarg.h`
- **Format Parsing**: Correctly parses format strings and identifies conversion specifiers
- **Return Value**: Returns the number of characters printed (matching standard `printf()` behavior)
- **NULL Handling**: Properly handles NULL pointers and edge cases
- **No Buffer Management**: Uses direct `write()` calls for output
- **Norm Compliant**: Follows 42 School coding standards (Norminette)

## 🔤 Format Specifiers

The implementation supports the following conversion specifiers:

| Specifier | Description | Example |
|-----------|-------------|---------|
| `%c` | Print a single character | `ft_printf("%c", 'A')` |
| `%s` | Print a string | `ft_printf("%s", "Hello")` |
| `%p` | Print a pointer address in hexadecimal | `ft_printf("%p", ptr)` |
| `%d` | Print a signed decimal integer | `ft_printf("%d", -42)` |
| `%i` | Print a signed integer (same as `%d`) | `ft_printf("%i", 42)` |
| `%u` | Print an unsigned decimal integer | `ft_printf("%u", 42)` |
| `%x` | Print a number in lowercase hexadecimal | `ft_printf("%x", 255)` → `ff` |
| `%X` | Print a number in uppercase hexadecimal | `ft_printf("%X", 255)` → `FF` |
| `%%` | Print a percent sign | `ft_printf("%%")` → `%` |

## 📁 Project Structure

```
ft_printf/
├── ft_printf.c              # Main ft_printf implementation
├── ft_printf.h              # Header file with function prototypes
├── Makefile                 # Build configuration
├── test.c                   # Comprehensive test suite
├── libft/                   # Custom C library (dependency)
│   ├── libft.h
│   ├── Makefile
│   └── *.c                  # Various libft functions
└── pathes/                  # Format specifier handlers
    ├── ch_path.c           # Character (%c) handler
    ├── string_path.c       # String (%s) handler
    ├── decimal_path.c      # Decimal (%d, %i) handler
    ├── unsigned_decimal_path.c  # Unsigned decimal (%u) handler
    ├── hexadecimal_lower_path.c # Lowercase hex (%x) handler
    ├── hexadecimal_upper_path.c # Uppercase hex (%X) handler
    └── void_path.c         # Pointer (%p) handler
```

## 🔨 Compilation

### Build the Library

```bash
make
```

This creates `libftprintf.a` which includes both `ft_printf` and the `libft` functions.

### Clean Object Files

```bash
make clean
```

### Remove All Generated Files

```bash
make fclean
```

### Rebuild from Scratch

```bash
make re
```

## 🚀 Usage

### 1. Include the Header

```c
#include "ft_printf.h"
```

### 2. Link the Library

Compile your program with the library:

```bash
gcc -Wall -Wextra -Werror your_program.c libftprintf.a -o your_program
```

### 3. Example Code

```c
#include "ft_printf.h"

int main(void)
{
    int count;

    // Print a string
    count = ft_printf("Hello, %s!\n", "World");
    ft_printf("Characters printed: %d\n", count);

    // Print numbers
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    ft_printf("Uppercase hex: %X\n", 255);

    // Print pointer
    int x = 42;
    ft_printf("Pointer address: %p\n", &x);

    // Print unsigned
    ft_printf("Unsigned: %u\n", 4294967295U);

    // Print character
    ft_printf("Character: %c\n", 'A');

    // Print percent sign
    ft_printf("Percentage: %%\n");

    return 0;
}
```

## 🧪 Testing

The project includes a comprehensive test suite in `test.c` that compares `ft_printf` output against the standard `printf` function.

### Run Tests

```bash
# Compile the test program
gcc -Wall -Wextra -Werror test.c libftprintf.a -o test

# Run tests
./test
```

The test suite covers:
- Basic string printing
- All format specifiers (%c, %s, %p, %d, %i, %u, %x, %X, %%)
- NULL pointer handling
- Edge cases (INT_MAX, INT_MIN, UINT_MAX, zero values)
- Mixed format strings
- Return value verification

## 🔍 Implementation Details

### Main Function (`ft_printf.c`)

The core function parses the format string character by character:
- Regular characters are printed directly
- When `%` is encountered, it delegates to the appropriate handler based on the following character
- Returns the total number of characters printed

### Format Handlers (`pathes/`)

Each format specifier has its dedicated handler:

- **`ch_path.c`**: Writes a single character using `write()`
- **`string_path.c`**: Iterates through string characters; handles NULL as "(null)"
- **`decimal_path.c`**: Uses `ft_itoa()` from libft to convert integers to strings
- **`unsigned_decimal_path.c`**: Manual conversion of unsigned integers to decimal strings
- **`hexadecimal_lower_path.c`**: Converts unsigned int to lowercase hexadecimal
- **`hexadecimal_upper_path.c`**: Converts unsigned int to uppercase hexadecimal
- **`void_path.c`**: Converts pointer address to hexadecimal with "0x" prefix; handles NULL as "(nil)"

### Key Design Decisions

1. **Modular Architecture**: Each format specifier is handled by a separate function for better maintainability
2. **No Buffering**: Direct `write()` system calls ensure immediate output
3. **Character Counting**: Each handler returns the number of characters written
4. **libft Integration**: Leverages existing libft functions (especially `ft_itoa()`)
5. **Error Handling**: Returns -1 on invalid format specifiers

## 👤 Author

**opopov**
- 42 School Student
- Created: November 28, 2024
- Last Updated: December 2, 2024

---

## 📝 Notes

- This implementation does not support field width, precision, or flags (bonus features)
- Memory management is handled carefully with proper `free()` calls
- The project follows the 42 School Norm (Norminette validation)
- All code is commented with the standard 42 header

## 📚 Resources

- [printf man page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Variadic functions in C](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- 42 School subject: `en.subject.pdf`
