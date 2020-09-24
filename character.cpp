#include "character.h"


Character::Character(std::string Name, int Dmg, int Hp) : Name(Name), Dmg(Dmg), Hp(Hp)
{	
}
std::string Character::getName() const {
	return Name;
}
int Character::getHp() const {
	return Hp;
}
int Character::getDmg() const {
	return Dmg;
}
void Character::Slash(int damage) {
	Hp = Hp - damage;
	if (Hp < 0) {
		Hp = 0;
	}
}
Character::~Character()
{
}