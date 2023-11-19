#include <iostream>
#include <cstring>
#include <car.h>
#include <animal.h>
#include <dog.h>
#include <cat.h>
#include <music_instrument.h>
#include <guitar.h>
#include <namespaces.h>

int main(){
	Car c1(12, 110, "bemveu");
	std::cout << c1.getHP()<< "\n"; 
	std::cout << c1.getModel()<< "\n"; 

	Car c2(15, 120, "asd2"); 
	std::cout << c2.getHP() << "\n"; 
	std::cout << c2.getModel()<< "\n"; 
	
	c1 = c2; 
	std::cout << c1.getHP()<< "\n"; 
	std::cout << c1.getModel()<< "\n";
	
	Animal a1 = Animal(8, "CatName");
	std::cout << a1.isDog() << "\n"; 
	
	Dog d1 = Dog(12, "Rex"); 
	std::cout << d1.isDog() << "\n";
	d1.makeNoise(); 

	Cat mycat = Cat(5, "Fiona"); 
	mycat.makeNoise();  
	
	Guitar g1 = Guitar(); 
	g1.play(); 

	ElectricCar::refill(); 
	CombustionCar::refill(); 

	return 0 ;
}
