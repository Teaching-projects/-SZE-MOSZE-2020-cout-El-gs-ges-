#include <iostream>
#include <sstream>
#include <string>
#include<fstream>
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
	writeCharacters(FighterOne, FighterTwo);
	while ((FighterOne->getHp() != 0) && (FighterTwo->getHp() != 0)) {
		Punch(FighterOne, FighterTwo);
		if (FighterTwo->getHp() == 0) {
			break;
		}
		Punch(FighterTwo, FighterOne);
		if (FighterOne->getHp() == 0) {
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
	Character* FighterOne = new Character("Naruto", std::stoi("100"), std::stoi("3000"));
	Character* FighterTwo = new Character("Sasuke", std::stoi("100"), std::stoi("5000"));
	Fight(FighterOne, FighterTwo);
	EndGame(FighterOne, FighterTwo);
	delete FighterOne;
	delete FighterTwo;
	return 0;
}