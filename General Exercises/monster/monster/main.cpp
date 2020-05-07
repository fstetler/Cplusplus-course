#include<iostream>
#include<string>
using namespace std;

enum class Monstertype {
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME,
};

struct Monster {
	Monstertype type;
	string name;
	int health;
};

string getMonsterTypeString(Monster monster) {
	if (monster.type == Monstertype::OGRE)
		return "Ogre";
	else if (monster.type == Monstertype::DRAGON)
		return "Dragon";
	else if (monster.type == Monstertype::ORC)
		return "Orc";
	else if (monster.type == Monstertype::GIANT_SPIDER)
		return "Giant spoder";
	else if (monster.type == Monstertype::SLIME)
		return "Slime";
}

void printMonster(Monster monster) {
	cout << "This " << getMonsterTypeString(monster) << " is named "
		<< monster.name << " and has " << monster.health << " amount of hp. " << "\n";
}

int main() {

	Monster monster1{ Monstertype::OGRE, "Torg", 145 };
	Monster monster2{ Monstertype::SLIME, "Blurp", 23 };

	printMonster(monster1);
	printMonster(monster2);

	return 0;
}
