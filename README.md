<h1 align="center">
	42cursus - libft
</h1>

## ❗️ What's it about?
> _bunch of functions derived from the original Libc library in C which can be used later on in other projects._

	TLDR: in this project you'll find basic C functions cloned from the original libc library 
  	which are later on compiled into a library and can be used in other projects.
[**Click here for more information on libc**](https://en.wikipedia.org/wiki/C_standard_library)

### Functions from `<ctype.h>` library

* [`ft_isascii`](libft/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](libft/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](libft/ft_isalpha.c)			- alphabetic character test.
* [`ft_islower`](libft/ft_islower.c) *	- lower-case character test.
* [`ft_isupper`](libft/ft_isupper.c) *	- upper-case character test.
* [`ft_isdigit`](libft/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isxdigit`](libft/ft_isxdigit.c) *	- hexadecimal-digit character test.
* [`ft_isprint`](libft/t_isprint.c)			- printing character test (space character inclusive).
* [`ft_isgraph`](libft/ft_isgraph.c) *	- printing character test (space character exclusive).
* [`ft_isspace`](libft/ft_isspace.c) *	- white-space character test.
* [`ft_isblank`](libft/ft_isblank.c) *	- space or tab character test.
* [`ft_ispunct`](libft/ft_ispunct.c) *	- punctuation character test.
* [`ft_iscntrl`](libft/ft_iscntrl.c) *	- control character test.
* [`ft_tolower`](libft/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](libft/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](libft/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_atof`](libft/ft_atof.c) *		- convert ASCII string to integer.
* [`ft_calloc`](libft/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](libft/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](libft/t_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](libft/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](libft/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](libft/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](libft/ft_memcpy.c)		- copy memory area.
* [`ft_memccpy`](libft/ft_memccpy.c)	- copy string until character found.

### Functions from `<string.h>` library

* [`ft_strlen`](libft/ft_strlen.c)				- find length of string.
* [`ft_strlen_2`](libft/ft_strlen_2.c) *				- find length of 2D array (i.e. splitted string).
* [`ft_strchr`](libft/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](libft/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strstr`](libft/ft_strstr.c) *		- locate a substring in a string.
* [`ft_strnstr`](libft/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strcmp`](libft/ft_strcmp.c) *		- compare strings.
* [`ft_strncmp`](libft/ft_strncmp.c) *			- compare strings (size-bounded).
* [`ft_strnrcmp`](libft/ft_strnrcmp.c)			- reversely compare strings (size-bounded).
* [`ft_strcpy`](libft/ft_strcpy.c) *		- copy strings.
* [`ft_strncpy`](libft/ft_strncpy.c) *	- copy strings (size-bounded).
* [`ft_strdup`](libft/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strndup`](libft/ft_strndup.c) *	- save a copy of a string (with malloc, size-bounded).
* [`ft_strcat`](libft/ft_strcat.c) *		- concatenate strings (s2 into s1).
* [`ft_strncat`](libft/ft_strncat.c) *	- concatenate strings (s2 into s1, size-bounded).
* [`ft_strlcpy`](libft/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](libft/ft_strlcat.c)			- size-bounded string concatenation.

### Functions from `<math.h>` library

* [`ft_sqrt`](libft/ft_sqrt.c) *	- square root function.
* [`ft_pow`](libft/ft_pow.c) *	- power function.

### Non-standard functions

* [`ft_swap`](libft/ft_swap.c) *			- swap value of two integers.
* [`ft_putchar`](libft/ft_putchar.c) *	- output a character to stdout.
* [`ft_putchar_fd`](libft/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr`](libft/ft_putstr.c) *		- output string to stdout.
* [`ft_putstr_fd`](libft/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl`](libft/ft_putendl.c) *	- output string to stdout with newline.
* [`ft_putendl_fd`](libft/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr`](libft/t_putnbr.c) *		- output integer to stdout.
* [`ft_putnbr_fd`](libft/ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](libft/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](libft/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](libft/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](libft/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](libft/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_split_free`](libft/ft_split_free.c) *				- free splitted string.
* [`ft_strmapi`](libft/ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_ftoa_rnd`](libft/ft_ftoa_rnd.c)			- convert float to ASCII string.

### Linked list functions

* [`ft_lstnew`](libft/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](libft/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](libft/lft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](libft/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](libft/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](libft/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](libft/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](libft/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](libft/ft_lstmap.c)				- apply function to content of all list's elements into new list.
