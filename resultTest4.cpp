#include <iostream>
#include <string>

using std::string;

// string typeMonster(Monster monster);

enum class MonsterType
{
	OGRE,
	GOBLIN,
	SCELETON,
	ORC,
	TROLL,
};

struct Monster
{
	MonsterType type;
	string name;
	int HP;
	int damage;
	int sizeofDick;
};

string typeMonster(Monster monster)
{
	if (monster.type == MonsterType::GOBLIN)
		return "Goblach";
	if (monster.type == MonsterType::ORC)
		return "Orc";
	if (monster.type == MonsterType::OGRE)
		return "Ogre";
	if (monster.type == MonsterType::SCELETON)
		return "Sceleton";
	if (monster.type == MonsterType::TROLL)
		return "Troll";
	else return "unknown";
}

void valueResult(Monster monster)
{
	string initialTypeMonster = typeMonster(monster);
	std::cout << "This " << initialTypeMonster << " is named " << monster.name << " has " << monster.HP <<
		" health. His damage is " << monster.damage << " and size of dick is " << monster.sizeofDick << std::endl;
}

int main()
{
	Monster goblin { MonsterType::GOBLIN, "Puchkov", 150, 0, -1 };
	Monster orc { MonsterType::ORC, "Manisov", 10, 100, 1000 };

	valueResult(goblin);
	valueResult(orc);

	return 0;
}