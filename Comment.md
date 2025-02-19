# C Language Comments and Doxygen Format for Microcontrollers

This document provides a comprehensive guide to commenting in C, specifically tailored for microcontroller programming. It also covers how to use Doxygen for automatic documentation generation. Proper commenting and documentation are essential for code readability, maintenance, and ease of collaboration in embedded systems projects.

## 1. C Language Comments
In the C programming language, comments are used to explain the code or to temporarily disable sections of the code. Comments are divided into two types: single-line and multi-line. Here's an explanation of these two types and their specific features:

### 1.1 Single-Line Comments
Single-line comments are used for brief explanations or quick notes. These comments start with `//` and extend to the end of the line. This means that only the part after `//` is considered a comment and is ignored by the compiler.

```c
// This is a single-line comment
int x = 10;  /**< Initialize x to 10 */
```

In the example above, the comment "This is a single-line comment" is just for explanation and doesn't affect the execution of the code. The `/**< ... */` at the end of the line is a type of comment often used in documentation.

### 1.2 Multi-Line Comments
Multi-line comments are used for longer explanations or when you need to comment out blocks of code. These comments start with `/*` and end with `*/`. They can span multiple lines, and anything between these symbols is ignored by the compiler.

```c
/* This is a multi-line comment
   that spans across multiple lines.
   It is used to explain a section of the code or to temporarily disable code. */
int y = 20; /**< Initialize y to 20 */
```

Here, the section between `/*` and `*/` contains a longer explanation about a part of the code or the variable `y`.

### 1.3 Nested Comments
In C, nested comments (comments within comments) are not allowed. If you try to nest comments, it will result in an error.

```c
/* This is a comment 
/* This is a nested comment */
*/
```

This code will result in an error because the `/*` and `*/` comments cannot be nested inside each other. To avoid errors, always make sure that each comment is properly closed before starting another comment block.

> [!TIP]
To prevent errors when using comments, always ensure that each comment is properly closed. For example, if you start a multi-line comment, you must close it with `*/` before starting a new comment.

These three types of comments are useful tools for documenting and making the code more understandable and manageable in C.

## 2. Doxygen Comment Format

Doxygen is a tool used for generating documentation from comments in your source code. It extracts specially formatted comments and generates output in HTML, PDF, and other formats. Below is how to use Doxygen-style comments in C code to document functions, variables, groups, structures, and enumerations.

### 2.1 Function Documentation

To document functions using Doxygen, you begin the comment block with `/**`. Then, provide a brief description of the function, followed by detailed descriptions of the parameters and the return value.

```c
/**
 * @brief Initializes the microcontroller's peripherals.
 * 
 * This function sets up the required peripherals for the microcontroller to function properly,
 * including setting the clock, configuring GPIO pins, and enabling interrupts.
 * 
 * @param[in] config Configuration parameters for initialization.
 * @return void
 */
void init_peripherals(Peripheral_Config config) 
{
    // Initialization code here
}
```

- `@brief`: Provides a brief description of the function’s purpose.
- `@param[in]`: Describes input parameters. Use `[in]` to specify that the parameter is an input to the function.
- `@return`: Describes the return value of the function.

### 2.2 Variable Documentation

You can also document variables using Doxygen comments. This is especially useful for documenting global variables, constants, or any important variables within your code.

```c
/**
 * @brief This variable stores the system state.
 * 
 * The system state determines the current operational mode of the microcontroller.
 * Possible values include: 0 - Idle, 1 - Active, 2 - Sleep.
 */
int system_state = 0;
```

Here, the `@brief` tag provides a brief description of the variable `system_state`, explaining its role in the system and the possible values it holds.

### 2.3 Grouping Functions or Variables

If you have a group of related functions or variables, you can use `@defgroup` to define a group and `@ingroup` to associate functions or variables with that group. This helps in organizing related code elements together in the documentation.

```c
/**
 * @defgroup gpio GPIO Functions
 * @{
 */

/**
 * @brief Configures a GPIO pin as input.
 * 
 * This function configures a specific GPIO pin to operate in input mode.
 * 
 * @param[in] pin The GPIO pin number.
 */
void gpio_configure_input(int pin) 
{
    // Code to configure GPIO pin as input
}

/**
 * @brief Configures a GPIO pin as output.
 * 
 * This function configures a specific GPIO pin to operate in output mode.
 * 
 * @param[in] pin The GPIO pin number.
 */
void gpio_configure_output(int pin) 
{
    // Code to configure GPIO pin as output
}

/** @} */ // End of gpio group
```

- `@defgroup` defines the group and provides a name for it (in this case, "gpio").
- `@ingroup` associates specific functions or variables with the defined group.

### 2.4 Struct Documentation

Doxygen allows you to document structures (structs) as well. You can describe the purpose of the structure and provide explanations for each field within the structure.

```c
/**
 * @brief Structure representing a temperature sensor.
 * 
 * This structure holds the data necessary for interacting with the temperature sensor.
 */
typedef struct 
{
    /**< The sensor's I2C address */
    uint8_t address;
    
    /**< The temperature value read from the sensor */
    float temperature;
} Temperature_Sensor;
```

In this case, the `@brief` provides a description of the struct, and each field inside the struct is documented using `/**<` to explain its meaning.

### 2.5 Union Documentation

Just like structures, you can also document `unions` using Doxygen. A union allows different data types to share the same memory location. You can describe the purpose of the union and provide explanations for each of its members.

```c
/**
 * @brief Union representing a sensor reading.
 * 
 * This union can store either an integer or a floating-point value,
 * depending on the type of sensor being read.
 */
typedef union 
{
    /**< Integer value for sensor reading */
    int int_value;
    
    /**< Floating-point value for sensor reading */
    float float_value;
} Sensor_Reading;
```

#### Explanation:
- `@brief`: Provides a brief description of the union’s purpose.
- Each member of the union is documented using `/**<`, explaining what each field represents.
  - `int_value`: This could store an integer reading from a sensor.
  - `float_value`: This could store a floating-point reading from a sensor.


### 2.6 Enum Documentation

Enumerations can be documented in a similar manner. You can provide descriptions for each possible value in the enumeration.

```c
/**
 * @brief Enum for the system operational states.
 */
typedef enum 
{
    SYSTEM_IDLE = 0, /**< System is in idle mode */
    SYSTEM_ACTIVE = 1, /**< System is active */
    SYSTEM_SLEEP = 2 /**< System is in sleep mode */
} System_State;
```

- Each value in the enumeration is documented using the `/**` format, explaining its purpose and meaning within the code.

### 2.7 Doxygen Header Comments for Different File Types

#### 1. **For C Header Files (`.h`)**

At the beginning of your header file, you can add a comment block to describe the file's contents and purpose.

```c
/**
 * @file sensor.h
 * @brief Header file for sensor operations.
 * 
 * This header file defines the functions and structures for interacting with various types of sensors.
 * It includes the definitions of sensor types, initialization functions, and reading functions.
 * 
 * @author John Doe
 * @date February 19, 2025
 * @version 1.0
 */
#ifndef SENSOR_H
#define SENSOR_H

// Function and structure declarations

#endif // SENSOR_H
```

- `@file`: Describes the file name.
- `@brief`: A brief description of what the file does.
- `@author`: The author of the file.
- `@date`: The date the file was created or last modified.
- `@version`: Version of the file or module.

#### 2. **For C Source Files (`.c`)**

For C source files, you can document the file in a similar way, but focus on what the implementation does.

```c
/**
 * @file sensor.c
 * @brief Implements sensor functions.
 * 
 * This file contains the implementations of sensor initialization and reading functions.
 * It interfaces with the hardware to collect data from sensors and process it.
 * 
 * @author John Doe
 * @date February 19, 2025
 * @version 1.0
 */

#include "sensor.h"

// Function implementations
```

#### 3. **For C++ Source Files (`.cpp`)**

The format is almost the same for C++ source files, but you may want to include C++-specific features like classes.

```cpp
/**
 * @file sensor.cpp
 * @brief Implements sensor class methods.
 * 
 * This file implements the methods of the `Sensor` class, which includes functionality for
 * initializing and reading data from sensors. The class allows for easy interaction with 
 * hardware sensors in various modes.
 * 
 * @author John Doe
 * @date February 19, 2025
 * @version 1.0
 */

#include "sensor.h"

class Sensor 
{
    // Class implementation
};
```

### 2.8 Example of Full Documentation Block

Here is a more detailed example of how you might document a full file:

```c
/**
 * @file temperature_sensor.c
 * @brief Functions for reading and processing temperature sensor data.
 * 
 * This file contains the functions for initializing the temperature sensor, reading data
 * from the sensor, and processing the raw data into a temperature value. It also defines
 * helper functions for calibrating and managing sensor errors.
 * 
 * @author John Doe
 * @date February 19, 2025
 * @version 1.0
 * 
 * @note Make sure to initialize the sensor before using the read_temperature function.
 * @warning This code assumes the sensor is connected to the I2C bus.
 */
#include "temperature_sensor.h"

// Function to initialize the temperature sensor
void init_temp_sensor() 
{
    // Sensor initialization code
}

// Function to read temperature from the sensor
float read_temperature() 
{
    // Code to read temperature
    return 25.0; // Example value
}
```

### 2.9 Additional Tags

Doxygen supports additional tags for more detailed documentation, such as:
- `@note`: Used to add additional notes for users.
- `@warning`: Used to add warning messages about potential issues.
- `@see`: Used to refer to related functions, variables, or documentation.

For example:

```c
/**
 * @brief Reads the value from a sensor.
 * 
 * This function reads the current value from a specific sensor and returns it.
 * 
 * @param[in] sensor_id The ID of the sensor to read from.
 * @return The sensor value.
 * 
 * @warning Ensure that the sensor is properly initialized before calling this function.
 * @see init_sensor() to initialize the sensor.
 */
float read_sensor(int sensor_id) 
{
    // Sensor reading code here
}
```

### 2.10 General Doxygen Comment Block Format:
- `@file`: Specifies the file being documented.
- `@brief`: A brief description of the file's content or purpose.
- `@author`: The author of the file.
- `@date`: The date the file was written or last updated.
- `@version`: The version of the file or module.
- `@note`: Additional notes for the user or developer.
- `@warning`: Any warnings regarding the code or file.

## 3. Summary of Key Doxygen Tags

Here is a list of key Doxygen tags and their usage:

- `@brief`: Provides a short description of the item (function, variable, etc.).
- `@param[in]`: Describes an input parameter for a function.
- `@param[out]`: Describes an output parameter for a function.
- `@return`: Describes the return value of a function.
- `@ingroup`: Groups related functions or variables together.
- `@defgroup`: Defines a group of related functions or variables.
- `@file`: Documents the file.
- `@struct`: Describes a structure.
- `@enum`: Describes an enumeration.

### Example of Full Documentation for a Function

```c
/**
 * @brief Reads the temperature from the sensor.
 * 
 * This function reads the current temperature from the sensor and returns the value in Celsius.
 * The temperature is obtained by communicating with the sensor over the I2C bus.
 * 
 * @param[in] sensor The sensor object to read from.
 * @return The temperature in Celsius.
 */
float read_temperature(Temperature_Sensor sensor) 
{
    // Code to read temperature
    return sensor.temperature;
}
```

## Conclusion

In this guide, we've covered the importance of proper commenting in C programming, especially for microcontroller projects. By using different types of comments such as single-line, multi-line, and Doxygen-style comments, you can make your code more readable, maintainable, and easier for others to collaborate on.

Doxygen is an incredibly useful tool for automatically generating documentation from your code comments. By following the Doxygen comment format, you can document functions, variables, structures, unions, enums, and even entire files efficiently. This enhances the overall quality of the codebase and ensures that the documentation remains synchronized with the code.

Good commenting practices not only help maintain a clean and organized codebase but also make it easier for teams to manage and extend the functionality of embedded systems. By consistently applying the Doxygen format and other best practices, you ensure that your embedded system project is well-documented, easy to understand, and easier to debug, which is crucial for the success of any microcontroller-based project.

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