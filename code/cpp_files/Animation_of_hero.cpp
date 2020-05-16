#include <Animation_of_hero.h>
#include <SFML/Graphics.hpp>
#include <Class_Hero.h>
using namespace std;

void Hero_anim::takeit(sizeh siz, Color color)
{
	for (int i = 1; i <= 16; i++)
	{
		hairtextureanim[i - 1].loadFromFile(GV::s+ "Resurce/HeroTexture/Hair/hair" + to_string(i) + ".png");
	}
	for (int i = 1; i <= 20; i++)
	{
		headtextureanim[i - 1].loadFromFile(GV::s+ "Resurce/HeroTexture/Head/head" + to_string(i) + ".png");
	}
	for (int i = 1; i <= 14; i++)
	{
		boudytextureanim[i - 1].loadFromFile(GV::s+ "Resurce/HeroTexture/boudy/boudy" + to_string(i) + ".png");
	}
	int p = 0;
	for (int i = 1; i <= 15; i++)
	{
		if (i == 2)
			p = 1;

		legstextureanim[i - 1].loadFromFile(GV::s+ "Resurce/HeroTexture/legs/legs" + to_string(i + p) + ".png");
	}

	hair.setTexture(hairtextureanim[0]);
	hair.setColor(Color::Blue);
	hair.setScale(siz.w, siz.h);
	hair.setPosition(100, 100);

	head.setTexture(headtextureanim[0]);
	head.setColor(color);
	head.setScale(0.3, 0.3);
	head.setPosition(101, 104);

	boudy.setTexture(boudytextureanim[0]);
	boudy.setColor(Color::Yellow);
	boudy.setScale(siz.w, siz.h);
	boudy.setPosition(101.5, 107);

	legs.setTexture(legstextureanim[0]);
	legs.setColor(Color::Blue);
	legs.setScale(siz.w, siz.h);
	legs.setPosition(99, 113);
	hair.setPosition(109, 100);
	head.setPosition(108, 104);
	boudy.setPosition(110.5, 107);
	legs.setPosition(110, 113);
}

void Hero_anim::setRot(int rotation, int numb, sizeh siz,Hero &h)
{
	// int oldrot=
	hair.setScale(siz.w * rotation, siz.w);
	hair.setTexture(hairtextureanim[numb % 16]);

	head.setScale(siz.w * rotation, siz.w);
	head.setTexture(headtextureanim[numb % 20]);

	boudy.setScale(siz.w * rotation, siz.w);
	boudy.setTexture(boudytextureanim[(int)(trunc(numb / 3)) % 14]);

	legs.setScale(siz.w * rotation, siz.w);
	legs.setTexture(legstextureanim[(int)(trunc(numb / 3)) % 15]);
	if (oldrot != rotation)
	{
		if (rotation < 0)
		{
			hair.move(9, 0);
			boudy.move(12, 0);
			head.move(7, 0);
			legs.move(11, 0);
			
		}
		else
		{
			hair.move(-9, 0);
			boudy.move(-12, 0);
			head.move(-7, 0);
			legs.move(-11, 0);
			
			
			

		}
	}
	oldrot = rotation;
}

void Hero_anim::drawhero(RenderWindow &window)
{
	window.draw(hair);
	window.draw(head);
	window.draw(boudy);
	window.draw(legs);
}
void Hero_anim::move(float x, float y)
{
	hair.move(x,y);
	head.move(x,y);
	boudy.move(x,y);
	legs.move(x,y);
}
float Hero_anim::getPosx()
{
	return boudy.getPosition().x;
}
float Hero_anim::getPosy()
{
	return boudy.getPosition().y;
}
void Hero_anim::setPosition(float x, float y)
{
	hair.setPosition(x, y);
	head.setPosition(x, y);
	boudy.setPosition(x, y);
	legs.setPosition(x, y);
	if (oldrot < 0)
	{
		float v=6;
		hair.move(0+v, 0);
		boudy.move(1.5+v, 7);
		head.move(-1+v, 4);
		legs.move(1+v, 13);
		
	}
	else
	{
		hair.move(0, 0);
		boudy.move(-1.5, 7);
		head.move(1, 4);
		legs.move(-1, 13);
		// hair.setPosition(100, 100);
		// boudy.setPosition(98.5, 107);
		// head.setPosition(101, 104);
		// legs.setPosition(99, 113);
	}
	// hair.setPosition(100, 100);
	// boudy.setPosition(98.5, 107);
	// head.setPosition(101, 104);
	// legs.setPosition(99, 113)
}
