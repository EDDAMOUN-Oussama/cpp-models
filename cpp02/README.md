# C++ Module 02 — Ad-hoc Polymorphism, Operator Overloading and Orthodox Canonical Form

> Part of the **42 Network C++ curriculum**.  
> Standard used: **C++98**

## Overview

Introduction to operator overloading, fixed-point arithmetic, and the Orthodox Canonical Form in C++98.

This module emphasizes predictable object copying and assignment, and demonstrates how custom types can behave naturally with C++ operators.

## Learning Objectives

By completing this module, I developed practical understanding of:

- Orthodox Canonical Form
- Copy constructor
- Copy assignment operator
- Operator overloading
- Fixed-point representation
- Floating-point conversion
- Const-correctness

## Project Structure

A typical module is organized as:

```text
CPP02/
├── ex00
│   ├── Fixed.cpp
│   ├── Fixed.hpp
│   ├── main.cpp
│   ├── Makefile
├── ex01
│   ├── Fixed.cpp
│   ├── Fixed.hpp
│   ├── main.cpp
│   ├── Makefile
├── ex02
│   ├── Fixed.cpp
│   ├── Fixed.hpp
│   ├── main.cpp
│   ├── Makefile
├── ex03
│   ├── bsp.cpp
│   ├── Fixed.cpp
│   ├── Fixed.hpp
│   ├── main.cpp
│   ├── Makefile
│   ├── Point.cpp
│   ├── Point.hpp
├── README.md
```

## Compilation

Each exercise can normally be compiled independently:

```bash
cd ex02
make
```

Common Makefile commands:

```bash
make
make clean
make fclean
make re
```

The projects are compiled with strict flags:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Running

After compilation:

```bash
./<executable_name>
```

Use the executable name defined by the corresponding exercise Makefile.

## Key Concepts

- **Orthodox Canonical Form** — practiced and applied through the exercises in this module.
- **Copy constructor** — practiced and applied through the exercises in this module.
- **Copy assignment operator** — practiced and applied through the exercises in this module.
- **Operator overloading** — practiced and applied through the exercises in this module.
- **Fixed-point representation** — practiced and applied through the exercises in this module.
- **Floating-point conversion** — practiced and applied through the exercises in this module.
- **Const-correctness** — practiced and applied through the exercises in this module.

## What I Focused On

- Writing code compatible with **C++98**.
- Respecting the 42 subject constraints and forbidden features.
- Keeping classes small, coherent, and properly encapsulated.
- Applying const-correctness where appropriate.
- Managing object lifetime safely.
- Separating interface (`.hpp`) from implementation (`.cpp`).
- Testing edge cases rather than relying only on subject examples.
- Using the STL only where the module explicitly allows or requires it.

## Testing Strategy

My tests generally cover:

- Normal / expected input.
- Boundary values.
- Invalid input.
- Copy construction and assignment where relevant.
- Const objects and const member functions.
- Resource cleanup and destructor behavior.
- Memory errors and leaks when dynamic allocation is involved.

For memory-oriented exercises, useful tools include:

```bash
valgrind --leak-check=full ./<executable_name>
```

On macOS, equivalent checks can be performed with tools such as `leaks` or sanitizers when permitted.

## Useful Development Commands

```bash
# Compile
make

# Rebuild
make re

# Check files
find . -type f

# Search for TODO/debug output
grep -R "TODO\|DEBUG" .

# Git status
git status
```

## Resources

- [cppreference — Copy constructor](https://en.cppreference.com/w/cpp/language/copy_constructor)
- [cppreference — Copy assignment](https://en.cppreference.com/w/cpp/language/copy_assignment)
- [cppreference — Operator overloading](https://en.cppreference.com/w/cpp/language/operators)

Additional references:

- [42 Network](https://42.fr/)
- [cppreference](https://en.cppreference.com/)
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)

## Notes

This repository is intended as a record of my learning process and implementation work within the 42 curriculum.

The goal is not only to obtain a working result, but also to understand the language mechanisms, design decisions, complexity trade-offs, and failure cases behind each implementation.

## Academic Integrity

If you are currently completing the same 42 project, I strongly recommend using this repository as a **reference after attempting the exercises yourself**.

Understanding the reasoning behind the implementation is significantly more valuable than reproducing a solution.

---

**Author:** Oussama EDDAMOUN  
**Program:** Master's-level Computer Science / Software Engineering studies & 42 Network curriculum
