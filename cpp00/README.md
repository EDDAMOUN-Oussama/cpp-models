# C++ Module 00 — Introduction to C++

> Part of the **42 Network C++ curriculum**.  
> Standard used: **C++98**

## Overview

An introduction to Object-Oriented Programming in C++98, focusing on classes, objects, member functions, namespaces, streams, initialization, and basic encapsulation.

The module establishes the transition from procedural C programming to object-oriented C++ and introduces the syntax and design principles used throughout the remaining modules.

## Learning Objectives

By completing this module, I developed practical understanding of:

- Namespaces
- Classes and objects
- Member functions
- Access specifiers
- Constructors and destructors
- Initialization lists
- Static members
- I/O streams (`std::cout`, `std::cin`)
- Basic encapsulation

## Project Structure

A typical module is organized as:

```text
CPP00
├── ex00
│   ├── Makefile
│   ├── megaphone.cpp
├── ex01
│   ├── Contact.cpp
│   ├── Contact.hpp
│   ├── main.cpp
│   ├── Makefile
│   ├── PhoneBook.cpp
│   ├── PhoneBook.hpp
├── ex02
│   ├── Account.cpp
│   ├── Account.hpp
│   ├── Makefile
│   ├── tests.cpp
├── README.md
```

## Compilation

Each exercise can normally be compiled independently:

```bash
cd ex00
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

- **Namespaces** — practiced and applied through the exercises in this module.
- **Classes and objects** — practiced and applied through the exercises in this module.
- **Member functions** — practiced and applied through the exercises in this module.
- **Access specifiers** — practiced and applied through the exercises in this module.
- **Constructors and destructors** — practiced and applied through the exercises in this module.
- **Initialization lists** — practiced and applied through the exercises in this module.
- **Static members** — practiced and applied through the exercises in this module.
- **I/O streams (`std::cout`, `std::cin`)** — practiced and applied through the exercises in this module.
- **Basic encapsulation** — practiced and applied through the exercises in this module.

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

- [cppreference — C++ language](https://en.cppreference.com/w/cpp/language)
- [cplusplus — Classes](https://cplusplus.com/doc/tutorial/classes/)
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)

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
