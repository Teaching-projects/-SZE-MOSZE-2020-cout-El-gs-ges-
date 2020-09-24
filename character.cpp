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

Character Character::parseUnit(std::string fileName) {
    std::string line, name, hp, dmg;
    std::ifstream file(fileName);
    if (!file.fail()) {
        getline(file, line);
        getline(file, line);
        for (int i = 0; i < line.size(); i++) {
            if (line[i] == ':') {
                for (int j = i; j < line.size(); j++) {
                    if (isalpha(line[j])) {
                        name += line[j];
                    }
                }
            }
        }
        getline(file, line);
        for (int i = 0; i < line.size(); i++) {
            if (isdigit(line[i])) {
                hp += line[i];
            }
        }
        getline(file, line);
        for (int i = 0; i < line.size(); i++) {
            if (isdigit(line[i])) {
                dmg += line[i];
            }
        }
        return Character(name, stoi(dmg), stoi(hp));
    }
    else {
        Character error("", 0, 0);
        return error;
    }
}
Character::~Character()
{
}