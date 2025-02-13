# Conditional Statements in C: if-else, Ternary Operator, and switch-case

This document explains the usage of the ternary operator, `if-else`, and `switch-case` statements in C programming. These structures are fundamental for controlling the flow of the program based on conditions and are widely used in embedded systems for decision making.

## 1. `if`, `else if`, and `else`

The `if`, `else if`, and `else` statements are fundamental control structures used for conditional branching. They allow the program to make decisions based on the evaluation of logical expressions. By evaluating conditions, these statements control which code block gets executed.

### Syntax:
```c
if (condition) 
{
    // code block to execute if condition is true
} 
else if (condition2) 
{
    // code block to execute if condition2 is true
} 
else 
{
    // code block to execute if no conditions are true
}
```

### Explanation:
- **`if`**: The `if` statement evaluates a condition. If the condition evaluates to true, the code inside the block is executed.
- **`else if`**: This is used to test additional conditions if the previous `if` or `else if` conditions were false.
- **`else`**: If no conditions in the `if` or `else if` statements are true, the `else` block will execute.

> [!IMPORTANT]
The order in which you write conditions matters. If multiple conditions are true, the first true condition (from top to bottom) is executed. Therefore, if you have a series of conditions, make sure they are ordered from most specific to least specific to avoid unexpected behavior.

### 1.1. `if` Statement (Basic Example)

The simplest form of the `if` statement checks a single condition and executes a block of code if the condition is true.

#### Example:
```c
#include <stdio.h>

int main() {
    int num = 7;

    /* Check if num is greater than 5 */
    if (num > 5) 
    {
        printf("Number is greater than 5.\n");
    }

    return 0;
}
```

#### Explanation:
- The condition `num > 5` evaluates to true, so the program prints `"Number is greater than 5."`.
- If the condition was false, nothing would happen, as no `else` block is present.

### 1.2. `if-else` Statement

The `if-else` statement provides an alternative path. If the `if` condition is false, the code inside the `else` block is executed.

#### Example:
```c
#include <stdio.h>

int main() {
    int num = 3;

    /* Check if num is greater than 5 */
    if (num > 5) 
    {
        printf("Number is greater than 5.\n");
    } 
    else 
    {
        printf("Number is not greater than 5.\n");
    }

    return 0;
}
```

#### Explanation:
- Since `num = 3`, the condition `num > 5` is false.
- The code inside the `else` block is executed, printing `"Number is not greater than 5."`.

### 1.3. `if-else if-else` Statement

The `if-else if-else` statement allows for more complex decision-making by checking multiple conditions sequentially. The first condition that evaluates to true will execute its associated code block, and the rest will be ignored.

#### Example:
```c
#include <stdio.h>

int main() {
    int num = 10;

    /* Check the value of num */
    if (num > 15) 
    {
        printf("Number is greater than 15.\n");
    } 
    else if (num == 10) 
    {
        printf("Number is equal to 10.\n");
    } 
    else 
    {
        printf("Number is less than 10.\n");
    }

    return 0;
}
```

#### Explanation:
- The program checks the condition `num > 15`, which is false.
- It then checks `num == 10`, which is true, so `"Number is equal to 10."` is printed.
- The `else` block is skipped because a previous condition was true.

### 1.4. Order of Conditions

When using multiple `if`, `else if`, and `else` statements, the order of conditions is important. If multiple conditions can be true, the first one that evaluates to true will be executed, and the rest will be ignored. This is why it's important to place the most specific conditions first and the least specific last.

#### Example:
```c
#include <stdio.h>

int main() {
    int num = 7;

    /* Check if num is between 5 and 10 */
    if (num > 5 && num < 10) 
    {
        printf("Number is between 5 and 10.\n");
    }
    else if (num > 0)
    {
        printf("Number is positive but not between 5 and 10.\n");
    }
    else 
    {
        printf("Number is non-positive.\n");
    }

    return 0;
}
```

#### Explanation:
- The first condition `num > 5 && num < 10` evaluates to true, so `"Number is between 5 and 10."` is printed.
- The second condition `num > 0` is skipped because the first condition is true, even though it would also be true.

### 1.5. Important Notes on Conditional Statements
- **Order of Conditions**: Always consider the order of conditions. More specific conditions should be placed at the top.
- **Short-circuit Evaluation**: In compound conditions (e.g., `condition1 && condition2`), the evaluation stops as soon as the outcome is determined. For example, if `condition1` is false in an AND (`&&`) operation, `condition2` is not even evaluated.
- **Multiple True Conditions**: When multiple conditions could be true, only the first true condition gets executed. Be mindful of this when writing `if-else if-else` statements.

## 2. Ternary Operator

The ternary operator is a shorthand for the `if-else` statement, providing a compact way to evaluate conditions. It evaluates an expression and returns one of two values depending on whether the condition is true or false.

### Syntax:
```c
condition ? value_if_true : value_if_false;
```

### Explanation:
- If the condition is true, the `value_if_true` expression is executed.
- If the condition is false, the `value_if_false` expression is executed.
- It is typically used for simple conditions where an `if-else` statement might be too verbose.

### Example:
```c
#include <stdio.h>

int main() 
{
    int x = 10, y = 5;
    int max_value;

    /* Use the ternary operator to find the maximum of x and y */
    max_value = (x > y) ? x : y;

    printf("The maximum value is: %d\n", max_value);

    return 0;
}
```

### Explanation of the Example:
- The ternary operator checks if `x` is greater than `y`. If true, `max_value` will be set to `x`, otherwise, it will be set to `y`.


## 3. `switch`-`case` Statement

The `switch` statement is used to perform multi-way branching, where an expression is compared against multiple possible values. It is more efficient than multiple `if-else` statements when checking a single variable against many possible values.

### Syntax:
```c
switch (expression) 
{
    case value1:
        // code block to execute if expression == value1
    break;
    
    case value2:
        // code block to execute if expression == value2
    break;
    ...
    default:
        // code block to execute if no case matches
}
```

### Explanation:
- The expression is evaluated once, and its value is compared with each `case`.
- If a match is found, the corresponding block of code is executed.
- The `break` statement is used to exit the `switch` block.
- If no `case` matches, the `default` block (if present) is executed.

### Example:
```c
#include <stdio.h>

int main() {
    int day = 3;

    /* Switch case to check the day of the week */
    switch (day) 
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}
```

### Explanation of the Example:
- The `switch` statement checks the value of `day` and prints `"Wednesday"` because `day` is equal to 3.
- The `break` statement ensures that once a case is matched, the program exits the `switch` block.

## Conclusion

- **Ternary Operator**: A concise way to write `if-else` statements, useful for simple conditions.
- **`if`, `else if`, and `else`**: Used for conditional branching, where multiple conditions are evaluated in sequence.
- **`switch`-`case`**: Ideal for checking a single variable against many possible values, providing an efficient way to handle multiple conditions.


## Comparison between `switch-case` and `if-else if` for Handling Resistor Values

When making decisions based on specific resistor values (e.g., 1kΩ, 10kΩ, 100kΩ), both the `switch-case` and `if-else if` constructs can be used. Here's a comparison of both approaches in terms of readability, efficiency, and use cases:

### Example Scenario: Checking the Value of a Resistor

#### Using `switch-case`

```c
#include <stdio.h>

int main() {
    int resistor_value = 10000; // Example resistor value: 10kΩ

    switch (resistor_value) 
    {
        case 1000:
            printf("The resistor value is 1kΩ\n");
        break;
        
        case 10000:
            printf("The resistor value is 10kΩ\n");
        break;
        
        case 100000:
            printf("The resistor value is 100kΩ\n");
        break;
        
        default:
            printf("Unknown resistor value\n");
    }

    return 0;
}
```

### Explanation of `switch-case`:
- The `switch-case` statement evaluates the `resistor_value` once, and matches it against the given `case` values.
- If there is a match, the corresponding code block runs, and the program exits the `switch` using the `break` statement.
- The `default` block handles values that do not match any of the defined cases.

### Using `if-else if`

```c
#include <stdio.h>

int main() {
    int resistor_value = 10000; // Example resistor value: 10kΩ

    if (resistor_value == 1000) 
    {
        printf("The resistor value is 1kΩ\n");
    } 
    else if (resistor_value == 10000) 
    {
        printf("The resistor value is 10kΩ\n");
    } 
    else if (resistor_value == 100000) 
    {
        printf("The resistor value is 100kΩ\n");
    }
    else 
    {
        printf("Unknown resistor value\n");
    }

    return 0;
}
```

### Explanation of `if-else if`:
- The `if-else if` structure evaluates each condition in sequence.
- If one condition is true, the corresponding code block executes, and the rest of the conditions are skipped.
- If no conditions match, the `else` block executes, handling the default case.

### Comparison

#### 1. **Readability**:
- **`switch-case`**: More readable when dealing with multiple possible values of a single variable (like resistor values). It clearly defines each possible case and is easier to follow when there are many conditions.
- **`if-else if`**: Slightly less readable in this case, as it requires multiple conditions to be written explicitly one after the other, which can become cumbersome as the number of conditions increases.

#### 2. **Efficiency**:
- **`switch-case`**: In many cases, the `switch-case` statement can be more efficient, especially when the number of cases is large, as it may use a jump table or binary search internally (depending on the compiler).
- **`if-else if`**: The `if-else` chain evaluates conditions sequentially, meaning each condition is checked until one evaluates to true. As a result, this can be less efficient when there are many conditions.

#### 3. **Use Cases**:
- **`switch-case`**: Best suited when you have a fixed set of known values to compare, especially for discrete values like resistor values, menu options, or fixed error codes.
- **`if-else if`**: Better suited for more complex conditions, such as ranges or logical comparisons (e.g., if a resistor value falls within a certain range).

### Conclusion:
- **`switch-case`** is the better choice for handling discrete, well-defined values like resistor values. It is more readable and can offer better performance, especially when the number of conditions is large.
- **`if-else if`** may be preferred for more complex conditions or when dealing with ranges or logical expressions.

In this particular case of checking resistor values, **`switch-case`** is recommended for better readability and efficiency.
```

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