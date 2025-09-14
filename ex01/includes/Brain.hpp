#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Brain {
	protected:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(const Brain &brain);
		~Brain();
		Brain& operator=(const Brain &brain);
};

#endif
