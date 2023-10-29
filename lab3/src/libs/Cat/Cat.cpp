#include "Cat.h"
#include <iostream>
#include <cstring>

Cat::Cat(int age, char * color){
    this->color = new char[10];
    this->age = age; 
    this->color = color; 
}

Cat::Cat(const Cat &obj){
    cout << "copy constructor \n"; 
    color = new char[10]; 
    color = strcpy(color, obj.color);
    age = obj.age; 
}

Cat::~Cat(){
    cout << "destructor \n";
    free(color); 
}

Cat::Cat(Cat&& alta){
    this->color = alta.color;
    cout << "move constructor \n";
}

char * Cat::getColor(){
    return color; 
}
