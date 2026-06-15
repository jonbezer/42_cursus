*This project has been created as part of the 42 curriculum by jonbezer.*

## Description

This project consists of coding a C library that includes numerous general-purpose functions that are highly useful for C programming. 

The goal of this library is to help understand how standard C functions work by re-implementing them from scratch, while also providing a reliable set of tools for future 42 school assignments. The project includes:
- Re-implementation of standard libc functions.
- Creation of additional useful functions for string and memory manipulation.
- Implementation of functions for linked list management.

## Instructions

To compile the library, use the provided Makefile at the root of the repository.

### Compilation:
- `make`: Compiles the library (creates `libft.a`).
- `make clean`: Removes the object files (`.o`).
- `make fclean`: Removes the object files and the `libft.a` archive.
- `make re`: Performs a clean recompilation.

### Usage:
You can link this library to your own projects by including `libft.h` and compiling with the flag `-L. -lft`.

## Resources & AI Usage

This project was developed with the support of AI to assist in:
- Understanding complex concepts related to pointer arithmetic and memory allocation.
- Clarifying the behavior of standard C library functions.
- Debugging and optimizing code logic.
- Structuring the documentation according to the project requirements.

Relevant documentation:
- C Programming Language (ISO/IEC 9899 standard)
- Man pages (libc functions)

## Library Functions

The library is organized into three main categories:

### 1. Libc Functions
These functions are re-implementations of standard C library functions.

* `ft_isalpha`: Checks for an alphabetic character.
* `ft_isdigit`: Checks for a digit (0-9).
* `ft_isalnum`: Checks for an alphanumeric character.
* `ft_isascii`: Checks if the character fits in the ASCII character set.
* `ft_isprint`: Checks for any printable character.
* `ft_strlen`: Calculates the length of a string.
* `ft_memset`: Fills memory with a constant byte.
* `ft_bzero`: Writes zeros to a byte string.
* `ft_memcpy`: Copies memory area.
* `ft_memmove`: Copies memory area (handles overlapping memory).
* `ft_strlcpy`: Copies a string with a size limit.
* `ft_strlcat`: Concatenates a string with a size limit.
* `ft_toupper`: Converts a character to uppercase.
* `ft_tolower`: Converts a character to lowercase.
* `ft_strchr`: Locates the first occurrence of a character in a string.
* `ft_strrchr`: Locates the last occurrence of a character in a string.
* `ft_strncmp`: Compares two strings up to n characters.
* `ft_memchr`: Scans memory for a character.
* `ft_memcmp`: Compares memory areas.
* `ft_strnstr`: Locates a substring in a string.
* `ft_atoi`: Converts a string to an integer.
* `ft_calloc`: Allocates and clears memory.
* `ft_strdup`: Duplicates a string.

### 2. Additional Functions
These functions are either not present in the standard library or provide additional functionality.

* `ft_substr`: Extracts a substring from a string.
* `ft_strjoin`: Concatenates two strings into a new one.
* `ft_strtrim`: Trims characters from the beginning and end of a string.
* `ft_split`: Splits a string into an array of strings using a delimiter.
* `ft_itoa`: Converts an integer to a string.
* `ft_strmapi`: Applies a function to each character of a string.
* `ft_striteri`: Applies a function to each character with its index.
* `ft_putchar_fd`: Outputs a character to a file descriptor.
* `ft_putstr_fd`: Outputs a string to a file descriptor.
* `ft_putendl_fd`: Outputs a string followed by a newline to a file descriptor.
* `ft_putnbr_fd`: Outputs a number to a file descriptor.

### 3. Linked List Functions
These functions are used to manipulate linked lists.

* `ft_lstnew`: Creates a new list node.
* `ft_lstadd_front`: Adds a node to the beginning of the list.
* `ft_lstsize`: Counts the number of nodes in a list.
* `ft_lstlast`: Returns the last node of the list.
* `ft_lstadd_back`: Adds a node to the end of the list.
* `ft_lstdelone`: Deletes a node and frees its content.
* `ft_lstclear`: Deletes and frees the entire list.
* `ft_lstiter`: Iterates over the list and applies a function.
* `ft_lstmap`: Creates a new list by applying a function to each node.
