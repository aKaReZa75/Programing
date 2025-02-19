# Pre and Post Operators, Unary & Logical Operators in C

In C programming, operators are symbols that perform operations on variables and values. The operators discussed in this document include **Pre and Post Operators**, **Unary Operators**, and **Logical Operators**, which are essential tools for manipulating data in microcontroller programming.

## 1. **Arithmetic Operators**

Arithmetic operators are essential for performing mathematical operations in C programming. These operators are used for basic arithmetic calculations, such as addition, subtraction, multiplication, and division, which are fundamental in both simple and complex computations in microcontroller programming.

### Types of Arithmetic Operators:
Arithmetic operators perform operations on **numeric types** (such as `int`, `float`, `double`) and return the result of the operation.

- **`+` (Addition Operator)**: Adds the two operands.
  - It is used to sum two values.
  
- **`-` (Subtraction Operator)**: Subtracts the right operand from the left operand.
  - It is used to calculate the difference between two values.
  
- **`*` (Multiplication Operator)**: Multiplies two operands.
  - It is used to compute the product of two values.
  
- **`/` (Division Operator)**: Divides the left operand by the right operand.
  - It is used for division; however, be mindful of integer division and floating-point division.
  
- **`%` (Modulus Operator)**: Returns the remainder when the left operand is divided by the right operand.
  - It is particularly useful for finding remainders in division, and it's often used in loops and conditional checks to determine divisibility.

### 1. **Addition (`+`)**
The addition operator adds two operands and returns their sum. It is the most common arithmetic operation used to increase a value or combine two numbers.

#### Example:
```c
int a = 10, b = 5;
int result = a + b;  // result will be 15
```

- Here, `a` and `b` are added together, so the result will be `15`.

### 2. **Subtraction (`-`)**
The subtraction operator subtracts the right operand from the left operand. It is used to calculate differences or decrease a value by a specific amount.

#### Example:
```c
int a = 10, b = 5;
int result = a - b;  // result will be 5
```

- Here, `b` is subtracted from `a`, so the result will be `5`.

### 3. **Multiplication (`*`)**
The multiplication operator multiplies two operands. It is used when you need to calculate the product of two values.

#### Example:
```c
int a = 10, b = 5;
int result = a * b;  // result will be 50
```

- Here, `a` and `b` are multiplied, so the result will be `50`.

### 4. **Division (`/`)**
The division operator divides the left operand by the right operand. This operator is often used for computing ratios, averages, or when breaking something into smaller parts.

#### Example:
```c
int a = 10, b = 3;
int result = a / b;  // result will be 3 because of integer division
```

- **Note**: In integer division, any fractional part is truncated (i.e., rounded down to the nearest integer).
  - In this case, `10 / 3` equals `3.3333`, but since `a` and `b` are integers, the fractional part is discarded, and the result is `3`.

If you need to preserve the decimal part, you should use floating-point numbers (`float` or `double`).

```c
float a = 10, b = 3;
float result = a / b;  // result will be 3.3333
```

- Here, since `a` and `b` are floating-point numbers, the result retains the decimal portion (`3.3333`).

### 5. **Modulus (`%`)**
The modulus operator returns the remainder of division between the left operand and the right operand. It is primarily used to check divisibility and for operations that need to handle remainders.

#### Example:
```c
int a = 10, b = 3;
int result = a % b;  // result will be 1 (the remainder of 10 divided by 3)
```

- Here, `10 % 3` gives the remainder of the division, which is `1` (because `10 / 3 = 3` with a remainder of `1`).

### Key Points:
- **Integer Division**: When both operands are integers, the result of division is an integer, and any fractional part is discarded.
- **Floating-Point Division**: To preserve the decimal part, at least one operand should be a floating-point type (`float` or `double`).
- **Modulus**: Useful for checking if a number is divisible by another (e.g., checking if a number is even or odd).


## 2. **Relational Operators**
Relational operators are used to compare two values or variables. They return a boolean value (`true` or `false`) based on the comparison. These operators are essential for controlling the flow of the program in conditional statements like `if`, `while`, and loops, where decisions are made based on whether two values are equal, greater than, or less than each other.

### Types of Relational Operators:
Relational operators are commonly used for comparing numbers, strings, or any other comparable data types. The result of these comparisons is either true (1) or false (0).

- **`==` (Equality Operator)**: Checks if the two operands are equal.
  - Returns `true` if both operands are equal, and `false` if they are not.
  
- **`!=` (Inequality Operator)**: Checks if the two operands are not equal.
  - Returns `true` if the operands are not equal, and `false` if they are equal.
  
- **`>` (Greater than Operator)**: Checks if the left operand is greater than the right operand.
  - Returns `true` if the left operand is greater, and `false` otherwise.
  
- **`<` (Less than Operator)**: Checks if the left operand is smaller than the right operand.
  - Returns `true` if the left operand is smaller, and `false` otherwise.

- **`>=` (Greater than or Equal to Operator)**: Checks if the left operand is greater than or equal to the right operand.
  - Returns `true` if the left operand is greater than or equal to the right, and `false` otherwise.

- **`<=` (Less than or Equal to Operator)**: Checks if the left operand is smaller than or equal to the right operand.
  - Returns `true` if the left operand is smaller than or equal to the right, and `false` otherwise.

### Examples:

#### 1. Equality Check (`==`)
This operator checks whether two values are equal.

```c
int a = 5, b = 10;
if (a == b) 
{
    // This condition is false because 5 is not equal to 10
}
```

#### 2. Inequality Check (`!=`)
This operator checks whether two values are not equal.

```c
int a = 5, b = 10;
if (a != b) 
{
    // This condition is true because 5 is not equal to 10
}
```

#### 3. Greater Than (`>`)
This operator checks if the left operand is greater than the right operand.

```c
int a = 5, b = 3;
if (a > b) 
{
    // This condition is true because 5 is greater than 3
}
```

#### 4. Less Than (`<`)
This operator checks if the left operand is smaller than the right operand.

```c
int a = 5, b = 10;
if (a < b) 
{
    // This condition is true because 5 is less than 10
}
```

#### 5. Greater Than or Equal To (`>=`)
This operator checks if the left operand is greater than or equal to the right operand.

```c
int a = 5, b = 5;
if (a >= b) 
{
    // This condition is true because 5 is equal to 5
}
```

#### 6. Less Than or Equal To (`<=`)
This operator checks if the left operand is smaller than or equal to the right operand.

```c
int a = 5, b = 10;
if (a <= b) 
{
    // This condition is true because 5 is less than or equal to 10
}
```

### Key Points:
- **Relational operators** help in **comparing two values** and make decisions based on the comparison.
- They return boolean results: **`true`** (1) if the condition is satisfied, and **`false`** (0) otherwise.
- Relational operators are often used in **`if` statements**, **loops**, and **conditional checks** for controlling the flow of the program.
- Be mindful of **data types** being compared. For instance, comparing strings or floating-point numbers may require special handling depending on the system or environment.


## 3. **Assignment Operators**

Assignment operators are used to assign values to variables. These operators are commonly used in expressions where the variable on the left side is updated based on the value of the right-hand side.

### 1. **Simple Assignment Operator `=`**

The **simple assignment operator `=`** is used to assign the value of the right-hand operand to the left-hand operand.

#### Example:
```c
int a = 5;  // Assigns the value 5 to variable a
```
- Here, the value `5` is assigned to the variable `a`. After this operation, `a` holds the value `5`.

### 2. **Compound Assignment Operator `+=`**

The **`+=` operator** adds the right-hand operand to the left-hand operand and assigns the result to the left-hand operand.

#### Example:
```c
int a = 5;
a += 3;  // Equivalent to: a = a + 3; Now, a becomes 8
```
- Here, `3` is added to the current value of `a`, which is `5`, and then the result is assigned back to `a`. After this operation, `a` becomes `8`.

### 3. **Compound Assignment Operator `-=`**

The **`-=` operator** subtracts the right-hand operand from the left-hand operand and assigns the result to the left-hand operand.

#### Example:
```c
int a = 10;
a -= 4;  // Equivalent to: a = a - 4; Now, a becomes 6
```
- Here, `4` is subtracted from the current value of `a`, which is `10`, and the result is assigned back to `a`. After this operation, `a` becomes `6`.

### 4. **Compound Assignment Operator `*=`**

The **`*=` operator** multiplies the left-hand operand by the right-hand operand and assigns the result to the left-hand operand.

#### Example:
```c
int a = 5;
a *= 2;  // Equivalent to: a = a * 2; Now, a becomes 10
```
- Here, `a` is multiplied by `2`. After this operation, `a` becomes `10`.

### 5. **Compound Assignment Operator `/=`**

The **`/=` operator** divides the left-hand operand by the right-hand operand and assigns the result to the left-hand operand.

#### Example:
```c
int a = 10;
a /= 2;  // Equivalent to: a = a / 2; Now, a becomes 5
```
- Here, `a` is divided by `2`. After this operation, `a` becomes `5`.

### 6. **Compound Assignment Operator `%=`**

The **`%=` operator** takes the modulus of the left-hand operand by the right-hand operand and assigns the result to the left-hand operand.

#### Example:
```c
int a = 10;
a %= 3;  // Equivalent to: a = a % 3; Now, a becomes 1
```
- Here, the remainder when `10` is divided by `3` is calculated, which is `1`. After this operation, `a` becomes `1`.

---

### Key Points:
- **Simple Assignment (`=`)**: Assigns the right-hand operand to the left-hand operand.
- **Compound Assignment Operators (`+=`, `-=`, `*=`, `/=`, `%=`)**: These operators combine an operation with assignment, allowing you to update the left-hand operand based on an operation with the right-hand operand.
  - **`+=`**: Adds the right operand to the left operand.
  - **`-=`**: Subtracts the right operand from the left operand.
  - **`*=`**: Multiplies the left operand by the right operand.
  - **`/=`**: Divides the left operand by the right operand.
  - **`%=`**: Assigns the remainder of the division of the left operand by the right operand.


## 4. Pre and Post Operators

### Pre-Increment and Post-Increment Operators (`++`)
The increment operators are used to increase the value of a variable by 1. However, their position determines when the increment happens during the evaluation of an expression.

- **Pre-Increment (`++variable`)**: Increments the value of the variable before using it in the expression.

#### Example:

```c
int a = 5;
int result = ++a;  // a is incremented to 6, then used in the expression
```

Here:
- `a` is first incremented to 6, and then the new value (6) is assigned to `result`.

- **Post-Increment (`variable++`)**: Uses the value of the variable first, then increments the value afterward.

#### Example:

```c
int a = 5;
int result = a++;  // result is assigned the value 5, then a is incremented to 6
```

Here:
- `a` is first used in the expression with its original value (5), and then it is incremented to 6 after the evaluation.

### Pre-Decrement and Post-Decrement Operators (`--`)
Similar to the increment operators, decrement operators decrease the value of a variable by 1. The position of the operator determines when the decrement happens during the evaluation.

- **Pre-Decrement (`--variable`)**: Decrements the value of the variable before using it in the expression.

#### Example:

```c
int a = 5;
int result = --a;  // a is decremented to 4, then used in the expression
```

- **Post-Decrement (`variable--`)**: Uses the value of the variable first, then decrements the value afterward.

#### Example:

```c
int a = 5;
int result = a--;  // result is assigned the value 5, then a is decremented to 4
```

## 5. Unary Operators

Unary operators operate on a single operand. They are used to perform operations like incrementing, decrementing, logical negation, and address retrieval. These operators are essential for manipulating data and interacting with memory in embedded systems programming.

### Types of Unary Operators:
- **Unary plus (`+`)**: Used to indicate the positive value of a variable (though not commonly needed).
- **Unary minus (`-`)**: Used to negate a value.
- **Logical NOT (`!`)**: Inverts the boolean value. If the operand is non-zero, the result is `false`, and if the operand is zero, the result is `true`.
- **Bitwise NOT (`~`)**: Inverts all the bits of a variable.
- **Address-of (`&`)**: Returns the memory address of a variable.
- **Dereference (`*`)**: Used with pointers to access the value at the memory address.

### Unary Plus (`+`)

The **Unary plus (`+`)** operator simply returns the value of the operand without changing it. It is often used to clarify that the operand is a positive number, although in most cases this is redundant because numbers are positive by default unless specified otherwise.

#### Example:

```c
int a = 5;
int result = +a;  // result will be 5, as the unary plus does not alter the value
```

In this example:
- The unary plus does not affect the value of `a`. The result will be the same value, `5`.

### Unary Minus (`-`)

The **Unary minus (`-`)** operator negates the value of the operand. It is commonly used to change the sign of a number, turning positive values into negative ones and vice versa.

#### Example:

```c
int a = 5;
int result = -a;  // result will be -5
```

In this example:
- The value of `a` is negated, so `result` becomes `-5`.

### Logical NOT (`!`)

The **Logical NOT (`!`)** operator inverts the boolean value of its operand. If the operand is a non-zero value (which represents `true`), it becomes zero (representing `false`), and if the operand is zero (representing `false`), it becomes one (representing `true`).

#### Example:

```c
int a = 5;
int result = !a;  // result will be 0, because a is non-zero
```

In this example:
- Since `a` is non-zero (5), the result becomes `0` (logical negation).

### Bitwise NOT (`~`)

The **Bitwise NOT (`~`)** operator inverts all the bits of a variable. It is often used in low-level programming, such as when manipulating bitmasks or performing binary operations.

#### Example:

```c
int a = 5;      // In binary: 0000000000000101
int result = ~a; // In binary: 1111111111111010, which is -6 in two's complement representation
```

In this example:
- The binary representation of `5` (`0000000000000101`) is inverted, resulting in `1111111111111010` (which represents `-6` in two's complement format).

### Address-of (`&`)

The **Address-of (`&`)** operator is used to retrieve the memory address of a variable. This is fundamental when working with pointers, as it allows you to reference the location in memory where a variable is stored.

#### Example:

```c
int a = 5;
int *ptr = &a;  // ptr stores the address of a
```

In this example:
- The `&a` operator returns the memory address of the variable `a`, which is then stored in the pointer `ptr`.

### Dereference (`*`)

The **Dereference (`*`)** operator is used to access the value stored at the memory address pointed to by a pointer. It allows you to manipulate the value of a variable indirectly by accessing its memory location.

#### Example:

```c
int a = 5;
int *ptr = &a;   // ptr stores the address of a
int result = *ptr; // result will be 5, as *ptr dereferences the address to access the value of a
```

In this example:
- The `*ptr` operator accesses the value stored at the memory address stored in `ptr`, which is the value of `a` (5).

### Key Points:
- **Unary plus and minus** are used for numerical negation and clarifying the sign of a value.
- **Logical NOT** is used to invert boolean values, making it useful for conditional logic.
- **Bitwise NOT** inverts the bits of a number, which is essential for low-level programming and bit manipulation.
- **Address-of and Dereference** operators are fundamental for pointer manipulation, enabling direct memory access and modification.

## 6. Logical Operators

Logical operators are used to perform logical operations on boolean values. These are typically used in conditional statements, loops, and expressions to evaluate multiple conditions.

### Types of Logical Operators:
- **Logical AND (`&&`)**: Returns true if both operands are true.
- **Logical OR (`||`)**: Returns true if at least one of the operands is true.
- **Logical NOT (`!`)**: Returns true if the operand is false.

### Logical AND (`&&`)
The logical AND operator returns true (1) if both operands are non-zero (true). If either operand is zero (false), the result is false.

#### Example:

```c
int a = 5, b = 10;
if (a > 0 && b > 0) 
{
    // This condition is true, because both a and b are greater than 0
}
```

### Logical OR (`||`)
The logical OR operator returns true (1) if at least one operand is non-zero. If both operands are zero, the result is false.

#### Example:

```c
int a = 5, b = 0;
if (a > 0 || b > 0) 
{
    // This condition is true because a is greater than 0
}
```

### Logical NOT (`!`)
The logical NOT operator is used to negate a boolean expression. If the expression is true (non-zero), it becomes false (0); if false (0), it becomes true (1).

#### Example:

```c
int a = 0;
if (!a) 
{
    // This condition is true, because a is 0 and !a becomes 1 (true)
}
```

## Conclusion

In C programming, understanding operators is crucial for performing various tasks, such as manipulating data, controlling program flow, and optimizing performance. The operators discussed in this document, including **Arithmetic Operators**, **Relational Operators**, **Assignment Operators**, **Pre and Post Operators**, **Unary Operators**, and **Logical Operators**, are fundamental tools for any C programmer, especially in embedded systems development.

- **Arithmetic Operators**: These operators are essential for basic mathematical computations, such as addition, subtraction, multiplication, division, and modulus. They form the foundation for performing calculations in embedded applications.
  
- **Relational Operators**: These operators are used to compare two values and return a boolean result (`true` or `false`), helping in decision-making processes in conditions and loops.

- **Assignment Operators**: Used to assign values to variables, these operators simplify the process of updating variable values. Compound assignment operators allow for concise expressions that perform arithmetic operations and assign the result back to the variable.

- **Pre and Post Operators**: The increment and decrement operators are used for efficiently increasing or decreasing variable values, which is particularly useful in loops and counting mechanisms.

- **Unary Operators**: These operators operate on a single operand, and they are crucial for tasks such as negating values, inverting boolean conditions, and handling pointers for memory manipulation.

- **Logical Operators**: Logical operators are essential in controlling the flow of a program based on multiple conditions. They are widely used in `if` statements, loops, and conditional checks.

By mastering these operators, C programmers can write more efficient, concise, and readable code, which is especially important in embedded systems programming, where performance and resource usage are critical. Understanding when and how to use each operator appropriately ensures that the program behaves as expected, leading to more robust and reliable applications.

Effective use of operators in embedded programming can greatly impact the overall performance, memory efficiency, and ease of debugging. Therefore, a thorough understanding of these operators is fundamental to becoming proficient in C programming, particularly for microcontroller and embedded systems development.


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