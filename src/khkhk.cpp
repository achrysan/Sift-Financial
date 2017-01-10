
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
