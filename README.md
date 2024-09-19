# Airgead Banking Investment Calculator

### Overview
The **Airgead Banking Investment Calculator** is a C++ program designed to help users calculate projected returns on their investments over a given number of years. The program provides two types of reports:
1. Investment growth **without monthly deposits**.
2. Investment growth **with monthly deposits**.

This project demonstrates your understanding of object-oriented programming, exception handling, and financial modeling.

---

## Features
- **User Input Validation**: Ensures valid user entries, preventing negative or invalid input values.
- **Flexible Investment Calculations**:
  - Displays the final balance and interest earned **without monthly deposits**.
  - Displays the final balance and interest earned **with monthly deposits**.
- **Clear Reporting**: Neatly formatted reports using the `iomanip` library for clarity.
- **Modular Code**: The project is divided into multiple files (header and source) with a class-based design for easier maintenance and scalability.

---

## Installation and Setup
### Requirements:
- A C++ compiler (supporting C++11 or higher)

### Steps:
1. Clone or download the project files.
2. Ensure all files are in the same directory:
   - `main.cpp`
   - `investments.h`
   - `investments.cpp`
3. Compile the project using a C++ compiler:
   ```bash
   g++ -o investment_calculator main.cpp investments.cpp
   ```
4. Run the program:
   ```bash
   ./investment_calculator
   ```

---

## Usage

### Example:
After launching the program, you’ll be prompted to enter the following:
- **Initial Deposit**: The initial investment amount.
- **Monthly Deposit**: The amount deposited each month.
- **Annual Interest Rate**: The interest rate applied annually (in percentage).
- **Number of Years**: The number of years for the investment.

### Sample Input:
```
Initial Deposit: 5000
Monthly Deposit: 200
Annual Interest Rate: 5
Number of Years: 10
```

### Sample Output (Without Monthly Deposits):
```
       BALANCE AND INTEREST WITHOUT ADDITIONAL MONTHLY DEPOSITS       
======================================================================
      Year            Year End Balance     Year End Earned Interest Rate
----------------------------------------------------------------------
         1                    5250.00                    250.00
         2                    5512.50                    262.50
         3                    5788.12                    275.62
         4                    6077.52                    289.40
         5                    6381.39                    303.87
         ...
```

### Sample Output (With Monthly Deposits):
```
         BALANCE AND INTEREST WITH ADDITIONAL MONTHLY DEPOSITS        
======================================================================
      Year            Year End Balance     Year End Earned Interest Rate
----------------------------------------------------------------------
         1                   7756.16                   556.16
         2                  10707.16                   951.00
         3                  13971.71                  1264.55
         4                  17570.44                  1598.72
         5                  21525.19                  1954.75
         ...
```

---

## Technologies Used
- **C++**: Core programming language.
- **`iostream` and `iomanip`**: For input/output and formatting.
- **OOP**: Class-based design to manage investment data and calculations.

---

## Future Enhancements
- **Graphical User Interface (GUI)**: Adding a GUI to make the application more user-friendly.
- **Data Visualization**: Displaying investment growth graphs over time.
- **File Output**: Generating detailed reports in `.txt` or `.csv` format.

---

## Credits
This project was developed as part of the CS 210 course by **JLangley**.
