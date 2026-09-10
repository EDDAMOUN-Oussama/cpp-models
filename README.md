# 42 C++ Modules

<p align="center">
  A complete collection of my C++ projects from the 42 Network curriculum, covering the progression from basic object-oriented programming to templates, STL containers, parsing, and algorithmic problem solving.
</p>

---

## About This Repository

This repository contains my implementations of the **42 Network C++ Modules 00–09**.

The modules provide a progressive introduction to modern C++ concepts while deliberately using the **C++98 standard**. The curriculum starts with classes and object-oriented programming, then moves through memory management, inheritance, polymorphism, exceptions, casts, templates, STL containers, and algorithmic problem solving.

As a Master's-level Computer Science / Software Engineering student, I use this repository not only as a collection of completed exercises, but also as structured documentation of the language concepts, implementation choices, testing strategies, and algorithmic reasoning developed throughout the curriculum.

## Modules

| Module | Main Topics |
|---|---|
| [CPP00](./CPP00/) | Namespaces, classes, objects, member functions, streams, initialization |
| [CPP01](./CPP01/) | Memory allocation, references, pointers, file streams, object lifetime |
| [CPP02](./CPP02/) | Orthodox Canonical Form, operator overloading, fixed-point arithmetic |
| [CPP03](./CPP03/) | Inheritance, derived classes, multiple inheritance |
| [CPP04](./CPP04/) | Runtime polymorphism, abstract classes, interfaces, deep copies |
| [CPP05](./CPP05/) | Exceptions, validation, exception-safe class design |
| [CPP06](./CPP06/) | C++ casts, scalar conversion, serialization, RTTI |
| [CPP07](./CPP07/) | Function templates, class templates, generic programming |
| [CPP08](./CPP08/) | STL containers, iterators, algorithms, container adaptation |
| [CPP09](./CPP09/) | `std::map`, RPN, parsing, Ford–Johnson merge-insertion sort |

## Curriculum Progression

```text
CPP00  Classes & OOP
  │
CPP01  Memory & References
  │
CPP02  Canonical Form & Operators
  │
CPP03  Inheritance
  │
CPP04  Polymorphism
  │
CPP05  Exceptions
  │
CPP06  Casts
  │
CPP07  Templates
  │
CPP08  STL Containers & Iterators
  │
CPP09  STL + Algorithms + Parsing
```

## Technical Environment

The exercises are written for:

```text
Language      C++
Standard      C++98
Compiler      c++
Flags         -Wall -Wextra -Werror -std=c++98
Build system  Make
Version Ctrl  Git / GitHub
```

Typical compilation:

```bash
cd CPP00/ex00
make
./<executable>
```

Typical cleanup:

```bash
make clean
make fclean
make re
```

## Main Skills Developed

Throughout the modules, I worked on:

- Object-oriented design and encapsulation.
- Constructors, destructors, copy semantics, and assignment.
- Stack and heap memory management.
- References, pointers, and object lifetime.
- Inheritance and class hierarchies.
- Runtime polymorphism and abstract interfaces.
- Exception-based error handling.
- Explicit C++ casts and runtime type identification.
- Function and class templates.
- STL containers, iterators, and algorithms.
- Parsing and robust input validation.
- Algorithm selection and complexity analysis.
- Ford–Johnson / merge-insertion sorting.
- Writing maintainable C++98-compatible code.

## Repository Philosophy

The 42 C++ curriculum is particularly useful because it introduces language features incrementally.

Rather than treating each exercise as an isolated task, I approached the modules as a progression:

1. Understand the language mechanism.
2. Identify ownership and object-lifetime constraints.
3. Design the class or algorithm before implementing it.
4. Respect C++98 and project-specific restrictions.
5. Test normal behavior, edge cases, and failure paths.
6. Review whether the implementation is readable and maintainable.

This approach becomes especially important in later modules, where choosing the correct abstraction or STL container can be more significant than simply producing the expected output.

## Testing and Quality

Depending on the exercise, I verify:

- compilation with all mandatory warning flags;
- normal and invalid inputs;
- boundary cases;
- copy constructor / assignment behavior;
- destructor and resource cleanup;
- exception paths;
- parser robustness;
- container behavior;
- algorithm correctness;
- comparison counts and complexity where relevant.

Useful tools include:

```bash
valgrind --leak-check=full ./program
```

and compiler diagnostics with:

```bash
-Wall -Wextra -Werror
```

## Documentation

Each module contains its own README describing:

- the module objective;
- concepts covered;
- compilation and execution;
- important implementation considerations;
- testing suggestions;
- useful references and documentation.

## Resources

Primary references used while studying the modules:

- [42 Network](https://42.fr/)
- [cppreference](https://en.cppreference.com/)
- [cplusplus.com](https://cplusplus.com/)
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines/)
- [ISO C++](https://isocpp.org/)

For algorithmic topics:

- [Merge-insertion sort / Ford–Johnson algorithm](https://en.wikipedia.org/wiki/Merge-insertion_sort)
- [The Art of Computer Programming — Donald Knuth](https://www-cs-faculty.stanford.edu/~knuth/taocp.html)

## Notes for 42 Students

If you are working on these modules yourself, use this repository carefully.

Reading a finished implementation can help clarify a difficult concept, but the strongest learning comes from:

- reading the subject;
- designing your own solution;
- testing it;
- understanding why it fails;
- and only then comparing it with other approaches.

42 evaluations frequently focus on whether you can **explain your code**, not only whether it produces the expected result.

## Disclaimer

This repository is an educational portfolio and personal implementation archive.

42 project subjects and evaluation rules may evolve. Always follow the version of the official subject provided by your campus.

## Author

**Oussama EDDAMOUN**

Master's-level Computer Science / Software Engineering student and 42 Network learner.

GitHub: [EDDAMOUN-Oussama](https://github.com/EDDAMOUN-Oussama)

---

If this repository helped you understand a concept, consider giving it a ⭐.
