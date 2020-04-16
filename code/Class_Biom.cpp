#include <Class_Biom.h>

void Biom::generate(int x1, int y1, int x2, int y2, Biom_types b)
	{
		x1mc = x1;
		y1mc = y1;
		x2mc = x2;
		y2mc = y2;
		types = b;
		switch (types)
		{
		case Jungle:
			Bioms_block = 1;
			break;
		case Desert:
			Bioms_block = 4;
			break;
		case Hell:
			Bioms_block = 21;
		default:
			break;
		}
	}