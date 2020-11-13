/*
 * Calculate.h
 *
 *  Created on: Aug 2, 2020
 *      Author: Devon
 */

#ifndef CALCULATE_H_
#define CALCULATE_H_

#include <vector>
#include "DataInput.h"
#include "InvestmentInfo.h"

using namespace std;

class Calculations {

public:
    Calculations();

    InvestmentInfo calculateAnnualInvestment(DataInput& data, bool t_monthlyDep);

private:
    vector<vector<double>> annualBalWithInt(double t_openAmount, double t_depositAmount, int t_intRate, int t_years);
};


#endif /* CALCULATE_H_ */
