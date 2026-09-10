# C++ Module 05 — Exceptions and Repetition

> Part of the **42 Network C++ curriculum**.  
> Standard used: **C++98**

## Overview

Introduction to exception handling and structured class hierarchies through bureaucratic workflow exercises.

This module develops disciplined error handling and encourages clear separation between normal program flow and exceptional conditions.

## Learning Objectives

By completing this module, I developed practical understanding of:

- Exceptions
- `try`, `catch`, `throw`
- Custom exception classes
- Nested classes
- Class invariants
- Validation
- Exception-safe design

## Project Structure

A typical module is organized as:

```text
CPP05/
├── ex00
│   ├── Bureaucrat.cpp
│   ├── Bureaucrat.hpp
│   ├── main.cpp
│   ├── Makefile
├── ex01
│   ├── Bureaucrat.cpp
│   ├── Bureaucrat.hpp
│   ├── Form.cpp
│   ├── Form.hpp
│   ├── main.cpp
│   ├── Makefile
├── ex02
│   ├── AForm.cpp
│   ├── AForm.hpp
│   ├── Bureaucrat.cpp
│   ├── Bureaucrat.hpp
│   ├── main.cpp
│   ├── Makefile
│   ├── PresidentialPardonForm.cpp
│   ├── PresidentialPardonForm.hpp
│   ├── RobotomyRequestForm.cpp
│   ├── RobotomyRequestForm.hpp
│   ├── ShrubberyCreationForm.cpp
│   ├── ShrubberyCreationForm.hpp
├── ex03
│   ├── AForm.cpp
│   ├── AForm.hpp
│   ├── Bureaucrat.cpp
│   ├── Bureaucrat.hpp
│   ├── Intern.cpp
│   ├── Intern.hpp
│   ├── main.cpp
│   ├── Makefile
│   ├── PresidentialPardonForm.cpp
│   ├── PresidentialPardonForm.hpp
│   ├── RobotomyRequestForm.cpp
│   ├── RobotomyRequestForm.hpp
│   ├── ShrubberyCreationForm.cpp
│   ├── ShrubberyCreationForm.hpp
├── README.md
```

## Compilation

Each exercise can normally be compiled independently:

```bash
cd ex05
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

- **Exceptions** — practiced and applied through the exercises in this module.
- **`try`, `catch`, `throw`** — practiced and applied through the exercises in this module.
- **Custom exception classes** — practiced and applied through the exercises in this module.
- **Nested classes** — practiced and applied through the exercises in this module.
- **Class invariants** — practiced and applied through the exercises in this module.
- **Validation** — practiced and applied through the exercises in this module.
- **Exception-safe design** — practiced and applied through the exercises in this module.

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

- [cppreference — Exceptions](https://en.cppreference.com/w/cpp/language/exceptions)
- [cppreference — try block](https://en.cppreference.com/w/cpp/language/try_catch)
- [C++ Core Guidelines — Error handling](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-errors)

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
