#include "character.h"


Character::Character(std::string cName, std::string cDmg, std::string cHp)
{
	Name = cName;
	std::stringstream hpValue(cHp);
	std::stringstream dmgValue(cDmg);
	hpValue >> Hp;
	dmgValue >> Dmg;
}
std::string Character::getName() {
	return Name;
}
int Character::getHp() {
	return Hp;
}
int Character::getDmg() {
	return Dmg;
}
/*void Character::setHp(int newHealth) {
	Hp = newHealth;
}*/
void Character::Slash(int damage) {
	Hp = Hp - damage;
	if (Hp < 0) {
		Hp = 0;
	}
}
Character::~Character()
{
}