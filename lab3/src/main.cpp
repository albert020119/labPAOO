#include <cstdlib>
#include <iostream>
#include <cstring>
#include "Cat.h" 


using namespace std; 


int main(){
	char * culoare = new char[10];
	strcpy(culoare, "blue \n");
	Cat mycat(1, culoare);
	cout << mycat.getColor() << "\n";
	Cat mycat2 = mycat; 
	
	Cat yourcat(mycat);
	cout << yourcat.getColor() << "\n"; 
	
	Cat hiscat(std::move (mycat));
	cout << hiscat.getColor() << "\n";
	
	
	return 0; 
}
