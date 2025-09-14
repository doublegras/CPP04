#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "blabla";
}

Brain::~Brain(void) {
	std::cout << "Brain Destructor" << std::endl;
}

Brain::Brain(const Brain &brain) {
	std::cout << "Brain Copy constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = brain._ideas[i];
}

Brain& Brain::operator=(const Brain &brain) {
	std::cout << "Brain Copy assignment operator" << std::endl;
	if (this == &brain)
	{
		std::cout << "self assignement..." << std::endl;
		return *this;
	}
    return *this;
}
