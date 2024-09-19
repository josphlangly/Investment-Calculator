/*
 *  JLANGLEY PROJECT 2
 *  MAIN FILE
 *  CS 210
 */

#include <iostream>
#include <iomanip>
#include <string>

#include "investments.h"

using namespace std;

// FUNCTION TO ADD SPACE BETWEEN OUTPUS FOR CLEAN LOOK
void clearScreen() {
    cout << string( 50, '\n' );
}

// FUNCTION TO PRINT INITIAL HEADING
void printHeading() {
    clearScreen();
    cout << "                WELCOME TO AIRGEAD BANKING INVESTMENTS                " << endl;
    cout << "======================================================================" << endl;
    cout << "TO CALCULATE INVESTMENT PORTFOLIO WITH AND WITHOUT ADDITIONAL DEPOSITS" << endl;
    cout << "                PLEASE ENTER THE FOLLOWING INFORMATION                " << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "\t\tInitial Deposit : $ " << endl;
    cout << "\t\tMonthly Deposit : $ " << endl;
    cout << "\t\tAnnual Interest : % " << endl;
    cout << "\t\tNumber of Years :   " << endl;
    cout << "----------------------------------------------------------------------" << endl;
    system("read -p 'Press Enter to Continue . . . ' var");
    clearScreen();
}

// FUNCTION TO ALLOW USER TO INPUT DATA
void inputData(double &t_newDep, double &t_monthDep, double &t_newRate, int &t_yearTot, bool &t_userErr) {
    
    cout << "                WELCOME TO AIRGEAD BANKING INVESTMENTS                " << endl;
    cout << "======================================================================" << endl;
    cout << "TO CALCULATE INVESTMENT PORTFOLIO WITH AND WITHOUT ADDITIONAL DEPOSITS" << endl;
    cout << "                PLEASE ENTER THE FOLLOWING INFORMATION                " << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "\t\tInitial Deposit : $ ";
    
    // USE EXCEPTION TO ENSURE THAT USER INPUTS POSITIVE NUMBERS ONLY
    try {
        cin >> t_newDep;
        if (t_newDep < 0) {
            throw runtime_error("INVALID ENTRY. BALANCE CANNOT BE NEGATIVE.");      // VALUE MUST BE POSITIVE
        }
        cout << "\t\tMonthly Deposit : $ ";
        cin >> t_monthDep;
        if (t_monthDep < 0) {
            throw runtime_error("INVALID ENTRY. BALANCE CANNOT BE NEGATIVE.");      // VALUE MUST BE POSITIVE
        }
        cout << "\t\tAnnual Interest : % ";
        cin >> t_newRate;
        if (t_newRate < 0) {
            throw runtime_error("INVALID ENTRY. BALANCE CANNOT BE NEGATIVE.");      // VALUE MUST BE POSITIVE
        }
        cout << "\t\tNumber of Years :   ";
        cin >> t_yearTot;
        if (t_yearTot < 0) {
            throw runtime_error("INVALID ENTRY. BALANCE CANNOT BE NEGATIVE.");      // VALUE MUST BE POSITIVE
        }
    }
    
    // MESSAGE PRINTED IF INPUT IS NEGATIVE AND RESTARTS THE DATA INPUT
    catch (runtime_error &excpt) {
        cout << "\n\t\t";
        cout << excpt.what() << endl << endl;
        t_userErr = false;
    }
    
    t_userErr = true;
    cout << "----------------------------------------------------------------------" << endl;
    system("read -p 'Press Enter to Continue . . . ' var");
    clearScreen();
}

int main() {

    double newDep, monthDep, newRate;       // VARIABLES FOR MONEY AND PERCENTAGE
    int yearTot;                            // VARIABLE FOR YEARS OF INVESTMENT
    char quitCmd = 'c';                    // VARIABLE TO END LOOP TO ALLOW USER INPUT MULTIPLE TIMES
    bool userErr = true;                    // VARIABLE TO HANDLE ERRORS IN USER INPUT
    
    // PRINT INITIAL HEADING
    printHeading();
    
    // LOOP TO INPUT DATA AND OUTPUT INVESTMENT RETURN UNTIL USER QUITS PROGRAM
    while (quitCmd == 'c') {
        // GET DATA FOR THE INVESTMENT
        inputData(newDep, monthDep, newRate, yearTot, userErr);
        if (userErr == false) {
            continue;                       // RESTARTS WHILE LOOP TO GET NEW DATA WITHOUT ERRORS
        }
        else {
            // CREATE NEW INVESTMENT RETURN PORTFOLIO FROM USER INPUT
            auto myInvestment = Investment(newDep, monthDep, newRate, yearTot);
            // CALL INVESTMENT FUNCTION TO REPORT WITHOUT ADDITIONAL DEPOSITS
            myInvestment.reportNoMonthlyDeposits();
            // CALL INVESTMENT FUNCTION TO REPORT WITH ADDITIONAL DEPOSITS
            myInvestment.reportWithMonthlyDeposits();
        }
        
        cout << "\t\tWould you like to test a different investment?" << endl;
        cout << "\t\tPress [c] to continue\n" << "\t\tPress any other key to end the program" << endl;
        cout << "\t\tContinue or Terminate? ";
        // ALLOW USER TO INPUT PROGRAM CONTINUNE OR TERIMINATE
        cin >> quitCmd;
        if (quitCmd != 'c') {
            break;
        }
    }
    return 0;
}
