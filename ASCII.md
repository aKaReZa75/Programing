# ASCII Codes in C Programming for Microcontrollers

In embedded systems, microcontrollers (MCUs) often need to interact with text-based systems, such as displaying information on LCD screens or communicating via serial ports. ASCII (American Standard Code for Information Interchange) is the most widely used character encoding standard that represents text in computers and communication equipment. This document will cover the essential concepts and practical examples of working with ASCII codes in C for microcontroller programming.

## What is ASCII?

ASCII (American Standard Code for Information Interchange) is a character encoding standard used to represent text. Each character (such as letters, digits, and punctuation) is assigned a specific number, known as its ASCII code. ASCII codes are represented as 7-bit binary values ranging from 0 to 127. For example, the uppercase letter 'A' is represented by the ASCII code 65.

## ASCII Code Representation

ASCII characters can be represented in different number systems such as:
- Decimal (e.g., 65 for 'A')
- Hexadecimal (e.g., 0x41 for 'A')
- Binary (e.g., 01000001 for 'A')

The ASCII standard defines characters from 0 to 127, where 0-31 are control characters, 32-126 are printable characters, and 127 is the DEL (delete) character.


## Control Characters (0-31)

| Character | ASCII Code (Decimal) | ASCII Code (Hexadecimal) | Description                                                   |
|-----------|----------------------|--------------------------|---------------------------------------------------------------|
| NUL       | 0                    | 0x00                     | Null character, used to terminate strings in C.               |
| SOH       | 1                    | 0x01                     | Start of Header, used in data communication to signal start of a header. |
| STX       | 2                    | 0x02                     | Start of Text, indicates the start of the actual data in communication. |
| ETX       | 3                    | 0x03                     | End of Text, marks the end of the text portion of the communication. |
| EOT       | 4                    | 0x04                     | End of Transmission, signals the end of a transmission.       |
| ENQ       | 5                    | 0x05                     | Enquiry, used to request a response or data.                  |
| ACK       | 6                    | 0x06                     | Acknowledgment, used to confirm successful receipt of data.   |
| BEL       | 7                    | 0x07                     | Bell, used to alert or produce a beep sound.                   |
| BS        | 8                    | 0x08                     | Backspace, moves the cursor one position backwards.           |
| HT        | 9                    | 0x09                     | Horizontal Tab, moves the cursor to the next tab stop.       |
| LF        | 10                   | 0x0A                     | Line Feed, moves the cursor to the next line.                 |
| VT        | 11                   | 0x0B                     | Vertical Tab, moves the cursor down to the next vertical tab position. |
| FF        | 12                   | 0x0C                     | Form Feed, moves the cursor to the beginning of the next page (used in printers). |
| CR        | 13                   | 0x0D                     | Carriage Return, moves the cursor to the beginning of the line. |
| SO        | 14                   | 0x0E                     | Shift Out, used to switch to an alternate character set.      |
| SI        | 15                   | 0x0F                     | Shift In, switches back to the standard character set.        |
| DLE       | 16                   | 0x10                     | Data Link Escape, used to signify control information in communication. |
| DC1       | 17                   | 0x11                     | Device Control 1, often used for flow control in communication. |
| DC2       | 18                   | 0x12                     | Device Control 2, used in communication protocols for flow control. |
| DC3       | 19                   | 0x13                     | Device Control 3, another flow control signal.                |
| DC4       | 20                   | 0x14                     | Device Control 4, used for additional control or signaling.   |
| NAK       | 21                   | 0x15                     | Negative Acknowledgment, indicates data was not received correctly. |
| SYN       | 22                   | 0x16                     | Synchronous Idle, used for synchronization in communication. |
| ETB       | 23                   | 0x17                     | End of Block, marks the end of a block of data in communication. |
| CAN       | 24                   | 0x18                     | Cancel, used to cancel a previous operation or transmission.  |
| EM        | 25                   | 0x19                     | End of Medium, signals the end of the usable data area.       |
| SUB       | 26                   | 0x1A                     | Substitute, used to replace an invalid character.             |
| ESC       | 27                   | 0x1B                     | Escape, used to introduce escape sequences for special actions. |
| FS        | 28                   | 0x1C                     | File Separator, separates files in a list or transmission.    |
| GS        | 29                   | 0x1D                     | Group Separator, used to separate groups of data in a transmission. |
| RS        | 30                   | 0x1E                     | Record Separator, used to separate records in a data stream. |
| US        | 31                   | 0x1F                     | Unit Separator, used to separate units in a larger data block. |


## Printable Characters

### Space and Punctuation (32-47)

| Character | ASCII Code (Decimal) | ASCII Code (Hexadecimal) |
|-----------|----------------------|--------------------------|
| Space     | 32                   | 0x20                     |
| !         | 33                   | 0x21                     |
| "         | 34                   | 0x22                     |
| #         | 35                   | 0x23                     |
| $         | 36                   | 0x24                     |
| %         | 37                   | 0x25                     |
| &         | 38                   | 0x26                     |
| '         | 39                   | 0x27                     |
| (         | 40                   | 0x28                     |
| )         | 41                   | 0x29                     |
| *         | 42                   | 0x2A                     |
| +         | 43                   | 0x2B                     |
| ,         | 44                   | 0x2C                     |
| -         | 45                   | 0x2D                     |
| .         | 46                   | 0x2E                     |
| /         | 47                   | 0x2F                     |

### Digits (48-57)

| Character | ASCII Code (Decimal) | ASCII Code (Hexadecimal) |
|-----------|----------------------|--------------------------|
| 0         | 48                   | 0x30                     |
| 1         | 49                   | 0x31                     |
| 2         | 50                   | 0x32                     |
| 3         | 51                   | 0x33                     |
| 4         | 52                   | 0x34                     |
| 5         | 53                   | 0x35                     |
| 6         | 54                   | 0x36                     |
| 7         | 55                   | 0x37                     |
| 8         | 56                   | 0x38                     |
| 9         | 57                   | 0x39                     |

### Uppercase Letters (65-90)

| Character | ASCII Code (Decimal) | ASCII Code (Hexadecimal) |
|-----------|----------------------|--------------------------|
| A         | 65                   | 0x41                     |
| B         | 66                   | 0x42                     |
| C         | 67                   | 0x43                     |
| D         | 68                   | 0x44                     |
| E         | 69                   | 0x45                     |
| F         | 70                   | 0x46                     |
| G         | 71                   | 0x47                     |
| H         | 72                   | 0x48                     |
| I         | 73                   | 0x49                     |
| J         | 74                   | 0x4A                     |
| K         | 75                   | 0x4B                     |
| L         | 76                   | 0x4C                     |
| M         | 77                   | 0x4D                     |
| N         | 78                   | 0x4E                     |
| O         | 79                   | 0x4F                     |
| P         | 80                   | 0x50                     |
| Q         | 81                   | 0x51                     |
| R         | 82                   | 0x52                     |
| S         | 83                   | 0x53                     |
| T         | 84                   | 0x54                     |
| U         | 85                   | 0x55                     |
| V         | 86                   | 0x56                     |
| W         | 87                   | 0x57                     |
| X         | 88                   | 0x58                     |
| Y         | 89                   | 0x59                     |
| Z         | 90                   | 0x5A                     |

### Lowercase Letters (97-122)

| Character | ASCII Code (Decimal) | ASCII Code (Hexadecimal) |
|-----------|----------------------|--------------------------|
| a         | 97                   | 0x61                     |
| b         | 98                   | 0x62                     |
| c         | 99                   | 0x63                     |
| d         | 100                  | 0x64                     |
| e         | 101                  | 0x65                     |
| f         | 102                  | 0x66                     |
| g         | 103                  | 0x67                     |
| h         | 104                  | 0x68                     |
| i         | 105                  | 0x69                     |
| j         | 106                  | 0x6A                     |
| k         | 107                  | 0x6B                     |
| l         | 108                  | 0x6C                     |
| m         | 109                  | 0x6D                     |
| n         | 110                  | 0x6E                     |
| o         | 111                  | 0x6F                     |
| p         | 112                  | 0x70                     |
| q         | 113                  | 0x71                     |
| r         | 114                  | 0x72                     |
| s         | 115                  | 0x73                     |
| t         | 116                  | 0x74                     |
| u         | 117                  | 0x75                     |
| v         | 118                  | 0x76                     |
| w         | 119                  | 0x77                     |
| x         | 120                  | 0x78                     |
| y         | 121                  | 0x79                     |
| z         | 122                  | 0x7A                     |

### Special Symbols and Punctuation (123-126)

| Character | ASCII Code (Decimal) | ASCII Code (Hexadecimal) |
|-----------|----------------------|--------------------------|
| {         | 123                  | 0x7B                     |
| \|        | 124                  | 0x7C                     |
| }         | 125                  | 0x7D                     |
| ~         | 126                  | 0x7E                     |

## Extended ASCII (127)

| Character | ASCII Code (Decimal) | ASCII Code (Hexadecimal) |
|-----------|----------------------|--------------------------|
| DEL       | 127                  | 0x7F                     |

## Using ASCII Codes in C for Microcontrollers

In C programming for microcontrollers, ASCII values are often used for text processing, serial communication, or interfacing with displays. When working with ASCII characters in C, we can use both the character literals and their corresponding ASCII codes.

### Working with ASCII values:

Characters in C are treated as integers, meaning you can directly assign or manipulate their ASCII values. For instance:

```c
/* Declare a character variable and assign it the value of 'A' */
char character = 'A'; /*< 'A' is equivalent to ASCII code 65 */

/* Get the ASCII code of 'A' */
int ascii_value = character; /*< ascii_value = 65 */
```

### Example: Printing ASCII Codes

```c
#include <stdio.h>

int main() 
{
    /*< Loop through the printable ASCII codes */
    for (int i = 32; i < 127; i++) 
    {
        /*< Print the character and its ASCII value */
        printf("Character: %c, ASCII Code: %d\n", i, i);
    }

    return 0;
}
```

This example prints all printable ASCII characters from space (32) to '~' (126), along with their corresponding ASCII codes.

## Examples

### Example 1: Converting Character to ASCII Code

```c
#include <stdio.h>

int main() 
{
    char character = 'B'; /**< Character 'B' */
    
    /*< Print ASCII code of 'B' */
    printf("The ASCII value of '%c' is %d\n", character, character); /**< Output: 66 */
    
    return 0;
}
```

### Example 2: Checking if a Character is Alphabetical

```c
#include <stdio.h>

int main() 
{
    char character = '5'; /**< Character '5' */

    /*< Check if the character is an alphabet */
    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) 
    {
        printf("'%c' is an alphabetical character.\n", character); /**< Will not print */
    } 
    else 
    {
        printf("'%c' is not an alphabetical character.\n", character); /**< Output: '5' is not an alphabetical character. */
    }

    return 0;
}
```

## Common ASCII Operations

1. **Converting a Character to Uppercase**:
   - You can convert a lowercase letter to an uppercase letter using the ASCII code.

```c
char lower = 'b'; /**< Character 'b' */
char upper = lower - 32; /**< ASCII difference between lowercase and uppercase letters */
printf("Uppercase: %c\n", upper); /**< Output: 'B' */
```

2. **Checking if a Character is Digit**:
   - You can check if a character is a numeric digit by comparing its ASCII value.

```c
char character = '7'; /**< Character '7' */

/*< Check if character is a digit */
if (character >= '0' && character <= '9') 
{
    printf("'%c' is a digit.\n", character); /**< Output: '7' is a digit */
}
```

3. **Printing the ASCII Table**:
   - To print the full ASCII table of characters from 0 to 127:

```c
#include <stdio.h>

int main() 
{
    for (int i = 0; i <= 127; i++) 
    {
        printf("ASCII Code: %d, Character: %c\n", i, i);
    }

    return 0;
}
```

4. **Converting ASCII Code to Character**:

```c
int ascii_code = 72; /**< ASCII Code for 'H' */
char character = (char) ascii_code; /**< Convert ASCII code to character */
printf("Character for ASCII Code %d is '%c'\n", ascii_code, character); /**< Output: 'H' */
```

# Escape Sequences in C for Microcontrollers

This document explains the use of escape sequences in C programming for microcontrollers. Escape sequences are used to represent special characters that cannot be directly written in a string or character literal. The document covers what escape sequences are, how to use them, and practical examples for microcontroller development.

## What are Escape Sequences?

Escape sequences are combinations of characters that are used to represent certain special characters within strings or character literals. These sequences start with a backslash (`\`) followed by one or more characters to signify a specific function or symbol.

For example, `\n` represents a newline character, and `\t` represents a tab. These sequences are often used when working with strings, especially when sending data over serial communication (like UART) or working with formatted text output.

### Common Escape Sequences

| Escape Sequence | Description                        |
|-----------------|------------------------------------|
| **\n**          | Newline (Line feed)                |
| **\t**          | Horizontal Tab                     |
| **\\**          | Backslash                          |
| **\'**          | Single quote                       |
| **\"**          | Double quote                       |
| **\r**          | Carriage return                    |
| **\0**          | Null character (string terminator) |
| **\b**          | Backspace                          |

## Example 1: Using `\n` for Newline

```c
#include <stdio.h>

int main() 
{
    /* Using \n to insert a newline */
    printf("Hello, World!\n");
    printf("This is a new line.\n");
    
    return 0;
}
```

**Explanation:**

- `\n` is used to insert a newline in the output. It moves the cursor to the beginning of the next line.
- This is useful when formatting output, especially when working with text data or serial communication where line breaks are required.

## Example 2: Using `\t` for Tab

```c
#include <stdio.h>

int main() {
    /* Using \t to insert a horizontal tab */
    printf("Name\tAge\n");
    printf("John\t25\n");
    printf("Alice\t30\n");
    
    return 0;
}
```

**Explanation:**

- `\t` inserts a tab character, which is often used to align text in columns. It makes the output more readable, especially when dealing with structured data.

## Example 3: Escaping Special Characters (Quotes and Backslashes)

```c
#include <stdio.h>

int main() {
    /* Using \\ to escape a backslash */
    printf("This is a backslash: \\\n");

    /* Using \' to escape a single quote */
    printf("It\'s a sunny day.\n");

    /* Using \" to escape a double quote */
    printf("She said: \"Hello!\"\n");

    return 0;
}
```

**Explanation:**

- `\\` is used to escape the backslash character, allowing it to be printed as part of the output.
- `\'` is used to escape a single quote, and `\"` is used to escape a double quote, both allowing you to include these characters within strings without causing syntax errors.

## Example 4: Using `\0` as Null Terminator

```c
#include <stdio.h>

int main() {
    /* Using \0 to terminate a string */
    char str[] = "Hello";
    printf("String: %s\n", str);
    
    /* Printing each character in the string */
    for (int i = 0; str[i] != '\0'; i++) {
        printf("Character: %c\n", str[i]);
    }
    
    return 0;
}
```

**Explanation:**

- `\0` is the null terminator that marks the end of a string in C. When you print a string or loop through its characters, the program stops when it encounters `\0`.
- This is crucial in embedded systems programming where memory and processing power are limited.

## Example 5: Using `\r` for Carriage Return

```c
#include <stdio.h>

int main() {
    /* Using \r for carriage return */
    printf("Hello, World!\rOverwritten Text");
    
    return 0;
}
```

**Explanation:**

- `\r` moves the cursor to the beginning of the current line without advancing to the next line.
- This can be used to overwrite the content of the current line, which is especially useful in creating dynamic displays (like in serial communication or when controlling LEDs on microcontrollers).

## Escape Sequences in Microcontrollers

1. **Serial Communication:** Escape sequences like `\n` (newline) and `\r` (carriage return) are often used when communicating over UART or other serial protocols. They help format and structure the transmitted data for readability.

2. **Display Control:** Microcontrollers often control LCD or LED displays, and escape sequences are used to format the text displayed on these screens. For example, `\t` can be used to format tabular data or columns of text.

3. **Memory Constraints:** Some escape sequences, like `\0` (null character), play a significant role in ensuring that strings are properly terminated in memory, which is important in embedded systems where memory is limited.

4. **Debugging and Logging:** Escape sequences like `\b` (backspace) or `\n` (newline) are useful for logging and debugging outputs. They help format the debug output in a readable manner, which is helpful when troubleshooting microcontroller behavior.


# 🌟 Support Me
If you found this repository useful:
- Subscribe to my [YouTube Channel](https://www.youtube.com/@aKaReZa75).
- Share this repository with others.
- Give this repository and my other repositories a star.
- Follow my [GitHub account](https://github.com/aKaReZa75).

# ✉️ Contact Me
Feel free to reach out to me through any of the following platforms:
- 📧 [Email: aKaReZa75@gmail.com](mailto:aKaReZa75@gmail.com)
- 🎥 [YouTube: @aKaReZa75](https://www.youtube.com/@aKaReZa75)
- 💼 [LinkedIn: @akareza75](https://www.linkedin.com/in/akareza75)