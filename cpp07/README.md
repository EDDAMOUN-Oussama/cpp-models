# C++ Module 07 — Templates

> Part of the **42 Network C++ curriculum**.  
> Standard used: **C++98**

## Overview

Introduction to function templates and class templates for writing generic, reusable C++98 code.

This module introduces generic programming and demonstrates how algorithms and containers can be written independently of concrete types.

## Learning Objectives

By completing this module, I developed practical understanding of:

- Function templates
- Class templates
- Template instantiation
- Generic programming
- Type parameters
- Const correctness
- Template compilation model

## Project Structure

A typical module is organized as:

```text
CPP07/
├── ex00
│   ├── main.cpp
│   ├── Makefile
│   ├── whatever.hpp
├── ex01
│   ├── .DS_Store
│   ├── iter.hpp
│   ├── main.cpp
│   ├── Makefile
├── ex02
│   ├── Array
│   ├── Array.hpp
│   ├── Array.tpp
│   ├── main.cpp
│   ├── main.o
│   ├── Makefile
├── README.md
```

## Compilation

Each exercise can normally be compiled independently:

```bash
cd ex07
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

- **Function templates** — practiced and applied through the exercises in this module.
- **Class templates** — practiced and applied through the exercises in this module.
- **Template instantiation** — practiced and applied through the exercises in this module.
- **Generic programming** — practiced and applied through the exercises in this module.
- **Type parameters** — practiced and applied through the exercises in this module.
- **Const correctness** — practiced and applied through the exercises in this module.
- **Template compilation model** — practiced and applied through the exercises in this module.

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

- [cppreference — Templates](https://en.cppreference.com/w/cpp/language/templates)
- [cppreference — Function templates](https://en.cppreference.com/w/cpp/language/function_template)
- [cppreference — Class templates](https://en.cppreference.com/w/cpp/language/class_template)

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
