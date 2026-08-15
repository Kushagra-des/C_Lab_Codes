# C Programming Lab Work

A structured collection of C programming exercises developed as part of laboratory practice. The repository progresses from basic C syntax and input/output to control flow, functions, recursion, arrays, strings, pointers, matrices, and fundamental problem-solving techniques.

## Description

This repository contains **59 C programs organized across 10 laboratory modules**.

The exercises are designed to build a strong foundation in procedural programming and core C concepts, with increasing emphasis on problem solving, memory access, arrays, strings, recursion, and pointer manipulation.

The repository serves both as a record of laboratory work and as a reference for practicing fundamental C programming concepts.

## Features

* Basic C syntax and program structure
* Standard input/output using `scanf()` and `printf()`
* Variables, constants, and data types
* Arithmetic, logical, and bitwise operators
* Conditional statements and nested conditions
* `switch` statements
* `for`, `while`, and `do-while` loops
* Pattern generation using nested loops
* Functions and modular programming
* Recursion
* Mathematical computations and series
* Number-system conversions
* One-dimensional arrays
* Two-dimensional arrays and matrices
* String manipulation
* Character frequency analysis
* Sorting and searching
* Pointers and pointer arithmetic
* Passing arrays to functions
* Basic student-grade processing
* Practical mathematical and computational problems

## Concepts Used

### Fundamentals

* Program structure
* Variables and data types
* Input/output
* Type casting
* Arithmetic operators
* Relational and logical operators
* Bitwise operators
* Mathematical functions

### Control Flow

* `if`, `else if`, and `else`
* Nested conditions
* `switch-case`
* `for` loops
* `while` loops
* `do-while` loops
* `break` and `continue`
* Basic `goto` usage

### Functions

* Function declaration and definition
* Function parameters
* Return values
* Modular problem solving
* Recursive functions

### Arrays and Strings

* One-dimensional arrays
* Two-dimensional arrays
* Array traversal
* Array merging
* Sorting
* String traversal
* String comparison
* Character frequency counting
* String manipulation

### Pointers

* Pointer declaration
* Address and dereference operators
* Passing variables by reference
* Pointer arithmetic
* Pointer-based array manipulation
* Pointers with strings
* Multi-dimensional array pointers

## Project Structure

```text
c-programming-fundamentals/
│
├── Lab1/
│   ├── Ex1
│   ├── Ex2
│   └── ...
│
├── Lab2/
├── Lab3/
├── Lab4/
├── Lab5/
├── Lab6/
├── Lab7/
├── Lab8/
├── Lab9/
├── Lab10/
└── README.md
```

The laboratories are arranged approximately from fundamental programming concepts toward more advanced C concepts such as recursion, arrays, strings, and pointers.

## Installation

### Prerequisites

Install a C compiler such as:

* GCC
* Clang
* MinGW on Windows

Verify the installation:

```bash
gcc --version
```

### Clone the Repository

```bash
git clone https://github.com/<your-username>/c-programming-fundamentals.git
cd c-programming-fundamentals
```

## How to Run

Navigate to the desired laboratory directory.

Example:

```bash
cd Lab7
```

Compile a program:

```bash
gcc Ex1.c -o ex1
```

Run it on Linux/macOS:

```bash
./ex1
```

On Windows:

```bash
ex1.exe
```

For programs using the math library, GCC may require:

```bash
gcc program.c -o program -lm
```

## Example Output

Example: swapping two numbers using pointers.

```text
Enter the First number: 10
Enter the Second number: 20

Before Swapping: s = 10, t = 20
After Swapping: s = 20, t = 10
```

Another example: merging and sorting arrays.

```text
Size of first array: 3
Elements of first array:
5 2 8

Size of second array: 3
Elements of second array:
1 7 4

Enter '1' for ascending or '2' for descending order: 1

Sorted merged array:
1 2 4 5 7 8
```

## Learning Progression

| Stage  | Main Concepts                                     |
| ------ | ------------------------------------------------- |
| Lab 1  | Basic syntax, output, input, variables            |
| Lab 2  | Operators, expressions, conversions, calculations |
| Lab 3  | Conditional statements                            |
| Lab 4  | Switch-case and nested control flow               |
| Lab 5  | Loops and numerical algorithms                    |
| Lab 6  | Nested loops and pattern generation               |
| Lab 7  | Functions and recursion                           |
| Lab 8  | Arrays, matrices, strings                         |
| Lab 9  | String processing and sorting                     |
| Lab 10 | Pointers and pointer arithmetic                   |

---

## GitHub Topics
* c
* c-programming
* c-language
* programming-fundamentals
* data-structures
* algorithms
* problem-solving
* pointers
* arrays
* strings
* recursion
college-project
