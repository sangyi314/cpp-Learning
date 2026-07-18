# Developing C++ on Ubuntu with VS Code

> This guide explains how to write, compile, and run a simple C++ program on Ubuntu using VS Code. It is intended for beginners preparing for ROS2 and robotics development.

---

# Why Learn C++ on Ubuntu?

Most robotics software, including ROS2, MoveIt2, Navigation2, and Gazebo, is primarily developed and used on Linux.

Learning C++ directly on Ubuntu allows you to build a development workflow that will remain the same throughout your robotics journey.

The development environment looks like this:

```text
Ubuntu
    │
    ├── VS Code (Code Editor)
    ├── g++ (Compiler)
    └── Terminal (Run Commands)
```

Each tool has a different responsibility:

- **VS Code** – Write and edit your source code.
- **g++** – Compile C++ source files into executable programs.
- **Terminal** – Execute commands and run programs.

---

# Check Whether g++ Is Installed

Open a terminal and run:

```bash
g++ --version
```

If you see output similar to:

```text
g++ (Ubuntu 13.x.x)
```

then the compiler is installed correctly.

If you receive:

```text
command not found
```

install the compiler with:

```bash
sudo apt update
sudo apt install build-essential
```

Then verify the installation again:

```bash
g++ --version
```

---

# Create a Workspace

Create a new folder for your C++ practice:

```bash
mkdir cpp_learning
cd cpp_learning
```

Open the folder in VS Code:

```bash
code .
```

---

# Create Your First C++ Program

Create a file named:

```text
main.cpp
```

Copy the following code into the file:

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello Robot!" << std::endl;
    return 0;
}
```

Save the file.

---

# Compile the Program

Open the integrated terminal in VS Code (**Ctrl + `**) or use the system terminal.

Compile the source file:

```bash
g++ main.cpp -o main
```

Explanation:

- `g++` — GNU C++ compiler
- `main.cpp` — Source file
- `-o main` — Output executable named `main`

If no errors appear, the compilation is successful.

Your project directory should now look like:

```text
cpp_learning
│
├── main.cpp
└── main
```

Where:

- `main.cpp` is the source code.
- `main` is the executable program.

---

# Run the Program

Execute the program with:

```bash
./main
```

Expected output:

```text
Hello Robot!
```

Congratulations! You have successfully compiled and executed your first C++ program on Ubuntu.

---

# Complete Development Workflow

The basic C++ workflow on Linux is:

```text
Write Code
     │
     ▼
main.cpp
     │
     ▼
Compile with g++
     │
     ▼
Generate Executable
     │
     ▼
Run the Program
     │
     ▼
View the Output
```

The two commands you will use most frequently are:

```bash
g++ main.cpp -o main
./main
```

---

# Common Issues

## 1. `g++: command not found`

The compiler is not installed.

Install it with:

```bash
sudo apt update
sudo apt install build-essential
```

---

## 2. `code: command not found`

VS Code's command-line launcher is not available.

Make sure the `code` command has been added to your system PATH.

---

## 3. `Permission denied`

Do **not** run:

```bash
main
```

Instead, run:

```bash
./main
```

Linux does not search the current directory for executables by default.

---

## 4. Compilation Errors

Most compilation errors are caused by:

- Missing semicolons (`;`)
- Missing braces (`{}`)
- Typographical mistakes
- Unsaved files

Always read the **first** error message carefully, as later errors are often caused by the first one.

---

# Summary

Developing C++ applications on Ubuntu only requires three essential tools:

- **VS Code** — Write code
- **g++** — Compile code
- **Terminal** — Run programs

Remember these two commands:

```bash
g++ main.cpp -o main
./main
```

Mastering this workflow provides a solid foundation for future ROS2 and robotics development.

