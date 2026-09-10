# C++ Module 03 — Inheritance

> Part of the **42 Network C++ curriculum**.  
> Standard used: **C++98**

## Overview

Study of class inheritance, constructor/destructor chaining, protected members, and behavior reuse through a hierarchy of classes.

The module demonstrates how inheritance can model related behaviors while highlighting the complexity introduced by multiple and diamond inheritance.

## Learning Objectives

By completing this module, I developed practical understanding of:

- Inheritance
- Base and derived classes
- Constructor/destructor order
- Protected members
- Method overriding
- Multiple inheritance
- Diamond inheritance

## Project Structure

A typical module is organized as:

```text
CPP03/
├── ex00
│   ├── ClapTrap
│   ├── ClapTrap.cpp
│   ├── ClapTrap.hpp
│   ├── ClapTrap.o
│   ├── main.cpp
│   ├── main.o
│   ├── Makefile
├── ex01
│   ├── ClapTrap.cpp
│   ├── ClapTrap.hpp
│   ├── main.cpp
│   ├── Makefile
│   ├── ScavTrap.cpp
│   ├── ScavTrap.hpp
├── ex02
│   ├── ClapTrap.cpp
│   ├── ClapTrap.hpp
│   ├── ClapTrap.o
│   ├── FragTrap
│   ├── FragTrap.cpp
│   ├── FragTrap.hpp
│   ├── main.cpp
│   ├── main.o
│   ├── Makefile
│   ├── ScavTrap.cpp
│   ├── ScavTrap.hpp
│   ├── ScavTrap.o
├── ex03
│   ├── ClapTrap.cpp
│   ├── ClapTrap.hpp
│   ├── DiamondTrap.cpp
│   ├── DiamondTrap.hpp
│   ├── FragTrap.cpp
│   ├── FragTrap.hpp
│   ├── main.cpp
│   ├── Makefile
│   ├── ScavTrap.cpp
│   ├── ScavTrap.hpp
├── README.md
```

## Compilation

Each exercise can normally be compiled independently:

```bash
cd ex03
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

- **Inheritance** — practiced and applied through the exercises in this module.
- **Base and derived classes** — practiced and applied through the exercises in this module.
- **Constructor/destructor order** — practiced and applied through the exercises in this module.
- **Protected members** — practiced and applied through the exercises in this module.
- **Method overriding** — practiced and applied through the exercises in this module.
- **Multiple inheritance** — practiced and applied through the exercises in this module.
- **Diamond inheritance** — practiced and applied through the exercises in this module.

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

- [cppreference — Derived classes](https://en.cppreference.com/w/cpp/language/derived_class)
- [cppreference — Constructors](https://en.cppreference.com/w/cpp/language/constructor)
- [C++ Core Guidelines — Class hierarchies](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-class)

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
