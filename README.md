# 🎓 CPP00 - C++ Module 00 (1337 Project)

[![1337 Badge](https://img.shields.io/badge/1337-CPP--Module--00-blue)](https://www.42network.org/)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)
![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C)

---

## 📜 Project Overview

**CPP00** is the first module in the **1337 / 42 C++ curriculum**, designed to introduce the basics of C++ programming.  
It covers syntax, compilation, namespaces, classes, member functions, I/O streams, and fundamental object-oriented principles.  

You will learn to:
- Use **namespaces** and the C++ standard library.
- Work with **I/O streams** (`std::cin`, `std::cout`, `std::cerr`).
- Create and use **classes** with public and private members.
- Define **constructors** and **destructors**.
- Use **member functions** and understand `const` correctness.
- Separate **header (.hpp)** and **source (.cpp)** files.
- Follow strict compilation flags and coding standards.

---

## 🚀 Exercises

### ✅ ex00 – Megaphone
- Write a program that converts input to **UPPERCASE**.
- If no argument is provided, print:  
  `"* LOUD AND UNBEARABLE FEEDBACK NOISE *"`

---

### ✅ ex01 – My Awesome PhoneBook
- Implement a simple **phone book** with:
  - Add contact
  - Search contact
- Store up to 8 contacts using a **fixed-size array**.
- Format output in a clean table with truncated fields.
- Demonstrates:
  - Classes
  - Encapsulation (private members, public methods)
  - Input validation

---

### ✅ ex02 – The Job Of Your Dreams
- Create a **basic class** that logs its construction and destruction.
- Understand:
  - Member initialization
  - Constructor and destructor calls
  - Object lifetime and scope

---

## 🖥️ How to Build & Run

### 1. Clone the Repository
```bash
git clone https://github.com/Mohaben-1/CPP-Module-00.git
cd CPP-Module-00
```

### 2. Compile the Program  
Each exercise has its own Makefile:
```bash
make        # Compile default target
make clean  # Remove object files
make fclean # Remove object files and executables
make re     # Recompile from scratch
```

### 3. Run the Program
Example for ex01:
```bash
./phonebook
```
---

## 📂 Repository Structure

```plaintext
|-- ex00/
|   |-- Makefile
|   |-- megaphone.cpp

|-- ex01/
|   |-- Makefile
|   |-- Contact.hpp
|   |-- Contact.cpp
|   |-- PhoneBook.hpp
|   |-- PhoneBook.cpp
|   |-- main.cpp

|-- ex02/
|   |-- Makefile
|   |-- Account.hpp
|   |-- Account.cpp
|   |-- tests.cpp

|-- README.md
```

---

````markdown
## 📖 Key Concepts

### 1️⃣ Namespaces  
Organize code and avoid naming conflicts.

```cpp
namespace MySpace {
    void hello() { std::cout << "Hello\n"; }
}
````

---

### 2️⃣ I/O Streams

Use `std::cout`, `std::cin`, `std::cerr` instead of C’s `printf`/`scanf`.

```cpp
std::string name;
std::cout << "Enter name: ";
std::cin >> name;
```

---

### 3️⃣ Classes & Encapsulation

* Define **private** attributes to hide data.
* Use **public** methods to interact with them.
* Keep class declarations in `.hpp` files and definitions in `.cpp`.

---

### 4️⃣ Constructors & Destructors

Constructor: Called when object is created.
Destructor: Called when object is destroyed.

```cpp
class Example {
public:
    Example() { std::cout << "Constructed\n"; }
    ~Example() { std::cout << "Destructed\n"; }
};
```

---

### 5️⃣ Scope & Lifetime

* Stack objects are destroyed automatically when leaving scope.
* Heap objects require manual `delete`.

---

## 🛡️ Compilation Rules

Compile with:

```bash
clang++ -Wall -Wextra -Werror -std=c++98
```

* No use of `auto`, `nullptr`, or C++11+ features unless allowed.
* Follow subject PDF for forbidden functions and style rules.

---

## 📚 References

* [cppreference.com](https://en.cppreference.com/)
* [cplusplus.com](https://cplusplus.com/)
* 42/1337 subject PDF for CPP00
* *A Tour of C++* – Bjarne Stroustrup

---

## 🛡️ License

This project is part of the 1337 curriculum. It is shared here for educational purposes and should not be used for plagiarism.

