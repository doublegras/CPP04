#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Brain.hpp"

class Animal {
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal &animal);
		Animal& operator=(const Animal &animal);
		virtual void	makeSound() const = 0; // pure virtual function make it abstract class 
		virtual ~Animal();
		std::string getType() const;
};

# endif
