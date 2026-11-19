# Fundamentals of C Programming Labs

Solutions to my university lab sessions on C programming fundamentals, from
basic I/O up to structs, unions and pointers. Each `.c` file is a small,
standalone program with its own `main()`.

> These are coursework exercises kept as a learning record. They are written
> as I wrote them at the time, so expect beginner-level code.

## Contents

| Folder | Topic | Examples |
| --- | --- | --- |
| [`01-basics`](01-basics) | Variables, I/O, operators, `sizeof` | Circle area, temperature conversion, salary calculation |
| [`02-conditionals/if-else`](02-conditionals/if-else) | `if` / `else if` | Leap year, grading, electricity bill, steel grade |
| [`02-conditionals/switch`](02-conditionals/switch) | `switch` statements | Vowel check, calculator, shape area, days in a month |
| [`03-loops`](03-loops) | Nested loops | Number pyramid of powers of 2 |
| [`04-functions`](04-functions) | User-defined functions | Factorial, Fibonacci, triangle area |
| [`05-arrays`](05-arrays) | 1D arrays | Min / max, average, sorting, correlation coefficient |
| [`06-2d-arrays`](06-2d-arrays) | 2D arrays / matrices | Row sums, diagonal sum, matrix addition and multiplication |
| [`07-macros`](07-macros) | Preprocessor macros | `SWAP`, `IS_EVEN`, `IS_HEX`, unit conversion |
| [`08-structs-unions-pointers`](08-structs-unions-pointers) | `struct`, `union`, pointers to structs | Student records, distance addition |
| [`practice`](practice) | Extra practice problems | NIC numbers, bank account interest |

## Building and running

### Single file (quickest)

```sh
gcc 05-arrays/Lab_08_06.c -o sort -lm
./sort
```

### All programs with CMake

The CMake project builds every file as its own executable, named after its
path (for example `05-arrays/Lab_08_06.c` becomes `05_arrays_Lab_08_06`).

```sh
cmake -S . -B build
cmake --build build
./build/05_arrays_Lab_08_06
```

In CLion, open the folder and pick a program from the run-configuration
dropdown.

## License

[MIT](LICENSE)
