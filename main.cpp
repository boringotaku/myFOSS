#include<iostream>
#include<string>
#include<vector>
#include "disease.h"

int main(){
  //const class objects can call only const functions
	const Test t(20);

  inlineFunction();
  std::cout << t.getValue() << std::endl;

  // created a vector list of patients
  std::vector<patient> vtr;

  // created a new patient with default values and pushed into vector
  patient *f1 = new patient;
  vtr.push_back(*f1);

  //iterator for searching the list
  //make it default iterator
  std::vector<patient>::iterator it;

  //getinfo of iterator
  it = vtr.begin();
  it->getInfo();

  //make a vector of disease class and try accessing getInfo function
  //
  std::vector<disease> dtr;
  disease *d1 = new disease;
  dtr.push_back(*d1);


  //iterator for disease vector list
  std::vector<disease>::iterator itD;
  itD=dtr.begin();
  itD->getInfo();
  return 0;
}
