
#ifndef ANIMAL_HPP_
# define ANIMAL_HPP_
# include <iostream>
// Class declaration
class Animal
{
  public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &other);
	Animal &operator=(const Animal &rhs);
	virtual ~Animal();
	virtual void makeSound() const; 
	std::string getType() const;
	void setType(std::string type);

  protected:
	std::string type;
};

#endif // ANIMAL_HPP_
