#include<iostream>
#include<algorithm>
#include<limits>
#include<string>
#include<array>
#include<vector>
#include<iterator>
#include<numeric>
#include<list>
#include<cstdint>
#include<chrono>
using namespace std;

class Monster {
public:
	enum Type {
		Dragon,
		Goblin,
		Ogre,
		Orc,
		Skeleton,
		Troll,
		Vampire,
		Zombie,
		MAX_MONSTER_TYPES
	};



private:
	Type m_type{};
	string m_name{};
	string m_roar{};
	int m_hp{};

public:

	Monster(Type type, string name, string roar, int hp)
		: m_type{ type }, m_name{ name }, m_roar{ roar }, m_hp{ hp }{}

	void print() {
		cout << m_name << " the " << getTypeString() << " has " << m_hp << " hit points and says " << m_roar << "\n";
	}

	string getTypeString() {
		switch (m_type) {
		case Dragon:
			return "Dragon";
		case Goblin:
			return "Goblin";
		case Ogre:
			return "Ogre";
		case Orc:
			return "Orc";
		case Skeleton:
			return "Skeleton";
		case Troll:
			return "Troll";
		case Vampire:
			return "Vampire";
		case Zombie:
			return "Zombie";
		}
	}

	friend static class MonsterGenerator;
};

class MonsterGenerator {
public:
	static int getRandomNumber(int min, int max) {
		static constexpr double fraction{ 1.0 / (static_cast<double>(RAND_MAX) + 1.0) };
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}

	static Monster generateMonster() {
		auto type{ static_cast<Monster::Type>(getRandomNumber(0,Monster::MAX_MONSTER_TYPES - 1)) };
		int hitPoints{ getRandomNumber(0,100) };

		return Monster(type, "bones", "*rattle*", hitPoints);
	}
};

int main() {

	Monster m{ MonsterGenerator::generateMonster() };
	m.print();

	return 0;
};


