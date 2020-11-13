/*
 * DataIn.h
 *
 *  Created on: Aug 2, 2020
 *      Author: Devon C Darling
 */

#ifndef DATAIN_H_
#define DATAIN_H_

#include <vector>

using namespace std;

#include <vector>

using namespace std;

class DataInput {
public:
    DataInput();

    const vector<string> &getMUserPrompts() const;

    double getMInitialInvestAmt() const;

    void setMInitialInvestAmt(double t_initialInvestAmt);

    double getMMonthlyDep() const;

    void setMMonthlyDep(double t_monthlyDep);

    double getMAnnualInt() const;

    void setMAnnualInt(double t_annualInt);

    double getMNumYears() const;

    void setMNumYears(double t_numYears);

    void promptUser();

private:
    vector<string> m_userPrompts;

    double m_initialInvestAmt;

    double m_monthlyDep;

    double m_annualInt;

    double m_numYears;

    void printHeader();

    vector<double> inputCapture();

    bool enterCheck();
};



#endif /* DATAIN_H_ */
