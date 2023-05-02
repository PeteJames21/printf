# printf

A C implementation of the `printf` function

## Collaborators:
- [Peter Ndung'u](https://github.com/PeteJames21)
- [Kelvin Gikaria](https://github.com/Gikaria)

# Description
This project is an augmented C implementation of the builtin `printf` function. The function print formatted text using the following format specifiers:
- %c: print a single character
- %s: print a string
- %S: print a string. Non-printable chars (0 < ASCII value < 32 or >= 127) are printed this way: `\x`, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
- %r: print a string in reverse
- %d: print an integer
- %i: print an integer
- %R: print the ROT13 encoding of the string
- %b: print the binary encoding of an unsigned integer
- %X: print the uppercase hexadecimal encoding of an integer
- %x: print the lowercase hexadecimal encoding of an integer
- %o: print the octal encoding of an integer

# Usage
The project is compilable on Ubuntu >= 20.04 using the following command.<br>
```gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c```<br><br>
Once compiled, the `_printf` function can be used using the same syntax as the builtin `printf` function with the caveat that only the format specifiers listed above can be used.
