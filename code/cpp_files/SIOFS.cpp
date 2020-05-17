#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <math.h>
#include <vector>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <All_Function.h>
#include <Global_Variable.h>
#include <create_map.h>
#include <Draw.h>
// #include <Cursor_doing_in_game.h>
// #include <Textur_Terrain.h>
#include <SIOFS.h>
#include <fabrica.h>

using namespace std;
using namespace sf;

bool emp(ifstream &pFile)
{
	return pFile.peek() == ifstream::traits_type::eof();
	// return pFile.peek() == EOF; ?
}

void cinmap(vector<vector<Block *>> arr, ofstream &fout)
{
	for (int i = 0; i < GV::x; i++)
	{
		for (int j = 0; j < GV::y; j++)
		{

			// cout << i << " " << j << " " << arr[i][j]->getType() << endl;
			// arr[i][j]->serialaze(fout);
		}
	}
}

void saveInventory(Inventory *Inventor, ofstream &fout)
{
	for (int i = 0; i < 8; i++)
	{
		fout.write((char *)&Inventor[i], sizeof(Inventory));
	}
}

void openInventory(Inventory *Inventor, ifstream &fin)
{
	for (int i = 0; i < 8; i++)
	{
		fin.read((char *)&Inventor[i], sizeof(Inventory));
	}
}

void coutmap(vector<vector<Block *>> arr, ifstream &fin)
{
	for (int i = 0; i < GV::x; i++)
	{
		for (int j = 0; j < GV::y; j++)
		{
			// fin.read((char*)&arr[i][j], sizeof(Block));
			int t;
			fin >> t;
			delete arr[i][j];
			arr[i][j] = (fabrica::create(t));
			arr[i][j]->deserialaze(fin);
		}
	}
}
