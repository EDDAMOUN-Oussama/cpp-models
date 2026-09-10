# C++ Module 01 — Memory, References, Pointers and Control Flow

> Part of the **42 Network C++ curriculum**.  
> Standard used: **C++98**

## Overview

Exploration of memory management, references, pointers to members, file streams, and object lifetime in C++98.

The main objective is to understand ownership, object lifetime, and the differences between pointers and references while avoiding memory leaks and invalid access.

## Learning Objectives

By completing this module, I developed practical understanding of:

- Stack vs heap allocation
- `new` and `delete`
- References
- Pointers
- Pointers to member functions
- File streams
- Object lifetime
- Switch statements
- Memory safety

## Project Structure

A typical module is organized as:

```text
CPP01
├── ex00
│   ├── main.cpp
│   ├── Makefile
│   ├── newZombie.cpp
│   ├── randomChump.cpp
│   ├── Zombie.cpp
│   ├── Zombie.hpp
├── ex01
│   ├── main.cpp
│   ├── Makefile
│   ├── Zombie.cpp
│   ├── Zombie.hpp
│   ├── zombieHorde.cpp
├── ex02
│   ├── main.cpp
│   ├── Makefile
├── ex03
│   ├── HumanA.cpp
│   ├── HumanA.hpp
│   ├── HumanB.cpp
│   ├── HumanB.hpp
│   ├── main.cpp
│   ├── Makefile
│   ├── Weapon.cpp
│   ├── Weapon.hpp
├── ex04
│   ├── ft_replace.cpp
│   ├── ft_replace.hpp
│   ├── main.cpp
│   ├── Makefile
├── ex05
│   ├── Harl.cpp
│   ├── Harl.hpp
│   ├── main.cpp
│   ├── Makefile
├── ex06
│   ├── Harl.cpp
│   ├── Harl.hpp
│   ├── main.cpp
│   ├── Makefile
├── README.md
```

## Compilation

Each exercise can normally be compiled independently:

```bash
cd ex01
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

- **Stack vs heap allocation** — practiced and applied through the exercises in this module.
- **`new` and `delete`** — practiced and applied through the exercises in this module.
- **References** — practiced and applied through the exercises in this module.
- **Pointers** — practiced and applied through the exercises in this module.
- **Pointers to member functions** — practiced and applied through the exercises in this module.
- **File streams** — practiced and applied through the exercises in this module.
- **Object lifetime** — practiced and applied through the exercises in this module.
- **Switch statements** — practiced and applied through the exercises in this module.
- **Memory safety** — practiced and applied through the exercises in this module.

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

- [cppreference — new expression](https://en.cppreference.com/w/cpp/language/new)
- [cppreference — References](https://en.cppreference.com/w/cpp/language/reference)
- [cppreference — Basic file streams](https://en.cppreference.com/w/cpp/io/basic_fstream)

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
