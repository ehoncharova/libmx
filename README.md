# Libmx

The point was to create own library of standard functions in C, using only:
---
```malloc, malloc_size/malloc_usable_size, free, open,read, write, close, exit```

## Installation

For instalation library you need to write `make all` in terminal. It's educational project, so feel free to use it.

## The description of functions is following:

* `void mx_printchar(char ch)` function that print chars.
* `void mx_printstr(const char *s)` function that print string.
* `void mx_print_strarr(char **arr, const char *delim)` function that print array of strings.
* `void mx_printint(int num)` function that print integers.
* `void mx_str_reverse(char *s)` function that print string in reverse order.
* `void mx_swap_char(char *s1, char *s2)` function that swaps chars.
* `char *mx_nbr_to_hex(unsigned long nbr)` function that convert number into hexadecimal code.
* `int mx_quicksort(int *arr, int left, int right)` quicksort algorythm for sorting array of integers.
* `char *mx_itoa(int number)` function that takes an integer and converts it to a string.
* `double mx_pow(double a, unsigned int pow)` function that computes `n` raised to the power of zero or a positive integer `pow`.
* `int mx_sqrt(int x)` function that computes the non-negative square root of `x`.
* `int mx_bubble_sort(int *arr, int n)` function that sorts an array of integers in place in ascending order using the bubble sort algorithm.
* `unsigned long mx_hex_to_nbr(const char *hex)` function that converts a hexadecimal string into an `unsigned long` number.
* `void mx_foreach(const int *arr, int size, void (*f)(int))` function that applies the function `f` for each element of the array `arr` given `size`
* `int mx_binary_search(char **arr, int size, const char *s, int *count)` function that searches the strings in the array `arr` with the given `size` of array using the binary search algorithm assuming that the input array has already beensorted in a lexicographical order.
* `void mx_swap_char(char *s1, char *s2)` function that swaps the characters of a string using pointers. Do nothing if `s1` or `s2` does not exist.
* `int mx_strlen(const char *str)` function that return the number of chars in string.
* `char *mx_strcpy(char *dst, const char *src)` function that copy string for `src` to `dst`.
* `int mx_strcmp(const char *s1, const char *s2)` function that compare strings `s1` and `s2`.
* `int mx_strncmp(const char *s1, const char *s2, int n)` function that compare strings `s1` and `s2` for `n` characters.
* `char *mx_strcat(char *s1, const char *s2)`function that appends a copy of the source string to the destination string.
* `char *mx_strnew(const int size)` function that allocates memory for a string of a specific `size` and one additional byte for theterminating `'\0'`.
* `char *mx_strdup(const char *str)` function that has the same behavior as the standard libc function `strdup`.
* `char *mx_strjoin(char const *s1, char const *s2)` function that concatenates strings `s1` and `s2`  into a new string and terminates the new string with `'\0'`.
* `void mx_strdel(char **str)` function that takes a pointer to a string, frees string memory with `free`, sets the string to `NULL`.
* `void mx_del_strarr(char ***arr)` function that takes a pointer to a NULL-terminated array of strings, deletes the contents of the array, frees array memory with `free`, sets a pointer to `NULL`.
* `char *mx_file_to_str(const char *filename)` function that takes a filename as a parameter, reads data from the file into a string, returns a `NULL`-terminated string, returns `NULL` in case of any errors.
* `char *mx_strstr(const char *s1, const char *s2)` function that has the same behavior as the standard libc function `strstr`.
* `char *mx_strncpy(char *dst, const char *src, int len)` function that has the same behavior as the standard libc function `strncpy`.
* `void mx_str_reverse(char *s)` function that reverses a string using pointers. Do nothing if a string does not exist.
* `int mx_count_words(const char *str, char delimiter)` function that counts words in a string, where word is a sequence of characters separated by a delimiter.
* `char *mx_strchr(const char *s, int c)` function that searches for the first occurrence of the character `c` in the string pointed to by the argument `s`.
* `int mx_count_substr(const char *str, const char *sub)` function that counts the substrings `sub` in the string `str`. Returns the count of `sub` in `str`, returns `0`  if `sub` is an empty string, returns `-1` if str and / or sub do not exist.
* `int mx_get_char_index(const char *str, char c)` function that finds the index of the first occurrence of the character `c` in a string `str`. A string is a sequence of characters, excluding `NULL` in the end.
* `int mx_get_substr_index(const char *str, const char *sub)` function that finds the index of a substring.
* `bool mx_isspace(char c)` function that returns `1` if `c` is whitespace and `0` if it is not.
* `char *mx_strtrim(const char *str)` function that takes a string, and creates a new one from it without whitespace characters at the beginning and the end of the string, frees all unused memory.
* `void *mx_memset(void *b, int c, size_t len)` function that has the same behavior as the standard libc function `memset`.
* `void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n)` function that has the same behavior as the standard libc function `memcpy`.
* `int mx_memcmp(const void *s1, const void *s2, size_t n)` function that has the same behavior as the standard stdlib function `memcmp`.
* `t_list *mx_create_node(void *data)` function that creates a new node of a linked list `t_list`. The function assigns a parameter `data` to the list variable `data` and assigns `next` to `NULL`.
* `void mx_pop_back(t_list **head)` function that removes the last node of the linked list and frees the memoryallocated for the node.
* `void mx_pop_front(t_list **head)` function that removes the first node of the linked list and frees the memoryallocated for the node.
* `void mx_push_back(t_list **list, void *data)` function that inserts a node of `t_list` type with the given parameter `data` at the end of the linked list.
* `void mx_push_front(t_list **list, void* data)` function that inserts a new node of `t_list` type with the given parameter `data` at the beginning of the linked list.
###
MIT License

Copyright (c) [2021] [libmx]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.




