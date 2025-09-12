# Simple Calculator

A basic calculator for general mathematical operations written in C++20.
Supports: addition (+), subtraction (−), multiplication (×), division (/), exponentiation (^), and the Euler’s number (e).

## Clone the Repository

```bash
git clone https://github.com/SkiFFx0/cpp_calculator
cd cpp_calculator
```

## Build (Linux)

1. Install build-essential `apt install build-essential`.
2. Compile the program:

```bash
g++ -std=c++20 main.cpp -o calculator
```

## Build (Windows natively with MinGW)

1. [Install MinGW](https://www.mingw-w64.org/downloads/) and add its `bin` folder to your system PATH.
2. Open **Command Prompt** or **PowerShell** in the project directory.
3. Compile the program:

```cmd
g++ -std=c++20 main.cpp -o calculator.exe
```

## Run

* **Linux**:

  ```bash
  ./calculator
  ```
* **Windows**:

  ```cmd
  calculator.exe
  ```

## Usage

1. On launch, answer `Yes` to perform an operation.
2. Enter the first number.
3. Enter an operator: `+`, `-`, `*`, `/`, `^`, or `e`.
    * If `e` used, only one input needed.
4. If required, enter the second number.
5. The calculator prints the result and exits.
