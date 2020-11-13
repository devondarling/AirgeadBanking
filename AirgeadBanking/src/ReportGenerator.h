/*
 * Report.h
 *
 *  Created on: Aug 2, 2020
 *      Author: Devon
 */

#ifndef REPORT_H_
#define REPORT_H_

#include <vector>
#include "DataInput.h"
#include "Calculations.h"
#include "InvestmentInfo.h"

using namespace std;

class ReportGenerator {
public:
    ReportGenerator();

    void reportGenerator(InvestmentInfo  &t_dataOne, InvestmentInfo  &dataTwo);

    bool additionalSessionCheck();

private:
    void printColHeader();

    void annualReport(InvestmentInfo  &t_data);

};




#endif /* REPORT_H_ */
