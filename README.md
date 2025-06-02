# Simple Calculator in C

A basic calculator program written in C that performs addition, subtraction, multiplication, and division on two integer inputs. The result is displayed as a double for accurate decimal output, especially in division. The program also handles division by zero safely by showing an error message.

---

## Features

- Accepts two integer inputs from the user  
- Supports arithmetic operations: `+`, `-`, `*`, `/`  
- Uses `double` to display results with decimal precision  
- Checks for division by zero to avoid runtime errors  
- Demonstrates basic C programming concepts: input/output, conditionals, typecasting  

---

## Usage

1. Compile the program using GCC or any C compiler:

   ```bash
   gcc calculator.c -o calculator
   ```

2. Run the executable:

   ```bash
   ./calculator
   ```

3. Follow the on-screen prompts to input values and choose an operation.

---

## Sample Output

```
Enter the value of x: 10
Enter the value of y: 3
Enter what you want to do (+, -, *, /): /
Your answer is: 3.33
```

---

## Requirements

- C compiler (e.g., GCC)  
- Terminal or command-line interface  

---

## License

This project is open-source and free to use for learning and educational purposes.