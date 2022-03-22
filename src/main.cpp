#include<iostream>
#include "test.h"
using namespace std;

// add a common comment
int main(){
    //const class objects can call only const functions
	const Test t(20);

    inlineFunction();
    cout << t.getValue() << endl;
    return 0;
}
