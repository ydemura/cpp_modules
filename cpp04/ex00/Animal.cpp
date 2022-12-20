//
//  Animal.cpp
//  cpp04_00
//
//  Created by Julia Demura on 28/11/2022.
//

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Default constructor : Animal" << std::endl;
}

Animal::~Animal(){
	std::cout << "Destructor : Animal" << std::endl;
}

Animal::Animal(const Animal & src){
	
	*this = src;
	std::cout << "Copy constructor : Animal" << std::endl;
}

Animal & Animal::operator=(Animal const & src){
	
	_type = src._type;
	return *this;
}

std::string Animal::getType() const {
	return _type;
}

void	Animal::makeSound() const{
	std::cout << "Animal make sound" << std::endl;
}
