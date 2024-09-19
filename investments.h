/*
 *  JLANGLEY PROJECT 2
 *  INVESTMENT HEADER FILE
 *  CS 210 
 */

#ifndef JLANGLEYPROJECT2_INVESTMENTS_H
#define JLANGLEYPROJECT2_INVESTMENTS_H

class Investment {
public:
    Investment(double investment, double monthDeposit, double rate, int years);
    void reportNoMonthlyDeposits();
    void reportWithMonthlyDeposits();
    
private:
    double m_initialDeposit;
    double m_monthDeposit;
    double m_interestRate;
    int m_numYears;
};

#endif /* JLANGLEYPROJECT2_INVESTMENTS_H */
