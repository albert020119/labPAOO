#include <iostream>
#include <cstring>
#include <car.h>
#include <animal.h>
#include <dog.h>

int main(){
	Car c1 = Car(12, 110, "bemveu");
	std::cout << c1.getHP()<< "\n"; 
	std::cout << c1.getModel()<< "\n"; 

	Car c2 = Car(15, 120, "asd2"); 
	std::cout << c2.getHP() << "\n"; 
	std::cout << c2.getModel()<< "\n"; 
	
	c1 = c2; 
	std::cout << c1.getHP()<< "\n"; 
	std::cout << c1.getModel()<< "\n";
	
	Animal a1 = Animal(8, "CicaNev");
	std::cout << a1.isDog() << "\n"; 
	
	Dog d1 = Dog(12, "Rex"); 
	std::cout << d1.isDog() << "\n"; 
	
	return 0 ;
}
