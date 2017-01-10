#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    string tempString = "\"Abraham, Yohannes A.\",Employee,$120000.00,Per Annum,SPECIAL ASSISTANT TO THE PRESIDENT AND CHIEF OF STAFF FOR THE OFFICE OF PUBLIC ENGAGEMENT AND INTERGOVERNMENTAL AFFAIRS";
   // \"Batchelder, Lily L.\",Employee,$147500.00,Per Annum,\"DEPUTY ASSISTANT TO THE PRESIDENT AND DEPUTY DIRECTOR, NATIONAL ECONOMIC COUNCIL\"
  // \"Abraham, Yohannes A.\",Employee,$120000.00,Per Annum,SPECIAL ASSISTANT TO THE PRESIDENT AND CHIEF OF STAFF FOR THE OFFICE OF PUBLIC ENGAGEMENT AND INTERGOVERNMENTAL AFFAIRS
	int foundFirst = tempString.find_first_of("\"");
	int foundLast = tempString.find_first_of("\"",1);
	string name_ = tempString.substr(foundFirst + 1, foundLast-1);//complete

	tempString = tempString.substr(foundLast+2);

	int	foundStatus = tempString.find_first_of(","); // Skipping the next ,
	string status_ = tempString.substr(0,foundStatus);

	tempString = tempString.substr(foundStatus+1);

	int	foundSalary = tempString.find_first_of(",");
	string salaryStr = tempString.substr(0, foundSalary);
	salaryStr = salaryStr.erase(0,1);
	//cout<<salaryStr<<endl;
	double salary_ = atof(salaryStr.c_str( ));  // Getting rid of

	tempString = tempString.substr(foundSalary + 1);

    int	foundPayBasis = tempString.find_first_of(",");
	string payBasis_ = tempString.substr(0, foundPayBasis);

	tempString = tempString.substr(foundPayBasis + 1);
	string positionTitle_;
	if(tempString[0] == '\"'){
        int foundPositionTitle1 = tempString.find_first_of("\"");
        int foundPositionTitle2 = tempString.find_first_of("\"",1);
        positionTitle_ = tempString.substr(foundPositionTitle1, foundPositionTitle2+1);
	}else{
	int foundPositionTitle1 = tempString.find_first_of("\"");
	int foundPositionTitle2 = tempString.find_first_of("\"",1);
	positionTitle_ = tempString.substr(foundPositionTitle1+1, foundPositionTitle2-1);
	}

    cout<<"name is: "<<name_<<endl;
    cout<<"status is: "<<status_<<endl;
    cout<<"salary is: "<<salary_<<endl;
    cout<<"pay basis is: "<<payBasis_<<endl;
    cout<<"position title is: "<<positionTitle_<<endl;
    return 0;
}
