# C Loops: do-while, while, and for

This document explains the usage of the three main loop structures in C: `do-while`, `while`, and `for`. These loops are essential in microcontroller programming to execute repetitive tasks. Each loop structure serves specific purposes depending on the conditions and requirements of the task at hand.

## 1. `while` Loop

The `while` loop repeatedly executes a block of code as long as the specified condition evaluates to true.

### Syntax:
```c
while (condition) 
{
    // code block to be executed
}
```

### Explanation:
- The condition is checked before entering the loop.
- If the condition is true, the code block is executed.
- After executing the block, the condition is checked again.
- The loop continues as long as the condition remains true.
- If the condition is false initially, the code block will not execute.

### Example:
```c
#include <stdio.h>

int main() 
{
    int count = 0;

    /* Start the while loop */
    while (count < 5) 
    {
        printf("Count is: %d\n", count);
        count++;  /**< Increment the count */
    }

    return 0;
}
```

### Explanation of the Example:
- The loop starts with `count = 0`.
- The loop condition (`count < 5`) is checked before each iteration.
- The block inside the loop prints the current value of `count` and increments it.
- The loop stops when `count` reaches 5.

## 2. `do-while` Loop

The `do-while` loop is similar to the `while` loop, but the condition is checked **after** the execution of the code block. This ensures that the code block is always executed at least once.

### Syntax:
```c
do 
{
    // code block to be executed
} while (condition);
```

### Explanation:
- The code block is executed first, before checking the condition.
- After executing the block, the condition is checked.
- If the condition is true, the block is executed again.
- The loop continues until the condition becomes false.
- This loop guarantees that the block of code will always run at least once, even if the condition is false at the first check.

### Example:
```c
#include <stdio.h>

int main() 
{
    int count = 0;

    /* Start the do-while loop */
    do 
    {
        printf("Count is: %d\n", count);
        count++;  /**< Increment the count */
    } while (count < 5);

    return 0;
}
```

### Explanation of the Example:
- The `do-while` loop executes the code block at least once, regardless of the initial value of `count`.
- In this case, it will print `Count is: 0`, `Count is: 1`, and so on, until `count` reaches 5.

## 3. `for` Loop

The `for` loop is a versatile loop that allows initialization, condition checking, and increment/decrement in a single line. It is commonly used when the number of iterations is known beforehand.

### Syntax:
```c
for (initialization; condition; increment) 
{
    // code block to be executed
}
```

### Explanation:
- **Initialization**: This step is executed once, at the start of the loop.
- **Condition**: The condition is checked before each iteration. If it evaluates to true, the loop body executes.
- **Increment/Decrement**: This step executes after each iteration, typically used to update the loop variable.

### Example:
```c
#include <stdio.h>

int i = 0

int main() 
{
    /* Start the for loop */
    for (i = 0; i < 5; i++) 
    {
        printf("i is: %d\n", i);
    }

    return 0;
}
```

### Explanation of the Example:
- The loop starts with `i = 0`.
- The condition `i < 5` is checked before each iteration.
- After each iteration, `i` is incremented by 1.
- The loop continues until `i` reaches 5.

## Comparison

- **`while` loop**: The condition is checked before the first iteration. If the condition is false, the loop may not run.
- **`do-while` loop**: The code block runs at least once, and the condition is checked after the first iteration.
- **`for` loop**: Best suited when the number of iterations is known ahead of time. It combines initialization, condition checking, and increment/decrement into a single line.
   

# C Control Flow: `goto`, `break`, and `continue`

This section discusses the usage of the control flow statements `goto`, `break`, and `continue` in C programming. These statements are used to alter the normal flow of control in the program, especially useful in embedded systems where specific control is needed for efficiency or error handling.

## 1. `goto` Statement

The `goto` statement is used to transfer control to another part of the program. While it's often discouraged due to its potential to make code less readable, it can still be useful in specific situations, especially in embedded systems for handling errors or skipping over complex conditions.

### Syntax:
```c
goto label;
...
label: 
    // code block to jump to
```

### Explanation:
- The `goto` statement transfers control to the label specified.
- The label must be defined somewhere in the function.
- It is important to use `goto` sparingly, as overuse can make the code harder to maintain and understand.

### Example:
```c
#include <stdio.h>

int main() 
{
    int x = 0;

    /* Check if x is zero */
    if (x == 0) 
    {
        goto label;  /**< Jump to label if x is zero */
    }

    printf("This will not be printed.\n");

label:
    printf("Control jumped to label!\n");  /**< Code after the jump */

    return 0;
}
```

### Explanation of the Example:
- If `x` is 0, the program will jump to the `label` and print `"Control jumped to label!"`.
- The statement `"This will not be printed."` is skipped due to the `goto` statement.

## 2. `break` Statement

The `break` statement is used to exit from a loop or a `switch` statement prematurely. It immediately terminates the nearest enclosing loop or `switch`, transferring control to the next statement after the loop or `switch`.

### Syntax:
```c
break;
```

### Explanation:
- The `break` statement is commonly used inside loops to exit when a specific condition is met.
- It can also be used to exit from a `switch` statement to avoid fall-through behavior.

### Example:
```c
#include <stdio.h>

int main() 
{
    int i;

    /* For loop that will break when i equals 3 */
    for (i = 0; i < 5; i++) 
    {
        if (i == 3) 
        {
            break;  /**< Exit the loop when i equals 3 */
        }
        printf("i is: %d\n", i);
    }

    printf("Loop terminated early.\n");

    return 0;
}
```

### Explanation of the Example:
- The loop will terminate when `i` equals 3 due to the `break` statement.
- The output will print values of `i` up to 2, and then it will print `"Loop terminated early."`.

## 3. `continue` Statement

The `continue` statement is used to skip the current iteration of a loop and proceed with the next iteration. It does not exit the loop entirely, but simply skips over the remaining code in the current iteration.

### Syntax:
```c
continue;
```

### Explanation:
- When the `continue` statement is encountered inside a loop, it skips the remaining code in the current iteration and proceeds to the next iteration.
- It is commonly used to skip over certain iterations based on a condition.

### Example:
```c
#include <stdio.h>

int main() {
    int i;

    /* For loop that skips printing even numbers */
    for (i = 0; i < 5; i++) 
    {
        if (i % 2 == 0) 
        {
            continue;  /**< Skip even numbers */
        }
        printf("i is: %d\n", i);
    }

    return 0;
}
```

### Explanation of the Example:
- The loop will skip printing even values of `i` because of the `continue` statement.
- The output will print only odd numbers: `1` and `3`.

## Conclusion

- **`goto`**: Use sparingly for jumping to specific points in the program, mainly in error handling or situations where other control structures are not suitable.
- **`break`**: Ideal for prematurely exiting from loops or `switch` statements.
- **`continue`**: Best used when you want to skip over specific iterations in a loop without breaking out of it entirely.
   
   
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