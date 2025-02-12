# 📚 Memory Classes in C

In C, variables have various storage classes that determine their **lifetime**, **scope**, and **visibility**. These storage classes influence where the variables are stored in memory and for how long they persist during the program's execution.

## 🔹 `auto` (Automatic Variables)

By default, **local variables** inside functions are of the `auto` storage class. The `auto` keyword is optional in modern C (because it's the default for local variables), but it was used explicitly in earlier versions of C.

- **Scope**: Local to the function or block in which they are defined.
- **Lifetime**: Exist only during the execution of the function or block in which they are defined.
- **Storage**: Stored on the stack.

### Example:
```c
void function() {
    auto int num = 10;  // 'auto' is optional here, the variable 'num' is automatic by default.
    printf("%d", num);
}
```

Since `auto` variables are local, they are created when the function is called and destroyed when the function finishes execution.

## 🔹 `static` (Static Variables)

The `static` keyword is used to extend the lifetime of a variable to the entire program (even if it's defined inside a function), while still keeping it within the scope of its definition.

- **Scope**: Local to the function or file in which they are defined (in case of file scope).
- **Lifetime**: Static variables persist for the entire duration of the program.
- **Storage**: Stored in a fixed location in memory, not on the stack.

### Example of Static Variable:
```c
void function() {
    static int count = 0;  // 'count' will retain its value between function calls.
    count++;
    printf("%d\n", count);
}
```

Each time `function()` is called, the variable `count` retains its previous value instead of being reinitialized.

### Static Variable at File Scope:
```c
static int fileVar = 100;  // 'fileVar' is accessible only within this file, not outside it.
```

## 🔹 `extern` (External Variables)

The `extern` keyword is used to declare variables that are defined outside of the current file or function. This is useful when you want to access global variables or functions that are defined in another source file.

- **Scope**: Global across multiple files.
- **Lifetime**: The same as the variable's lifetime (usually the entire program's execution).
- **Storage**: The variable is stored in a memory location determined by the linker.

### Example:
In file1.c:
```c
int globalVar = 5;  // A global variable
```

In file2.c:
```c
extern int globalVar;  // Declaration of globalVar defined in file1.c
void function() {
    printf("%d\n", globalVar);  // Accessing the global variable
}
```

The `extern` keyword tells the compiler that the variable `globalVar` is defined elsewhere, and its definition can be found at link time.

## 🔹 `volatile` (Volatile Variables)

The `volatile` keyword tells the compiler not to optimize the variable, as its value might change unexpectedly, typically due to external factors such as hardware or other threads.

- **Scope**: Same as the variable’s scope.
- **Lifetime**: Same as the variable's lifetime.
- **Storage**: Stored in regular memory, but the compiler is instructed to always read the variable from memory instead of using cached values.

This is commonly used for hardware registers, flags, or variables shared between an interrupt handler and the main program.

### Example:
```c
volatile int flag = 0;  // Tells the compiler not to optimize access to 'flag'

void interruptHandler() {
    flag = 1;  // Flag is set in an interrupt (it could change unexpectedly)
}

void main() {
    while (flag == 0) {
        // Wait for the interrupt to set 'flag' to 1
    }
    printf("Interrupt occurred!\n");
}
```

Without `volatile`, the compiler might optimize the check on `flag`, assuming it doesn’t change in the loop, potentially leading to incorrect behavior.

## 🔹 `register` (Register Variables)

The `register` keyword suggests to the compiler that a variable should be stored in a CPU register for faster access (if possible). This can improve performance for frequently accessed variables, although modern compilers often optimize this automatically.

- **Scope**: Local to the function.
- **Lifetime**: Same as a local variable (only during the execution of the function).
- **Storage**: Stored in a CPU register, if available.

### Example:
```c
void function() {
    register int i = 0;  // Suggests to the compiler to use a register for 'i'
    for (i = 0; i < 1000; i++) {
        // Some operation
    }
}
```

**Note:** The `register` keyword is a suggestion to the compiler, and it’s not guaranteed that the variable will be stored in a register.

## 🔹 `const` (Constant Variables)

The `const` keyword is used to declare variables that cannot be modified once they have been initialized. A constant variable’s value remains fixed throughout the program execution.

- **Scope**: Same as the variable’s scope.
- **Lifetime**: Same as the variable's lifetime.
- **Storage**: Stored in memory, but it is protected from being altered.

You can use `const` with any data type. It is commonly used to define fixed values like mathematical constants or to protect variables from being accidentally modified.

### Example:
```c
const int MAX_USERS = 100;  // MAX_USERS cannot be modified
```

- In the above example, the value of `MAX_USERS` is fixed and cannot be changed during program execution.

You can also use `const` with pointers to create **constant pointers** or **pointers to constant values**:

### Constant Pointer:
```c
int x = 10;
int * const ptr = &x;  // ptr cannot point to a different address
```

### Pointer to Constant:
```c
const int * ptr = &x;  // The value pointed to by ptr cannot be modified
```

### Constant Pointer to Constant:
```c
const int * const ptr = &x;  // Neither the pointer nor the value it points to can be modified
```

## 🔹 `local` and `global` Variables

### Local Variables:
Local variables are those that are defined inside a function or block. They are only accessible within that scope and are destroyed when the function or block finishes executing.

```c
void function() {
    int localVar = 5;  // 'localVar' is a local variable
}
```

### Global Variables:
Global variables are defined outside of all functions and are accessible throughout the entire program, including in different functions and files (using `extern`).

```c
int globalVar = 10;  // 'globalVar' is a global variable

void function() {
    printf("%d", globalVar);  // 'globalVar' can be accessed inside any function
}
```

## 🔹 Summary of Memory Classes

| Keyword   | Scope                    | Lifetime                   | Storage Type              |
|-----------|--------------------------|----------------------------|---------------------------|
| `auto`    | Local to a function/block | Function/block execution   | Stack                     |
| `static`  | Local or file scope       | Program execution          | Static memory             |
| `extern`  | Global across files       | Program execution          | Linker-resolved           |
| `volatile`| Local or global           | Program execution          | Memory                    |
| `register`| Local to a function       | Function execution         | CPU register (suggested)  |
| `const`   | Same as variable scope    | Same as variable lifetime  | Memory (constant)         |


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