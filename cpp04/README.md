# C++ Module 04 — Subtype Polymorphism, Abstract Classes and Interfaces

> Part of the **42 Network C++ curriculum**.  
> Standard used: **C++98**

## Overview

Introduction to runtime polymorphism using virtual functions, abstract classes, interfaces, and deep-copy semantics.

The key goal is to design extensible class hierarchies that behave correctly through base-class pointers and references.

## Learning Objectives

By completing this module, I developed practical understanding of:

- Virtual functions
- Runtime polymorphism
- Abstract classes
- Pure virtual functions
- Interfaces
- Virtual destructors
- Deep vs shallow copy
- Dynamic dispatch

## Project Structure

A typical module is organized as:

```text
CPP04/
├── ex00
│   ├── Animal.cpp
│   ├── Animal.hpp
│   ├── Cat.cpp
│   ├── Cat.hpp
│   ├── Dog.cpp
│   ├── Dog.hpp
│   ├── main.cpp
│   ├── Makefile
│   ├── WrongAnimal.cpp
│   ├── WrongAnimal.hpp
│   ├── WrongCat.cpp
│   ├── WrongCat.hpp
├── ex01
│   ├── Animal.cpp
│   ├── Animal.hpp
│   ├── Brain.cpp
│   ├── Brain.hpp
│   ├── Cat.cpp
│   ├── Cat.hpp
│   ├── Dog.cpp
│   ├── Dog.hpp
│   ├── main.cpp
│   ├── Makefile
│   ├── WrongAnimal.cpp
│   ├── WrongAnimal.hpp
│   ├── WrongCat.cpp
│   ├── WrongCat.hpp
├── ex02
│   ├── Animal.cpp
│   ├── Animal.hpp
│   ├── Brain.cpp
│   ├── Brain.hpp
│   ├── Cat.cpp
│   ├── Cat.hpp
│   ├── Dog.cpp
│   ├── Dog.hpp
│   ├── main.cpp
│   ├── Makefile
│   ├── WrongAnimal.cpp
│   ├── WrongAnimal.hpp
│   ├── WrongCat.cpp
│   ├── WrongCat.hpp
├── ex03
│   ├── AMateria.cpp
│   ├── AMateria.hpp
│   ├── AMateria.o
│   ├── Character.cpp
│   ├── Character.hpp
│   ├── Character.o
│   ├── Cure.cpp
│   ├── Cure.hpp
│   ├── Cure.o
│   ├── Ice.cpp
│   ├── Ice.hpp
│   ├── Ice.o
│   ├── ICharacter.hpp
│   ├── IMateriaSource.hpp
│   ├── main.cpp
│   ├── Makefile
│   ├── MateriaSource.cpp
│   ├── MateriaSource.hpp
│   ├── MateriaSource.o
├── README.md
```

## Compilation

Each exercise can normally be compiled independently:

```bash
cd ex04
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

- **Virtual functions** — practiced and applied through the exercises in this module.
- **Runtime polymorphism** — practiced and applied through the exercises in this module.
- **Abstract classes** — practiced and applied through the exercises in this module.
- **Pure virtual functions** — practiced and applied through the exercises in this module.
- **Interfaces** — practiced and applied through the exercises in this module.
- **Virtual destructors** — practiced and applied through the exercises in this module.
- **Deep vs shallow copy** — practiced and applied through the exercises in this module.
- **Dynamic dispatch** — practiced and applied through the exercises in this module.

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

- [cppreference — Virtual functions](https://en.cppreference.com/w/cpp/language/virtual)
- [cppreference — Abstract classes](https://en.cppreference.com/w/cpp/language/abstract_class)
- [C++ Core Guidelines — Polymorphic classes](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rh-virtual)

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
