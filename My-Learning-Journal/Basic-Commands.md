# C++ Fundamentals

With a working development environment in place, the next step is learning the core building blocks of the C++ language. Every C++ program, regardless of its complexity, is ultimately composed of the same basic elements: functions, variables, expressions, statements, and control flow.

This chapter introduces these fundamental concepts and establishes the programming habits that will be used throughout the rest of your C++ journey.

---

## The Structure of a C++ Program

Every C++ program consists of one or more source files containing functions.

Execution always begins from a special function called `main()`.

A minimal program looks like this:

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello, World!\n";
    return 0;
}
```

Although this program is small, it already demonstrates several important concepts:

* Header files provide library functionality.
* Functions organize executable code.
* Statements perform actions.
* The program starts from `main()`.
* `return 0` indicates successful execution.

Understanding this structure is essential because every C++ application follows the same basic pattern.

---

## Functions

Functions are reusable blocks of code that perform specific tasks.

Instead of writing the same logic repeatedly, developers place it inside functions and call them whenever needed.

For example:

```cpp
void greet()
{
    std::cout << "Welcome!\n";
}

int main()
{
    greet();
}
```

Functions improve:

* Code readability
* Code reuse
* Maintainability
* Modular design

As programs become larger, dividing functionality into small, well-defined functions becomes increasingly important.

---

## Statements and Expressions

A statement tells the computer to perform an action.

Examples include:

```cpp
int age = 20;

std::cout << age;

return 0;
```

An expression, on the other hand, produces a value.

Examples include:

```cpp
2 + 3

x * y

number - 1
```

Expressions are often combined into statements.

Understanding the distinction helps when reading compiler errors and learning more advanced language features.

---

## Variables

Variables allow programs to store information.

Each variable has:

* A name
* A type
* A value

Example:

```cpp
int score = 95;
```

Here:

* `int` specifies the data type.
* `score` is the variable name.
* `95` is the initial value.

Variables allow programs to process data instead of executing fixed instructions.

---

## Initialization

Modern C++ strongly encourages initializing variables when they are created.

For example:

```cpp
int age{20};
```

instead of

```cpp
int age = 20;
```

Brace initialization helps prevent several common programming mistakes, including unintended type conversions and uninitialized variables.

Leaving variables uninitialized can result in undefined behavior, making programs unpredictable and difficult to debug.

Whenever possible, initialize every variable immediately after declaring it.

---

## Basic Data Types

Every variable stores a particular type of information.

Some commonly used built-in types include:

| Type     | Description                        |
| -------- | ---------------------------------- |
| `int`    | Integer numbers                    |
| `double` | Floating-point numbers             |
| `char`   | Single characters                  |
| `bool`   | Boolean values (`true` or `false`) |

Choosing the correct data type improves program correctness, efficiency, and readability.

---

## Input and Output

Most programs interact with users through input and output.

The standard output stream is:

```cpp
std::cout
```

The standard input stream is:

```cpp
std::cin
```

Example:

```cpp
#include <iostream>

int main()
{
    int age{};

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "You entered " << age << '\n';
}
```

Learning how data flows into and out of a program is one of the first practical programming skills.

---

## Names and Naming Conventions

Choosing meaningful names makes code significantly easier to understand.

Good variable names describe their purpose.

For example:

```cpp
studentAge

totalScore

averageTemperature
```

are much clearer than

```cpp
a

b

temp
```

A few general recommendations include:

* Use descriptive names.
* Be consistent.
* Avoid abbreviations unless they are universally understood.
* Follow a consistent naming style throughout the project.

Readable code is easier to debug and maintain than clever code.

---

## Scope and Lifetime

Variables only exist within certain regions of a program.

A variable declared inside a function is normally accessible only within that function.

Example:

```cpp
void example()
{
    int value{10};
}
```

Once the function finishes executing, `value` no longer exists.

Understanding scope helps prevent naming conflicts and accidental misuse of variables.

---

## Keywords and Identifiers

Some words have predefined meanings in C++.

Examples include:

```text
int

return

if

while

class
```

These reserved words are called **keywords** and cannot be used as variable names.

Names created by programmers are called **identifiers**.

A valid identifier should:

* Begin with a letter or underscore.
* Contain only letters, numbers, and underscores.
* Not be a C++ keyword.

---

## Whitespace and Formatting

The compiler generally ignores whitespace, but humans do not.

Consistent formatting improves readability.

A common style is:

```cpp
int main()
{
    int number{10};

    std::cout << number << '\n';

    return 0;
}
```

Good formatting includes:

* Proper indentation
* Blank lines between logical sections
* Consistent brace placement
* Reasonable line lengths

Professional code emphasizes clarity over compactness.

---

## Comments

Comments explain code to other programmers.

Single-line comments:

```cpp
// Calculate the total score
```

Multi-line comments:

```cpp
/*
    This function computes
    the average value.
*/
```

Comments should explain *why* something is done rather than simply repeating what the code already says.

Overusing comments can make code harder to maintain, while clear variable and function names often eliminate the need for unnecessary comments.

---

## Debugging and Problem Solving

Programming inevitably involves mistakes.

Rather than guessing, developers use systematic debugging techniques.

Common debugging strategies include:

* Reading compiler error messages carefully.
* Testing one change at a time.
* Printing variable values during execution.
* Using a debugger to inspect program state.
* Simplifying the program to isolate the problem.

Developing debugging skills is just as important as learning language syntax.

---

## Good Programming Habits

Successful C++ programmers develop good habits early.

Some of the most important include:

* Initialize every variable.
* Compile frequently.
* Resolve compiler warnings immediately.
* Keep functions small and focused.
* Use meaningful names.
* Write readable code before optimizing it.
* Test programs with different inputs.
* Learn from compiler diagnostics instead of ignoring them.

Good habits established now will continue to benefit every future project.

---

## Summary

The first stage of learning C++ is not about memorizing syntax—it is about understanding how programs are organized and how information flows through them.

After completing this chapter, you should be able to:

* Understand the basic structure of a C++ program.
* Write and call simple functions.
* Declare and initialize variables correctly.
* Use fundamental built-in data types.
* Read input with `std::cin`.
* Display output using `std::cout`.
* Choose meaningful identifiers.
* Understand variable scope.
* Apply consistent formatting and commenting practices.
* Develop effective debugging habits.

These concepts form the foundation for every C++ program you will write. Once they become familiar, you are ready to move on to operators, control flow, and more advanced language features that build upon these core principles.
