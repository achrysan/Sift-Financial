#include <iostream>
#include "Filter.h"

using namespace std;


Filter::Filter(vector<Employee *> *pEmpVector, DATA_FIELDS field, SELECTION_CRITERIA selectCrit, pair<string, string> dataLimit):
field_(field), firstField_(field), selectCrit_(selectCrit)
{
   // TODO: Part 3. Modify or add code to perform the filtering based on the parameters given. Even the next line!
    std::vector<Employee*> *temp(pEmpVector);

switch(field){
    case(NAME):
        switch(selectCrit){

case(IS_EQUAL):
    for (size_t i = 0; i < temp->size(); i++)
	{
    if(temp->at(i)->name_ == get<0>(dataLimit)){

     }else{
    temp->erase(temp->begin()+i);
     }
     }
        //check if they match then remove from vector if they don't. Need to check data limit.
case(BETWEEN):
    for (size_t i = 0; i < temp->size(); i++){
	    if(temp->at(i)->name_ >= get<0>(dataLimit) && temp->at(i)->name_ <= get<1>(dataLimit)){

	    }else{
	   temp->erase(temp->begin()+i);
	    }

	}

case(GREATER):
    for (size_t i = 0; i < temp->size(); i++){
     if(temp->at(i)->name_ > get<0>(dataLimit)){

     }else{
        temp->erase(temp->begin()+i);
     }
    }
case(LESS):
    for (size_t i = 0; i < temp->size(); i++){
     if(temp->at(i)->name_ < get<0>(dataLimit)){

     }else{
        temp->erase(temp->begin()+i);
     }
    }
}

    case(STATUS):
        switch(selectCrit){

case(IS_EQUAL):
    for (size_t i = 0; i < temp->size(); i++)
	{
    if(temp->at(i)->status_ == get<0>(dataLimit)){

     }else{
     temp->erase(temp->begin()+i);
     }
     }
case(BETWEEN):
    for (size_t i = 0; i < temp->size(); i++){
	    if(temp->at(i)->status_ >= get<0>(dataLimit) && temp->at(i)->status_ <= get<1>(dataLimit)){

	    }else{
	    temp->erase(temp->begin()+i);
	    }

	}
case(GREATER):
    for (size_t i = 0; i < temp->size(); i++){
     if(temp->at(i)->status_ > get<0>(dataLimit)){

     }else{
        temp->erase(temp->begin()+i);
     }
    }
case(LESS):
    for (size_t i = 0; i < temp->size(); i++){
     if(temp->at(i)->status_ < get<0>(dataLimit)){

     }else{
        temp->erase(temp->begin()+i);
     }
    }
    }

case(SALARY):
    switch(selectCrit){

case(IS_EQUAL):
    for (size_t i = 0; i < temp->size(); i++)
	{
    if(temp->at(i)->salary_ == atof((get<0>(dataLimit)).c_str( ))){

     }else{
     temp->erase(temp->begin()+i);
     }
     }
case(BETWEEN):
    for (size_t i = 0; i < temp->size(); i++){
	    if(temp->at(i)->salary_ >= atof((get<0>(dataLimit)).c_str( )) && temp->at(i)->salary_ <= atof((get<1>(dataLimit)).c_str( ))){

	    }else{
	    temp->erase(temp->begin()+i);
	    }
	}
case(GREATER):
    for (size_t i = 0; i < temp->size(); i++){
     if(temp->at(i)->salary_ > atof((get<0>(dataLimit)).c_str( ))){

     }else{
        temp->erase(temp->begin()+i);
     }
    }
case(LESS):
    for (size_t i = 0; i < temp->size(); i++){
     if(temp->at(i)->salary_ < atof((get<0>(dataLimit)).c_str( ))){

     }else{
        temp->erase(temp->begin()+i);
     }
    }
    }


case(PAY_BASIS):
    switch(selectCrit){
case(IS_EQUAL):
    for (size_t i = 0; i < temp->size(); i++)
	{
    if(temp->at(i)->payBasis_ == get<0>(dataLimit)){

     }else{
     temp->erase(temp->begin()+i);
     }
     }
case(BETWEEN):
        for (size_t i = 0; i < temp->size(); i++){
	    if(temp->at(i)->payBasis_ >= get<0>(dataLimit) && temp->at(i)->payBasis_ <= get<1>(dataLimit)){

	    }else{
	    temp->erase(temp->begin()+i);
	    }
	}
case(GREATER):
    for (size_t i = 0; i < temp->size(); i++){
     if(temp->at(i)->payBasis_ > get<0>(dataLimit)){

     }else{
        temp->erase(temp->begin()+i);
     }
    }
case(LESS):
    for (size_t i = 0; i < temp->size(); i++){
     if(temp->at(i)->payBasis_ < get<0>(dataLimit)){

     }else{
        temp->erase(temp->begin()+i);
     }
    }
    }

case(POSITION):
    switch(selectCrit){
case(IS_EQUAL):
    for (size_t i = 0; i < temp->size(); i++)
	{
    if(temp->at(i)->positionTitle_ == get<0>(dataLimit)){

     }else{
     temp->erase(temp->begin()+i);
     }
     }
case(BETWEEN):
    for (size_t i = 0; i < temp->size(); i++){
	    if(temp->at(i)->positionTitle_ >= get<0>(dataLimit) && temp->at(i)->positionTitle_ <= get<1>(dataLimit)){

	    }else{
	    temp->erase(temp->begin()+i);
	    }
	}
case(GREATER):
    for (size_t i = 0; i < temp->size(); i++){
     if(temp->at(i)->positionTitle_ > get<0>(dataLimit)){

     }else{
        temp->erase(temp->begin()+i);
     }
    }
case(LESS):
    for (size_t i = 0; i < temp->size(); i++){
     if(temp->at(i)->positionTitle_ > get<0>(dataLimit)){

     }else{
        temp->erase(temp->begin()+i);
     }
    }

}
}
pEmpVector_ = temp;
}
/*
pEmpVector_ = pEmpVector;

switch(field){
    case(NAME):
        switch(selectCrit){

case(IS_EQUAL):
    for (size_t i = 0; i < pEmpVector->size(); i++)
	{
    if(pEmpVector->at(i)->name_ == get<0>(dataLimit)){

     }else{
     pEmpVector->erase(pEmpVector->begin()+i);
     }
     }
        //check if they match then remove from vector if they don't. Need to check data limit.
case(BETWEEN):
    for (size_t i = 0; i < pEmpVector->size(); i++){
	    if(pEmpVector->at(i)->name_ >= get<0>(dataLimit) && pEmpVector->at(i)->name_ <= get<1>(dataLimit)){

	    }else{
	    pEmpVector->erase(pEmpVector->begin()+i);
	    }

	}

case(GREATER):
    for (size_t i = 0; i < pEmpVector->size(); i++){
     if(pEmpVector->at(i)->name_ > get<0>(dataLimit)){

     }else{
        pEmpVector->erase(pEmpVector->begin()+i);
     }
    }
case(LESS):
    for (size_t i = 0; i < pEmpVector->size(); i++){
     if(pEmpVector->at(i)->name_ < get<0>(dataLimit)){

     }else{
        pEmpVector->erase(pEmpVector->begin()+i);
     }
    }
}

    case(STATUS):
        switch(selectCrit){

case(IS_EQUAL):
    for (size_t i = 0; i < pEmpVector->size(); i++)
	{
    if(pEmpVector->at(i)->status_ == get<0>(dataLimit)){

     }else{
     pEmpVector->erase(pEmpVector->begin()+i);
     }
     }
case(BETWEEN):
    for (size_t i = 0; i < pEmpVector->size(); i++){
	    if(pEmpVector->at(i)->status_ >= get<0>(dataLimit) && pEmpVector->at(i)->status_ <= get<1>(dataLimit)){

	    }else{
	    pEmpVector->erase(pEmpVector->begin()+i);
	    }

	}
case(GREATER):
    for (size_t i = 0; i < pEmpVector->size(); i++){
     if(pEmpVector->at(i)->status_ > get<0>(dataLimit)){

     }else{
        pEmpVector->erase(pEmpVector->begin()+i);
     }
    }
case(LESS):
    for (size_t i = 0; i < pEmpVector->size(); i++){
     if(pEmpVector->at(i)->status_ < get<0>(dataLimit)){

     }else{
        pEmpVector->erase(pEmpVector->begin()+i);
     }
    }
    }

case(SALARY):
    switch(selectCrit){

case(IS_EQUAL):
    for (size_t i = 0; i < pEmpVector->size(); i++)
	{
    if(pEmpVector->at(i)->salary_ == atof((get<0>(dataLimit)).c_str( ))){

     }else{
     pEmpVector->erase(pEmpVector->begin()+i);
     }
     }
case(BETWEEN):
    for (size_t i = 0; i < pEmpVector->size(); i++){
	    if(pEmpVector->at(i)->salary_ >= atof((get<0>(dataLimit)).c_str( )) && pEmpVector->at(i)->salary_ <= atof((get<1>(dataLimit)).c_str( ))){

	    }else{
	    pEmpVector->erase(pEmpVector->begin()+i);
	    }
	}
case(GREATER):
    for (size_t i = 0; i < pEmpVector->size(); i++){
     if(pEmpVector->at(i)->salary_ > atof((get<0>(dataLimit)).c_str( ))){

     }else{
        pEmpVector->erase(pEmpVector->begin()+i);
     }
    }
case(LESS):
    for (size_t i = 0; i < pEmpVector->size(); i++){
     if(pEmpVector->at(i)->salary_ < atof((get<0>(dataLimit)).c_str( ))){

     }else{
        pEmpVector->erase(pEmpVector->begin()+i);
     }
    }
    }


case(PAY_BASIS):
    switch(selectCrit){
case(IS_EQUAL):
    for (size_t i = 0; i < pEmpVector->size(); i++)
	{
    if(pEmpVector->at(i)->payBasis_ == get<0>(dataLimit)){

     }else{
     pEmpVector->erase(pEmpVector->begin()+i);
     }
     }
case(BETWEEN):
        for (size_t i = 0; i < pEmpVector->size(); i++){
	    if(pEmpVector->at(i)->payBasis_ >= get<0>(dataLimit) && pEmpVector->at(i)->payBasis_ <= get<1>(dataLimit)){

	    }else{
	    pEmpVector->erase(pEmpVector->begin()+i);
	    }
	}
case(GREATER):
    for (size_t i = 0; i < pEmpVector->size(); i++){
     if(pEmpVector->at(i)->payBasis_ > get<0>(dataLimit)){

     }else{
        pEmpVector->erase(pEmpVector->begin()+i);
     }
    }
case(LESS):
    for (size_t i = 0; i < pEmpVector->size(); i++){
     if(pEmpVector->at(i)->payBasis_ < get<0>(dataLimit)){

     }else{
        pEmpVector->erase(pEmpVector->begin()+i);
     }
    }
    }

case(POSITION):
    switch(selectCrit){
case(IS_EQUAL):
    for (size_t i = 0; i < pEmpVector->size(); i++)
	{
    if(pEmpVector->at(i)->positionTitle_ == get<0>(dataLimit)){

     }else{
     pEmpVector->erase(pEmpVector->begin()+i);
     }
     }
case(BETWEEN):
    for (size_t i = 0; i < pEmpVector->size(); i++){
	    if(pEmpVector->at(i)->positionTitle_ >= get<0>(dataLimit) && pEmpVector->at(i)->positionTitle_ <= get<1>(dataLimit)){

	    }else{
	    pEmpVector->erase(pEmpVector->begin()+i);
	    }
	}
case(GREATER):
    for (size_t i = 0; i < pEmpVector->size(); i++){
     if(pEmpVector->at(i)->positionTitle_ > get<0>(dataLimit)){

     }else{
        pEmpVector->erase(pEmpVector->begin()+i);
     }
    }
case(LESS):
    for (size_t i = 0; i < pEmpVector->size(); i++){
     if(pEmpVector->at(i)->positionTitle_ > get<0>(dataLimit)){

     }else{
        pEmpVector->erase(pEmpVector->begin()+i);
     }
    }

}
}
}
*/
//extra c for g
void Filter::printFilter()
{
   cout << getEmployeeFileHeader();
	for (size_t i = 0; i < pEmpVector_->size(); i++)
	{
		cout << *(pEmpVector_->at(i));
	}
}


void Filter::addFilter(vector<Employee *> *pEmpVector, DATA_FIELDS field, SELECTION_CRITERIA selectCrit, pair<string, string> dataLimit, FILTER_TYPE filterType)
{
    Filter(pEmpVector_, field, selectCrit, dataLimit);
    if(filterType == OR){


/*
    vector<Employee>* unionOfVectors = new vector<Employee>;
    unionOfVectors->insert(unionOfVectors->end(), pEmpVector_->begin(), pEmpVector_->end());
    unionOfVectors->insert(unionOfVectors->end(), pEmpVector->begin(), pEmpVector->end());
    sort(unionOfVectors->begin(), unionOfVectors->end());
    for(vector<Employee>::const_iterator it = unionOfVectors->begin();it < unionOfVectors->end();it++){
            int previous = it - 1;
        if(*it == previous){
            it = unionOfVectors->erase(it);
            it--;
        }else{
            previous = *it;
        }
    }
    pEmpVector_ = unionOfVectors;
    */
    }

    if(filterType == AND){

    /*
    vector<Employee>* intersectionOfVectors = new vector<Employee>;
    sort(pEmpVector->begin(), pEmpVector->end());
    sort(pEmpVector_->begin(), pEmpVector_->end());
    int previous = -1;
    for(vector<Employee>::const_iterator it = pEmpVector->begin();
        it < pEmpVector->end();
        it++){
        if(*it == previous){
            continue;
        }
        previous = *it;
        if(binary_search(pEmpVector_->begin(), pEmpVector_->end(), *it)){
            intersectionOfVectors->push_back(*it);
        }
    }
    pEmpVector_ = intersectionOfVectors;
        */
    }
}


