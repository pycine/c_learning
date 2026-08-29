# 🖥️ c-learning — Learn C Step by Step

> A structured, open-source learning path for the **C programming language**, following the classic**"The C Programming Language" (2nd Edition)** by Brian W. Kernighan & Dennis M. Ritchie — the famous **K&R** book.

---

## 💡 What is this?

This repository was **created to help other people learn C**. It is not a personal learning journal or a logof my own progress — it's a ready-made curriculum that anyone can follow at their own pace.

Why C?

- Operating systems (Linux, Windows kernels), embedded devices, and countless tools are written in C.
- It teaches you how memory, pointers, and the machine **really** work.
- The K&R book is one of the best programming books ever written — short, dense, timeless.

---

## 🧭 How to Use This Repo

Every topic folder follows the same layout:

```
topic-folder/├── README.md     # short notes: what the concept is and why it matters├── example.c     # annotated example code└── exercises/    # solutions to the K&R exercises for that section
```

1. Read the corresponding section of the book.
2. Read the notes in the folder.
3. **Type out** and run the example — typing matters, don't copy-paste.
4. Do the exercises yourself first, then compare with the provided solutions.

---

## 🛠️ Setup

### Install a compiler

|OS|How|
|---|---|
|**Linux** (Debian/Ubuntu)|`sudo apt install build-essential`|
|**macOS**|`xcode-select --install`|
|**Windows**|Use [WSL](https://learn.microsoft.com/en-us/windows/wsl/install) (recommended) or [MSYS2](https://www.msys2.org/)|

Verify:

```bash
gcc --version
```

### Compile and run

```bash
gcc -Wall -Wextra -std=c99 -o program main.c./program
```

> ⚠️ Always compile with `-Wall -Wextra`. The compiler is your best teacher.

---

## 🗺️ The Learning Path

|#|Chapter|K&R Sections|What you'll learn|
|---|---|---|---|
|01|Getting Started|§1.1–1.10|First programs, variables, loops, character I/O, arrays, functions|
|02|Types, Operators & Expressions|§2.1–2.12|Data types, operators, conversions, precedence|
|03|Control Flow|§3.1–3.8|if/else, switch, loops, break/continue|
|04|Functions & Program Structure|§4.1–4.11|Headers, static, recursion, the preprocessor|
|05|Pointers & Arrays|§5.1–5.12|The heart of C — pointer arithmetic, command-line args|
|06|Structures|§6.1–6.9|structs, unions, bit-fields, linked data structures|
|07|Input & Output|§7.1–7.8|printf/scanf, file access, the stdio library|
|08|The UNIX System Interface|§8.1–8.7|File descriptors, low-level I/O, system calls|

---

## 🧪 Projects

Apply what you learn by building these classic tools:

|Project|Concepts used|
|---|---|
|file-copy|stdio, character I/O|
|word-count (`wc` clone)|counting, character classes|
|grep clone|strings, pattern matching|
|RPN calculator|stacks, parsing (book §4.3)|
|mini shell|fork/exec, UNIX interface|

---

## ✅ Progress Checklist

Fork this repo and tick the boxes as you go:

- [ ]  Chapter 1 — Getting Started
- [ ]  Chapter 2 — Types, Operators & Expressions
- [ ]  Chapter 3 — Control Flow
- [ ]  Chapter 4 — Functions & Program Structure
- [ ]  Chapter 5 — Pointers & Arrays
- [ ]  Chapter 6 — Structures
- [ ]  Chapter 7 — Input & Output
- [ ]  Chapter 8 — The UNIX System Interface
- [ ]  Projects

---

---

## 🤝 Contributing

Found a typo, a bug in an example, or a better way to explain something? Pull requests are very welcome!

## 📄 License

MIT — free to use, share, and build upon.
