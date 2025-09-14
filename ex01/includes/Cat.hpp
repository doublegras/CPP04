#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class Cat: public Animal {
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(const Cat &cat);
		~Cat();
		Cat& operator=(const Cat &cat);
		void	makeSound() const;
};

#endif
