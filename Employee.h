#ifndef __EMPLOYEE__
#define __EMPLOYEE__

#include <string>
#include <sstream>
#include <iomanip>
#include <algorithm>

enum DATA_FIELDS
{
	NAME, STATUS, SALARY, PAY_BASIS, POSITION
};

class Employee{
	public:
		Employee();
		Employee(std::string  fileLine);

		void setField(DATA_FIELDS dataField, std::string value);

		std::string name_;
		std::string status_;
		double salary_;
		std::string payBasis_;
		std::string positionTitle_;

	friend std::ostream& operator<<(std::ostream&, const Employee&);

};

class CompareClass
{
public:
   CompareClass(DATA_FIELDS dataField, bool isAscending=true) : dataField_(dataField), isAscending_(isAscending){}
   // TODO: Part2: implement the overloaded () operator.
   bool operator() (Employee *pX, Employee *pY) {

       switch (dataField_)
   {
//extra c for g
      case NAME:
         if(isAscending_){
            return pX->name_ < pY->name_;
         }else{
         return pY->name_ < pX->name_;
         }
         break;
      case STATUS:
         if(isAscending_){
            return pX->status_ < pY->status_;
         }else{
         return pY->status_ < pX->status_;
         }
         break;
      case SALARY:
         if(isAscending_){
            return pX->salary_ < pY->salary_;
         }else{
         return pY->salary_ < pX->salary_;
         }
         break;
      case PAY_BASIS:
         if(isAscending_){
            return pX->payBasis_ < pY->payBasis_;
         }else{
         return pY->payBasis_ < pX->payBasis_;
         }
         break;
      case POSITION:
          if(isAscending_){
            return pX->positionTitle_ < pY->positionTitle_;
         }else{
         return pY->positionTitle_ < pX->positionTitle_;
         }
         break;
   }

      return true;
   }
private:
   DATA_FIELDS dataField_;
   bool isAscending_;
};

std::ostream& operator<<(std::ostream &strm, const Employee &emp);

std::string getEmployeeFileHeader();
#endif
