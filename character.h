#ifndef CHARACTER_H
#define CHARACTER_H


#include <string>
#include <sstream>

class Character {
private:
	std::string Name;
	const int Dmg;
	int Hp;
public:
	Character(std::string cName, const int cDmg, int cHp);
	~Character();
	std::string getName() const;
	int getHp() const;
	int getDmg() const;
	void Slash(int damage);
};

#endif