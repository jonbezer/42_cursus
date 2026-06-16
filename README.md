*This project has been created as part of the 42 curriculum by jonbezer.*

<div align="center">

# 📚 libft

**Mastering C fundamentals through library implementation.**

<img src="assets/libft.png" alt="Libft Logo" width="150"/>

</div>

## Description

Libft is a C library project developed as part of the curriculum at 42 School. The goal is to re-implement a set of standard C library functions from scratch, along with additional utility functions. This project serves as a foundational toolkit, providing reliable and reusable code for future C assignments.

The library is organized into three main components:
- **Libc functions:** A functional re-implementation of standard C functions (e.g., `strlen`, `memset`, `atoi`).
- **Additional functions:** Custom utilities designed for string and memory manipulation.
- **Linked list functions:** A complete set of tools to handle dynamic data structures.

By coding these functions manually, this project provides a deep understanding of core programming concepts, such as string and memory management, pointer arithmetic, linked list operations, and low-level C programming logic.

## Instructions

The project includes a `Makefile` that handles the compilation of the source code into the `libft.a` static library. To manage the library, use the following commands at the root of the repository:

- **`make`**: Compiles all source files and creates the `libft.a` archive.
- **`make clean`**: Removes all object files (`.o`) generated during compilation.
- **`make fclean`**: Removes the object files and the compiled `libft.a` library.
- **`make re`**: Executes `fclean` followed by `make` to ensure a clean rebuild.

### Usage

To integrate this library into your own C projects, include the `libft.h` header in your source files and link the library during compilation.

**Example:**

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Resources

### Documentation & Manuals
* **Linux Manual Pages (man)**
* **ISO/IEC 9899 (C Standard Draft n3220)**

### References
* **K.N. King** – *C Programming: A Modern Approach (2nd Edition)*
* **Herbert Schildt** – *C: Completo e Total*
* **Kernighan & Ritchie (K&R)** – *The C Programming Language (2nd Edition)*

### AI Usage
During the development of this project, AI tools were utilized as an auxiliary resource to clarify conceptual doubts, discuss potential edge cases, and analyze logic efficiency. All final implementation, testing, and debugging were conducted manually to ensure full mastery and ownership of the code.

---

## What I Learned
Through this project, I significantly improved my understanding of:
* Pointer arithmetic and memory manipulation.
* Dynamic memory management and leak prevention.
* Data structure implementation (Linked Lists).
* Defensive programming and standard-compliant coding.
* Modular library design for long-term reuse.

## Library — Function reference

### Part 1 · Libc

#### Character classification
| Function | Description |
|---|---|
| `ft_isalpha(int c)` | Checks if `c` is a letter |
| `ft_isdigit(int c)` | Checks if `c` is a digit |
| `ft_isalnum(int c)` | Checks if `c` is a letter or digit |
| `ft_isascii(int c)` | Checks if `c` is in the ASCII table |
| `ft_isprint(int c)` | Checks if `c` is a printable character |

#### Character conversion
| Function | Description |
|---|---|
| `ft_toupper(int c)` | Converts lowercase to uppercase |
| `ft_tolower(int c)` | Converts uppercase to lowercase |

#### String manipulation
| Function | Prototype | Description |
|---|---|---|
| `ft_strlen` | `size_t ft_strlen(const char *s)` | Returns the string length |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | First occurrence of `c` in `s` |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | Last occurrence of `c` in `s` |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares `n` bytes of two strings |
| `ft_strnstr` | `char *ft_strnstr(const char *haystack, const char *needle, size_t len)` | Locates substring in string |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)` | Copies string to `dstsize` |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t dstsize)` | Concatenates string to `dstsize` |

#### Memory
| Function | Prototype | Description |
|---|---|---|
| `ft_memset` | `void *ft_memset(void *b, int c, size_t len)` | Fills memory with constant byte |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | Zeros out memory |
| `ft_memcpy` | `void *ft_memcpy(void *dst, const void *src, size_t n)` | Copies memory area |
| `ft_memmove` | `void *ft_memmove(void *dst, const void *src, size_t n)` | Moves memory area (overlap-safe) |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | Scans memory for byte `c` |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares memory areas |

#### Conversion & Allocation
| Function | Prototype | Description |
|---|---|---|
| `ft_atoi` | `int ft_atoi(const char *str)` | Converts string to integer |
| `ft_calloc` | `void *ft_calloc(size_t count, size_t size)` | Allocates and zeroes memory |
| `ft_strdup` | `char *ft_strdup(const char *s1)` | Duplicates string |

---

### Part 2 · Additional functions
| Function | Prototype | Description |
|---|---|---|
| `ft_substr` | `char *ft_substr(const char *s, unsigned int start, size_t len)` | Extracts substring |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Joins two strings |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Trims set from string ends |
| `ft_split` | `char **ft_split(char const *s, char c)` | Splits string by delimiter |
| `ft_itoa` | `char *ft_itoa(int n)` | Converts int to string |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Maps function to string |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char*))` | Iterates over string with index |
| `ft_putchar_fd`| `void ft_putchar_fd(char c, int fd)` | Writes char to fd |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Writes string to fd |
| `ft_putendl_fd`| `void ft_putendl_fd(char *s, int fd)` | Writes string + newline to fd |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Writes int to fd |

---

### Part 3 · Linked list
*The `t_list` structure:*
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

### Part 3 · Linked list

The `t_list` structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Prototype | Description |
|---|---|---|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | Creates a new node with `content` |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | Inserts `new` at the beginning of the list |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | Inserts `new` at the end of the list |
| `ft_lstsize` | `int ft_lstsize(t_list *lst)` | Counts the number of nodes |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | Returns the last node |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Frees one node (does not free the next) |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Frees the entire list and sets pointer to NULL |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applies `f` to each node's content |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Creates a new list by applying `f` to each node |

---
