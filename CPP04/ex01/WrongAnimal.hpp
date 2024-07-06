
#ifndef WRONGANIMAL_HPP_
# define WRONGANIMAL_HPP_
# include <iostream>
// Class declaration
class WrongAnimal
{
  public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &rhs);
	virtual ~WrongAnimal();
	void makeSound() const; 
	std::string getType() const;
	void setType(std::string type);

  protected:
	std::string type;
};


#endif // ANIMAL_HPP_
