# CPP
**The objective of these modules is to introduce you to Object-Oriented Programming.**

> [!NOTE]
> This repository contains the C++ (CPP) modules completed as part of the curriculum at 42 School.
Each module consists of a series of exercises designed to reinforce and expand my knowledge of C++ programming concepts

# Index
* [Rules & Formatting](#Formatting)
* [Modules](#Modules)
* [Usage](#usage)
* [Final Grade](#grade)

## Formatting

### The Orthodox Canonical Form

    Implement the four required member functions below:
        • Default constructor
        • Copy constructor
        • Copy assignment operator
        • Destructor

``  class A final
    {
        public:
            A ();
            A (const A &a);
            A & operator = (const A &a);
            ~A ();
    };
``

### UpperCamelCase format

**Files containing class code will always be named according to the class name.**
For instance:
ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp...

### Forbidden
- *printf(), *alloc() and free()

- using namespace <ns_name>

- STL only in Modules 08 and 09. Meaning:
no Containers (vector/list/map, and so forth) and no Algorithm (<algorithm> header) until then

- No function implementation in a header file

- C++11 (and derived forms) and Boost libraries are forbidden

 ## Modules

### Module 00
**Namespaces, classes, member functions, stdio streams, initialization lists, static, const, and some other basic stuff...**
- ex00 - String manipulation and command-line argument handling
- ex01 - Classes, Object instantiation, Basic I/O, String manipulation
- ex02 - File recreation, C++ programming, Object-oriented design

### Module 01
**Memory allocation, References, Pointers to members, File streams**
- ex00 - Classes, Member Functions, Pointers, Memory Allocation (stack vs. heap), Destructors
- ex01 - Arrays of Objects, Memory Allocation (array of objects), Object Initialization
- ex02 - Pointers, References, Memory Addresses
- ex03 - Composition, Aggregation, Object Relationships, Constructors, Setters
- ex04 - File I/O, Content copy to new file, Error Handling
- ex05 - Member Functions, Pointers to Member Functions, Enumeration, Logging
- ex06 - Switch Statement, Filtering, Logging

### Module 02
**Ad-hoc polymorphism, operators overload, and canonical classes**
- ex00 - Fixed-point numbers, Orthodox Canonical Form
- ex01 - Constructors (from int and float), Member Functions (toFloat, toInt), Operator Overloading
- ex02 - Operator Overloading (Comparison, Arithmetic, Increment/Decrement), Static Member Functions (min, max)
- ex03 - Binary Space Partitioning (BSP), Fixed-point arithmetic, Triangle Point Inclusion Test

### Module 03
**Inheritance**
- ex00 - Class implementation
- ex01 - Inheritance, Constructors/Destructors Chaining, Overriding Member Functions
- ex02 - Inheritance, Constructors/Destructors Chaining, Overriding Member Functions
- ex03 - Diamond Problem, Multiple Inheritance, Constructors/Destructors Chaining, Accessing Attributes and Member Functions from Parent Classes

### Module 04
**Subtype polymorphism, abstract classes, interfaces**
- ex00 - Polymorphism, Inheritance, Virtual Functions
- ex01 - Memory Management, Deep Copy
- ex02 - Abstract Classes
- ex03 - Interfaces / Pure Abstract Classes

### Module 05
**Try/Catch and Exceptions**
- ex00 - Exception handling, class design
- ex01 - Exception handling, class design, member functions
- ex02 - Abstract classes, inheritance, polymorphism, execution logic
- ex03 - Factory method, class design, string manipulation

### Module 06
**C++ castsv** 
- ex00 - type conversion, static_cast
- ex01 - reinterpret_cast
- ex02 - dynamic_cast
  
### Module 07
 **C++ templates**
- ex00 - template functions, swap, min, max
- ex01 - iterate with template
- ex02 - template class
 
### Module 08
**Templated containers, iterators, algorithms**
- ex00 - Function templates, container manipulation, exception handling
- ex01 - std::max, std::min, std::sort exceptions, iterators
- ex02 - Iterators, template specialization

### Module 09
**STL**
- ex00 - File manipulation, std::map, time parsing
- ex01 - Reverse Polish Notation, std::stack, input parsing
- ex02 - Merge sort algorithm, std::vector, std::deque, input parsing

## Usage

1. Clone this repository:

```
git clone github.com/shoganaix/CPP

```

2. Navigate to the desired module/exercise directory

```
cd Module00/ex00
```

3. Compile and run your program:

```
make
./PROGRAM_EXECUTABLE_NAME (default [a.out] or the number of the exercise [ex00])
```

## Grade
> This project got a **100**/100 in **_42_** school

<p align="center">
<img width="194" alt="Captura" src="https://github.com/shoganaix/42PushSwap/assets/123943292/a706aec1-2095-45b3-b583-19fbcaf614c9">
</p>

<p align="center">
<sub>NO BONUSES</sub>
 </p>
