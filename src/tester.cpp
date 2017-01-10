#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
    string tempString = "Abraham, Yohannes A.,Employee,$120000.00,Per Annum,SPECIAL ASSISTANT TO THE PRESIDENT AND CHIEF OF STAFF FOR THE OFFICE OF PUBLIC ENGAGEMENT AND INTERGOVERNMENTAL AFFAIRS"
	int foundFirst = tempString.find_first_of("\"");
	int foundLast = tempString.find_first_of("\"",1);
	string name_ = tempString.substr(foundFirst + 1, foundLast-1);//complete

	tempString = tempString.substr(foundLast+2);

	int	foundStatus = tempString.find_first_of(","); // Skipping the next ,
	string status_ = tempString.substr(0,foundStatus-1);

	tempString = tempString.substr(foundStatus+1);

	int	foundSalary = tempString.find_first_of(",");
	string salaryStr = tempString.substr(0, foundSalary - 1);
	salaryStr = salaryStr.erase(0,1);

	double salary_ = strtod(salaryStr, nullptr);  // Getting rid of $
    cout<<name_<<endl;
    cout<<status_<<endl;
    cout<<salary_<<endl;


return 0;
}
