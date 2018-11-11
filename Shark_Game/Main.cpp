#include<SFML/Graphics.hpp> 
#include<iostream>

using namespace sf;
using namespace std;
int main()
{
	RenderWindow window(VideoMode(1280,1024),"Shark Game",Style::Default);
	//dghhd
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::Closed:
				window.close();
				break;
			default:
				break;
			}
		}
	}
	return 0;
}