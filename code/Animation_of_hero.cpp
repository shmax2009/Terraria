#include <Animation_of_hero.h>
#include <SFML/Graphics.hpp>

using namespace std;

	void Hero_anim::takeit(sizeh siz,Color color)
	{
		for (int i = 1; i <= 16; i++)
		{
			hairtextureanim[i - 1].loadFromFile("/home/max/learn_c/Teraria/Resurce/HeroTexture/Hair/hair" + to_string(i) + ".png");
		}
		for (int i = 1; i <= 20; i++)
		{
			headtextureanim[i - 1].loadFromFile("/home/max/learn_c/Teraria/Resurce/HeroTexture/Head/head" + to_string(i) + ".png");
		}
		for (int i = 1; i <= 14; i++)
		{
			boudytextureanim[i - 1].loadFromFile("/home/max/learn_c/Teraria/Resurce/HeroTexture/boudy/boudy" + to_string(i) + ".png");
		}
		int p=0;
		for (int i = 1; i <= 15; i++)
		{
			if (i == 2)
				p = 1;

			legstextureanim[i - 1].loadFromFile("/home/max/learn_c/Teraria/Resurce/HeroTexture/legs/legs" + to_string(i + p) + ".png");
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
	}

	void Hero_anim::setRot(int rotation, int numb, sizeh siz)
	{
		hair.setScale(siz.w * rotation, siz.w);
		hair.setTexture(hairtextureanim[numb % 16]);

		head.setScale(siz.w * rotation, siz.w);
		head.setTexture(headtextureanim[numb % 20]);

		boudy.setScale(siz.w * rotation, siz.w);
		boudy.setTexture(boudytextureanim[(int)(trunc(numb / 3)) % 14]);

		legs.setScale(siz.w * rotation, siz.w);
		legs.setTexture(legstextureanim[(int)(trunc(numb / 3)) % 15]);

		if (rotation < 0)
		{   hair.setPosition(109,100);
			head.setPosition(108, 104);
			boudy.setPosition(110.5, 107);
			legs.setPosition(110, 113);
		}
		else
		{   hair.setPosition(100,100);
			boudy.setPosition(98.5, 107);
			head.setPosition(101, 104);
			legs.setPosition(99, 113);
		}
	}

	void Hero_anim::drawhero(RenderWindow &window)
	{
		window.draw(hair);
		window.draw(head);
		window.draw(boudy);
		window.draw(legs);
	}

