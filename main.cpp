#include <iostream>
#include <sstream>
#include <string>

#include "character.h"

void writeCharacters(Character* FighterOne, Character* FighterTwo) {
	std::cout << FighterOne->Character::getName() << " Hp:" << FighterOne->Character::getHp() << " Damage: " << FighterOne->Character::getDmg() << std::endl;
	std::cout << FighterTwo->Character::getName() << " Hp:" << FighterTwo->Character::getHp() << " Damage: " << FighterTwo->Character::getDmg() << std::endl;
}

void Punch(Character* FighterOne, Character* FighterTwo) {
	std::cout << FighterOne->getName() << " -> " << FighterTwo->getName() << std::endl;
	FighterTwo->Slash(FighterOne->getDmg());
	writeCharacters(FighterOne, FighterTwo);
}

void Fight(Character* FighterOne, Character* FighterTwo) {
	bool endFight = false;
	writeCharacters(FighterOne, FighterTwo);
	while (!endFight) {
		Punch(FighterOne, FighterTwo);
		if (FighterTwo->getHp() == 0) {
			endFight = true;
			break;
		}
		Punch(FighterTwo, FighterOne);
		if (FighterTwo->getHp() == 0) {
			endFight = true;
			break;
		}
	}
}

void EndGame(Character* FighterOne, Character* FighterTwo) {
	if (FighterOne->getHp() == 0) {
		std::cout << FighterOne->getName() << " died. " << FighterTwo->getName() << " wins\n";
	}
	if (FighterTwo->getHp() == 0) {
		std::cout << FighterTwo->getName() << " died. " << FighterOne->getName() << " wins!\n";
	}
}

int main(int argc, char** argv) {
	Character* FighterOne = new Character(argv[1], std::stoi(argv[2]), std::stoi(argv[3]));
	Character* FighterTwo = new Character(argv[4], std::stoi(argv[5]), std::stoi(argv[6]));
	Fight(FighterOne, FighterTwo);
	EndGame(FighterOne, FighterTwo);
	delete FighterOne;
	delete FighterTwo;
	return 0;
}