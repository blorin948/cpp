#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{

	public :

	Enemy(int hp, std::string const &type);
	Enemy();
	Enemy(Enemy const &c);
	Enemy &operator=(Enemy const &c);
	virtual ~Enemy();
	std::string getType(void) const;
	int getHP() const;
	virtual void takeDamage(int) = 0;

	private :

	protected :

	int _hp;
	std::string _type;

};

#endif