#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <Windows.h>
#include <iostream>
#include<time.h>

using namespace sf;
using namespace std;
int main()
{
	int a = 10;
	RenderWindow window(VideoMode(600, 600), "MyGame");


	Texture backgroundTexture;
	backgroundTexture.loadFromFile("images/background.png");
	Sprite backgroundSprite(backgroundTexture);


	Texture spacesShipTexture;
	spacesShipTexture.loadFromFile("images/spaceship.png");
	Sprite spaceShipSprite(spacesShipTexture);
	spaceShipSprite.setPosition(270.0f, 500.0f);//choisir la  position initial de l'item
	spaceShipSprite.setScale(0.8f, 0.8f);//redimension de l'image 0.8->80%



	Texture laserTexture;
	laserTexture.loadFromFile("images/point.jpg");
	Sprite laserSprite(laserTexture);
	laserSprite.setScale(0.05f, 0.05f);


	Music music;// les extensions compatible avec sfml sont : ogg / wav 
	music.openFromFile("audio/Battle_in_the_Stars.ogg");
	music.setVolume(10);
	music.play();
	music.setLoop(true);

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
			case Event::KeyPressed:
				switch (event.key.code) 
				{
					case Keyboard::Q://traiter le cas ou le boutton Q est appuiyé
						spaceShipSprite.setPosition(spaceShipSprite.getPosition().x - 10, spaceShipSprite.getPosition().y);
						break;
					case Keyboard::Z://traiter le cas ou le boutton Q est appuiyé
						spaceShipSprite.setPosition(spaceShipSprite.getPosition().x, spaceShipSprite.getPosition().y-10);
						break;
					case Keyboard::D://traiter le cas ou le boutton Q est appuiyé
						spaceShipSprite.setPosition(spaceShipSprite.getPosition().x + 10, spaceShipSprite.getPosition().y);
						break;
					case Keyboard::S://traiter le cas ou le boutton Q est appuiyé
						spaceShipSprite.setPosition(spaceShipSprite.getPosition().x, spaceShipSprite.getPosition().y+10);
						break;


				}
				

			case Event::MouseButtonPressed:
				std::cout << "Mouse button has been pressed" << std::endl;
				switch (event.key.code)
				{
				case Mouse::Left:
					std::cout << "Left key has been pressed" << std::endl;
					laserSprite.setPosition((spaceShipSprite.getPosition().x+35), (spaceShipSprite.getPosition().y-10));
					while (laserSprite.getPosition().y > -laserSprite.getGlobalBounds().height) {
						laserSprite.setPosition(laserSprite.getPosition().x, laserSprite.getPosition().y - 0.5);
						window.draw(laserSprite);
						window.display();
					}
				}
				break;
			}
			window.clear();
		}
		window.draw(backgroundSprite);
		window.draw(spaceShipSprite);
		window.draw(laserSprite);
		window.display();
		
	}
	return 0;
}
