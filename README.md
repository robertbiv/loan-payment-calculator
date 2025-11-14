# Loan Payment Calculator

A C++ console application that calculates monthly loan payments, total amount paid, and interest costs for a given loan.

## Description

This program helps users calculate important financial information about a loan by taking the loan amount, interest rate, and number of payments as input. It then computes and displays:

- Monthly payment amount
- Total amount paid back
- Total interest cost
- Monthly interest rate

## Features

- Calculates monthly payment using the standard loan amortization formula
- Displays all monetary values in currency format (2 decimal places)
- Shows interest rate as a percentage
- Provides a comprehensive summary of loan costs

## Requirements

- C++ compiler with C++11 support or later
- Standard C++ libraries:
  - `<iostream>` for input/output
  - `<cmath>` for mathematical calculations
  - `<iomanip>` for output formatting

## How to Build

### Using g++
```bash
g++ Source.cpp -o loan-calculator
```

### Using Visual Studio
Open `homework1.vcxproj` in Visual Studio and build the project.

## How to Use

1. Run the compiled executable
2. Enter the loan amount when prompted (in dollars)
3. Enter the yearly interest rate in decimal form (e.g., 0.05 for 5%)
4. Enter the number of monthly payments
5. View the calculated results

### Example

```
How much is the loan?: $10000
What is the yearly interest rate? (decimal form): 0.05
How many monthly payments do you have?: 36

Loan Amount:                      $ 10000.00
Monthly Interest Rate:                     0%
Number of Payments:                       36
Monthly Payment:                  $ 299.71
Amount Paid Back:                 $ 10789.48
Interest Paid:                    $ 789.48
```

## Formula

The program uses the standard loan payment formula:

```
M = (r * (1 + r)^n) / ((1 + r)^n - 1) * L
```

Where:
- M = Monthly payment
- L = Loan amount
- r = Monthly interest rate (yearly rate / 12)
- n = Number of payments

## Author

Robert Bennethum (rmb6287@psu.edu)

## Project Information

- **Class**: CMPSC 121
- **Project**: #19
- **Original Due Date**: September 17, 2021

## License

This project is provided as-is for educational purposes.
