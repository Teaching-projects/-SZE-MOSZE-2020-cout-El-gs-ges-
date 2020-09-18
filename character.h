#ifndef CHARACTER_H
#define CHARACTER_H


#include <string>
#include <sstream>

class Character {
private:
	std::string Name;
	int Dmg;
	int Hp;
public:
	Character(std::string cName, std::string cDmg, std::string cHp);
	~Character();
	std::string getName();
	int getHp();
	int getDmg();
	void Slash(int damage);
};

#endif