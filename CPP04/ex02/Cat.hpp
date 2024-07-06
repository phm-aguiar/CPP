
#ifndef CAT_HPP_
# define CAT_HPP_
# include "Animal.hpp"
# include "Brain.hpp"
// Class declaration
class Cat : public Animal
{
  public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &rhs);
	~Cat();
	void makeSound() const;
	Brain *getBrain() const;

  private:
	Brain *brain;
};

#endif // CAT_HPP_
