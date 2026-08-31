# 📚 Libft - 42 Cursus

*My very first custom C library.*

## 🗣️ About The Project
The **libft** project is the very first milestone in the 42 school curriculum. The objective is to understand the inner workings of standard C library functions by rewriting them from scratch. This custom library is a fundamental tool that will be heavily relied upon in all subsequent 42 projects. 

Writing this library requires deep understanding of memory allocation, pointer manipulation, and algorithm logic in C.

**Status:** Finished (2026).  
**Final Grade:** 125/100 🏆

## ⚙️ Usage

The library is compiled using the provided `Makefile`.

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/9Sk1p/Libft_20_08_2026.git](https://github.com/9Sk1p/Libft_20_08_2026.git)
   cd Libft_20_08_2026
   ```
2. **Compile the library:**
   ```bash
   make
   ```
   *(Note: run `make bonus` to compile the library including the linked list functions).*
3. **Clean up object files:**
   ```bash
   make clean
   ```
3. **Clean all:**
   ```bash
   make fclean
   ```

To use it in your code, simply include `#include "libft.h"` and compile your project with `libft.a`.

## 🛠️ Included Functions

These functions implement standard libc behavior, provide useful utility operations, and introduce a complete toolkit for manipulating linked lists using a custom `t_list` structure.

*   **Character checking and conversion:**
    `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
*   **String manipulation:**
    `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
*   **Memory manipulation:**
    `ft_calloc`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_strdup`
*   **Number conversion:**
    `ft_atoi`, `ft_itoa`
*   **File descriptor outputs:**
    `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
*   **Linked list operations:**
    `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`