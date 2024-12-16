# Libft

Libft is the first project at 42 school, aimed at creating your own library of functions in the C programming language. This project helps deepen understanding of the standard C library, improve skills in working with pointers, strings, and memory, and prepare for more complex tasks.

## Description

Libft includes implementations of various functions from the standard C library, such as functions for working with strings, memory, lists, and other basic data structures. Additionally, you can add your own functions that will be useful in other projects.

## Project Structure

- **ft_strlen**: calculates the length of a string.
- **ft_strcpy**: copies a string from one buffer to another.
- **ft_strdup**: creates a duplicate of a string.
- **ft_memset**: fills memory with a specific value.
- **ft_memcpy**: copies data from one memory area to another.
- **ft_atoi**: converts a string to a number.
- **ft_isalpha**, **ft_isdigit**, **ft_isalnum**, **ft_isascii**, **ft_isprint**: character checks.
- **ft_tolower**, **ft_toupper**: character case conversions.

In addition to standard functions, Libft also includes:

- Functions for working with singly linked lists: creation, adding elements, etc.
- Functions for working with numbers and strings, such as converting numbers to strings and vice versa.

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/extraden/libft.git
   ```
2. Navigate to the project directory:
   ```bash
   cd libft
   ```
3. Build the library:
   ```bash
   make
   ```
4. Include `libft.a` in your project:
   ```c
   #include "libft.h"
   ```
   And compile with `-L.` and `-lft`.

## File Structure

- **src/**: source code of the functions.
- **includes/**: header files.
- **Makefile**: build automation.
- **libft.a**: compiled library.

## Testing

You can use testing frameworks such as [Libftest](https://github.com/jtoty/Libftest) or [libft-unit-test](https://github.com/alelievr/libft-unit-test) to ensure all functions work correctly.

## License

This project is available under the MIT License. You are free to use and modify it.

---

If you have any questions or suggestions, feel free to contact me via GitHub.
