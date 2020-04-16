#ifndef CLASS_BIOM_H
#define CLASS_BIOM_H
enum Biom_types
{
	Jungle,
	Desert,
	Hell
};

class Biom
{
public:
	int x1mc;
	int y1mc;
	int x2mc;
	int y2mc;
	Biom_types types;
	int Bioms_block;
	
	void generate(int x1, int y1, int x2, int y2, Biom_types b);
};
#endif