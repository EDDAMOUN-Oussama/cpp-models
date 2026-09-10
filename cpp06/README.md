# C++ Module 06 — C++ Casts

> Part of the **42 Network C++ curriculum**.  
> Standard used: **C++98**

## Overview

Study of C++ casting operators, scalar conversion, serialization, and runtime type identification.

The purpose is to understand when each C++ cast is appropriate and to avoid unsafe C-style casting.

## Learning Objectives

By completing this module, I developed practical understanding of:

- `static_cast`
- `dynamic_cast`
- `reinterpret_cast`
- `const_cast`
- Scalar conversions
- Serialization
- Pointer/integer conversion
- RTTI

## Project Structure

A typical module is organized as:

```text
CPP06/
├── ex00
│   ├── main.cpp
│   ├── Makefile
│   ├── ScalarConverter.cpp
│   ├── ScalarConverter.hpp
├── ex01
│   ├── Data.hpp
│   ├── main.cpp
│   ├── Makefile
│   ├── Serializer.cpp
│   ├── Serializer.hpp
├── ex02
│   ├── A.hpp
│   ├── B.hpp
│   ├── Base.cpp
│   ├── Base.hpp
│   ├── C.hpp
│   ├── main.cpp
│   ├── Makefile
├── README.md
```

## Compilation

Each exercise can normally be compiled independently:

```bash
cd ex06
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

- **`static_cast`** — practiced and applied through the exercises in this module.
- **`dynamic_cast`** — practiced and applied through the exercises in this module.
- **`reinterpret_cast`** — practiced and applied through the exercises in this module.
- **`const_cast`** — practiced and applied through the exercises in this module.
- **Scalar conversions** — practiced and applied through the exercises in this module.
- **Serialization** — practiced and applied through the exercises in this module.
- **Pointer/integer conversion** — practiced and applied through the exercises in this module.
- **RTTI** — practiced and applied through the exercises in this module.

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

- [cppreference — Explicit conversions](https://en.cppreference.com/w/cpp/language/explicit_cast)
- [cppreference — dynamic_cast](https://en.cppreference.com/w/cpp/language/dynamic_cast)
- [cppreference — reinterpret_cast](https://en.cppreference.com/w/cpp/language/reinterpret_cast)

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
