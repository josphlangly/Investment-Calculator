/*
 *  JLANGLEY PROJECT 2
 *  INVESTMENT CPP FILE
 *  CS 210
 */

#include "investments.h"
#include <iomanip>
#include <iostream>

using namespace std;

// CONSTRUCTOR SETS VALUES FOR MEMBER VARIABLES
Investment::Investment(double investment, double monthDeposit, double rate, int years) {
    this->m_initialDeposit = investment;
    this->m_monthDeposit = monthDeposit;
    this->m_interestRate = rate;
    this->m_numYears = years;
}

// PRINTS REPORTS WITHOUT MONTHLY DEPOSIT
void Investment::reportNoMonthlyDeposits() {
    cout << "       BALANCE AND INTEREST WITHOUT ADDITIONAL MONTHLY DEPOSITS       " << endl;
    cout << "======================================================================" << endl;
    cout << setw(10) << "Year"
         << setw(25) << "Year End Balance"
         << setw(35) << "Year End Earned Interest Rate" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    
    // CREATE FUNCTION SPECIFIC VARIABLES
    double t_yearEndBalance = m_initialDeposit;
    double t_interestEarned = 0.0;
    
    // LOOP TO GO THROUGH THE YEARS INPUT BY THE USER
    for (int t_currentYear = 1; t_currentYear <= m_numYears; t_currentYear++) {
        t_interestEarned = t_yearEndBalance * (m_interestRate / 100);       // INTEREST RATE NO NEW DEPOSITS
        t_yearEndBalance += t_interestEarned;
        cout << right << setw(10) << t_currentYear << fixed << setprecision(2)
                      << setw(25) << t_yearEndBalance
                      << setw(35) << t_interestEarned << endl;
    }
    cout << "----------------------------------------------------------------------" << endl << endl;
}

// PRINTS REPORT WITH MONTHLY DEPOSIT
void Investment::reportWithMonthlyDeposits() {
    cout << "         BALANCE AND INTEREST WITH ADDITIONAL MONTHLY DEPOSITS        " << endl;
    cout << "======================================================================" << endl;
    cout << setw(10) << "Year"
         << setw(25) << "Year End Balance"
         << setw(35) << "Year End Earned Interest Rate" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    
    // CREATE FUNCTION SPECIFIC VARIABLES
    double t_totalBal = m_initialDeposit;
    double t_monthBal = m_initialDeposit;
    double t_monthInt = 0.0;
    
    // LOOP TO GO THROUGH THE YEARS INPUT BY THE USER
    for (int t_currentYear = 1; t_currentYear <= m_numYears; t_currentYear++) {
        // SET INTEREST RATE TO RESET AT THE BEGINNING OF EACH YEAR
        double t_yearInt = 0.0;
        // LOOP TO GO THROUGH 12 MONTHS OF THE YEAR AND CALCULATE INTEREST MONTHLY 
        for (int t_currentMonth = 1; t_currentMonth <= 12; t_currentMonth++) {
            t_monthBal += m_monthDeposit;
            t_monthInt = t_monthBal * ( (m_interestRate / 100) / 12);       // INTEREST RATE WITH NEW DEPOSITS
            t_yearInt += t_monthInt;
            t_monthBal += t_monthInt;
        }
        // ASSIGN TOTAL BALANCE WITH THE BALANCE FROM THE MONTH LOOP
        t_totalBal = t_monthBal;
        
        // OUTPUT THE BALANCE SHEET
        cout << right << setw(10) << t_currentYear << fixed << setprecision(2)
                      << setw(25) << t_totalBal
                      << setw(35) << t_yearInt << endl;
    }
    cout << "----------------------------------------------------------------------" << endl << endl;
}
