#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <Windows.h>
#include <iostream>
#include<time.h>


using namespace sf;
using namespace std;



bool isCollide(Sprite s1, Sprite s2, float distanceThreshold) {
	float dx = s1.getPosition().x - s2.getPosition().x;
	float dy = s1.getPosition().y - s2.getPosition().y;
	float distance = sqrt(dx * dx + dy * dy);
	return (distance <= distanceThreshold);
}



int main()
{
	int level1 = 1;
	int level2 = 0;
	int end_game = 0;
	int win_game = 0;
	int restart = 0;

	
	//lv1

	float wallBottom1 =190.0f ;
	float wallTop7 = 540.0f;
	float wallLeft4 =420.0f ;
	float wallRight10 = 57.0f;
	float wallLeft2 = 230.0f;
	float wallBottom3 =320.0f ;
	float wallTop5 = 340.0f;
	float wallLeft6 =295.0f ;
	float wallRight8 = 260.0f;
	float wallTop9 = 410.0f;
	float wallBottom11 = 390.0f;
	float wallRight12 = 200.0f;

	int door= 0;



	RenderWindow window(VideoMode(540, 762), "MyGame");


	Texture backgroundTexture1;
	backgroundTexture1.loadFromFile("images/lv1.png");
	Sprite backgroundSprite1(backgroundTexture1);


	Texture caractere;
	caractere.loadFromFile("images/ankara.png");
	Sprite caractereSprite(caractere);
	caractereSprite.setScale(1.0f, 1.0f);
	caractereSprite.setPosition(70.0f, 400.0f);//choisir la  position initial de l'item

	Texture key;
	key.loadFromFile("images/gold_key.png");
	Sprite keySprite(key);
	keySprite.setScale(0.2f, 0.2f);
	keySprite.setPosition(420.0f, 330.0f);//choisir la  position initial de l'item


	Texture canonball;
	canonball.loadFromFile("images/canonball1.png");
	Sprite canonballSprite(canonball);
	canonballSprite.setScale(0.05f, 0.05f);
	canonballSprite.setPosition(280.0f, 530.0f);//choisir la  position initial de l'item


	Texture cannon;
	cannon.loadFromFile("images/canon1.png");
	Sprite cannonSprite(cannon);
	cannonSprite.setScale(0.9f, 0.9f);
	cannonSprite.setPosition(260.0f, 530.0f);//choisir la  position initial de l'item
	
	Texture red_door;
	red_door.loadFromFile("images/red_door.png");
	Sprite red_doorSprite(red_door);
	red_doorSprite.setScale(1.0f, 1.0f);
	red_doorSprite.setPosition(210.0f, 188.0f);

	Texture green_door;
	green_door.loadFromFile("images/green_door1.png");
	Sprite green_doorSprite(green_door);
	green_doorSprite.setScale(1.0f, 1.0f);
	green_doorSprite.setPosition(209.0f, 185.0f);


	Music music;// les extensions compatible avec sfml sont : ogg / wav 
	music.openFromFile("audio/Sokoban-Music.wav");
	music.setVolume(50);
	music.play();
	music.setLoop(true);

	
	

	
	






	//lv2


	int door2 = 0;

	float wall_Bottom1 = 206.0f;
	float wall_Bottom2 = 331.0f;
	float wall_Left2 = 340.0f;
	float wall_Left3 = 380.0f;
	float wall_Bottom3 = 495.0f;
	float wall_Left4 =460.0f ;
	float wall_Top5 =502.0f ;
	float wall_Left5 =297.0f ;
	float wall_Top6 = 545.0f;
	float wall_canon3=565.0f;
	float wall_Right7 =80.0f ;
	float wall_Top7 = 460.0f;
	float wall_Right8 =38.0f ;
	float wall_Bottom9 =248.0f ;
	float wall_Right9 = 165.0f;
	float wall_Top10 =210.0f ;
	float wall_Bottom10 = 289.0f;
	float wall_Right10 = 327.0f;
	float wall_Left10 = 133.0f;
	float wall_Top11 = 335.0f;
	float wall_Bottom11 = 414.0f;
	float wall_Right11 = 365.0f;
	float wall_Left11 = 297.0f;
	float wall_Top12 =420.0f ;
	float wall_Bottom12 =495.0f ;
	float wall_Right12 =365.0f ;
	float wall_Left12 =297.0f ;
	float wall_Top13 = 295.0f;
	float wall_Bottom13 = 535.0f;
	float wall_Right13 =280.0f ;
	float wall_Left13 = 135.0f;
	float wall_Top14 =460.0f ;
	float wall_Right14 =165.0f ;
	float wall_Left14 = 90.0f;
	float wall_Top15 =250.0f ;
	float wall_Bottom15 = 450.0f;
	float wall_Right15 =115.0f ;
	float wall_Left15 = 50.0f;
	float wall_Top16 = 255.0f;
	float wall_Bottom16 = 330.0f;
	float wall_Right16 = 115.0f;
	


	Texture backgroundTexture2;
	backgroundTexture2.loadFromFile("images/lv3.png");
	Sprite backgroundSprite2(backgroundTexture2);





	Texture caractere2;
	caractere2.loadFromFile("images/ankara2.png");
	Sprite caractereSprite2(caractere2);
	caractereSprite2.setScale(0.8f, 0.8f);
	caractereSprite2.setPosition(40.0f, 250.0f);//choisir la  position initial de l'item






	Texture key1;
	key1.loadFromFile("images/gold_key1.png");
	Sprite keySprite1(key1);
	keySprite1.setScale(0.15f, 0.15f);
	keySprite1.setPosition(166.0f, 203.0f);//choisir la  position initial de l'item



	Texture key2;
	key2.loadFromFile("images/gold_key2.png");
	Sprite keySprite2(key2);
	keySprite2.setScale(0.15f, 0.15f);
	keySprite2.setPosition(45.0f, 330.0f);//choisir la  position initial de l'item





	Texture key3;
	key3.loadFromFile("images/gold_key3.png");
	Sprite keySprite3(key3);
	keySprite3.setScale(0.15f, 0.15f);
	keySprite3.setPosition(165.0f, 537.0f);//choisir la  position initial de l'item




	Texture cannon2;
	cannon2.loadFromFile("images/canon2.png");
	Sprite cannonSprite2(cannon2);
	cannonSprite2.setScale(0.7f, 0.7f);
	cannonSprite2.setPosition(71.0f, 530.0f);//choisir la  position initial de l'item





	Texture cannon3;
	cannon3.loadFromFile("images/canon3.png");
	Sprite cannonSprite3(cannon3);
	cannonSprite3.setScale(0.7f, 0.7f);
	cannonSprite3.setPosition(445.0f, 488.0f);//choisir la  position initial de l'item



	Texture cannon4;
	cannon4.loadFromFile("images/canon4.png");
	Sprite cannonSprite4(cannon4);
	cannonSprite4.setScale(0.6f, 0.6f);
	cannonSprite4.setPosition(285.0f, 245.0f);//choisir la  position initial de l'item



	Texture canonball2;
	canonball2.loadFromFile("images/canonball1.png");
	Sprite canonballSprite2(canonball2);
	canonballSprite2.setScale(0.04f, 0.04f);
	canonballSprite2.setPosition(85.5f, 530.0f);//choisir la  position initial de l'item




	Texture canonball3;
	canonball3.loadFromFile("images/canonball1.png");
	Sprite canonballSprite3(canonball3);
	canonballSprite3.setScale(0.035f, 0.035f);
	canonballSprite3.setPosition(295.0f, 280.0f);//choisir la  position initial de l'item




	Texture canonball4;
	canonball4.loadFromFile("images/canonball1.png");
	Sprite canonballSprite4(canonball4);
	canonballSprite4.setScale(0.035f, 0.035f);
	canonballSprite4.setPosition(440.0f, 508.0f);//choisir la  position initial de l'item





	Texture red_door2;
	red_door2.loadFromFile("images/red_door.png");
	Sprite red_doorSprite2(red_door2);
	red_doorSprite2.setScale(0.8f, 0.8f);
	red_doorSprite2.setPosition(40.0f, 248.0f);

	Texture green_door2;
	green_door2.loadFromFile("images/green_door1.png");
	Sprite green_doorSprite2(green_door2);
	green_doorSprite2.setScale(0.8f, 0.8f);
	green_doorSprite2.setPosition(40.0f, 248.0f);




	//gameover

	Music music1;// les extensions compatible avec sfml sont : ogg / wav 
	music1.openFromFile("audio/COFFIN DANCE.wav");
	music1.setVolume(50);
	music1.setLoop(true);





	Texture gameover;
	gameover.loadFromFile("images/game over1.png");
	Sprite gameoverSprite(gameover);

	//win

	Texture winner;
	winner.loadFromFile("images/winner.png");
	Sprite winnerSprite(winner);





	Music music2;// les extensions compatible avec sfml sont : ogg / wav 
	music2.openFromFile("audio/Win sound.wav");
	music2.setVolume(50);



	while (window.isOpen())
	{




		if (level1 == 1) {

			restart = 0;
			win_game = 0;

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
						caractereSprite.setPosition(caractereSprite.getPosition().x - 7, caractereSprite.getPosition().y);

						if (caractereSprite.getPosition().x < wallRight10) {
							caractereSprite.setPosition(caractereSprite.getPosition().x + 7, caractereSprite.getPosition().y);
						}
						if (caractereSprite.getPosition().x < wallRight8 and caractereSprite.getPosition().y > wallTop9) {
							caractereSprite.setPosition(caractereSprite.getPosition().x + 7, caractereSprite.getPosition().y);
						}

						if (caractereSprite.getPosition().x < wallRight12 and caractereSprite.getPosition().y < wallBottom11) {
							caractereSprite.setPosition(caractereSprite.getPosition().x + 7, caractereSprite.getPosition().y);
						}

						break;


					case Keyboard::Z://traiter le cas ou le boutton Q est appuiyé
						caractereSprite.setPosition(caractereSprite.getPosition().x, caractereSprite.getPosition().y - 7);
						if (caractereSprite.getPosition().y < wallBottom1) {
							caractereSprite.setPosition(caractereSprite.getPosition().x, caractereSprite.getPosition().y + 7);
						}


						if (caractereSprite.getPosition().x > wallLeft2 and caractereSprite.getPosition().y < wallBottom3) {
							caractereSprite.setPosition(caractereSprite.getPosition().x, caractereSprite.getPosition().y + 7);
						}

						if (caractereSprite.getPosition().x < wallRight12 and caractereSprite.getPosition().y < wallBottom11) {
							caractereSprite.setPosition(caractereSprite.getPosition().x, caractereSprite.getPosition().y + 7);
						}

						break;


					case Keyboard::D://traiter le cas ou le boutton Q est appuiyé
						window.clear();
						caractereSprite.setPosition(caractereSprite.getPosition().x + 7, caractereSprite.getPosition().y);
						if (caractereSprite.getPosition().x > wallLeft4) {
							caractereSprite.setPosition(caractereSprite.getPosition().x - 7, caractereSprite.getPosition().y);
						}

						if (caractereSprite.getPosition().x > wallLeft2 and caractereSprite.getPosition().y < wallBottom3) {
							caractereSprite.setPosition(caractereSprite.getPosition().x - 7, caractereSprite.getPosition().y);
						}

						if (caractereSprite.getPosition().x > wallLeft6 and caractereSprite.getPosition().y > wallTop5) {
							caractereSprite.setPosition(caractereSprite.getPosition().x - 7, caractereSprite.getPosition().y);
						}

						break;


					case Keyboard::S://traiter le cas ou le boutton Q est appuiyé
						caractereSprite.setPosition(caractereSprite.getPosition().x, caractereSprite.getPosition().y + 7);
						if (caractereSprite.getPosition().y > wallTop7) {
							caractereSprite.setPosition(caractereSprite.getPosition().x, caractereSprite.getPosition().y - 7);
						}



						if (caractereSprite.getPosition().x > wallLeft6 and caractereSprite.getPosition().y > wallTop5) {
							caractereSprite.setPosition(caractereSprite.getPosition().x, caractereSprite.getPosition().y - 7);
						}

						if (caractereSprite.getPosition().x < wallRight8 and caractereSprite.getPosition().y > wallTop9) {
							caractereSprite.setPosition(caractereSprite.getPosition().x, caractereSprite.getPosition().y - 7);
						}

						break;


					}



				}
				window.clear();
			}



			if (canonballSprite.getPosition().y > wallBottom3) {
				canonballSprite.setPosition(canonballSprite.getPosition().x, canonballSprite.getPosition().y - 0.08);
			}





			if (canonballSprite.getPosition().y <= wallBottom3) {
				canonballSprite.setPosition(canonballSprite.getPosition().x, canonballSprite.getPosition().y + 0.1);
				while (canonballSprite.getPosition().y >= wallBottom3 and canonballSprite.getPosition().y < wallTop7) {
					canonballSprite.setPosition(canonballSprite.getPosition().x, canonballSprite.getPosition().y + 0.05);
				}
			}



			

			if (isCollide(keySprite, caractereSprite, 30.0f)) {
				cout << "Key claimed" << endl;
				keySprite.setPosition(-1000, -1000); // Move the key sprite off-screen
				red_doorSprite.setPosition(-1000, -1000); // Move the key sprite off-screen
				door = 1;

			}

			if (isCollide(green_doorSprite, caractereSprite, 30.0f) == true and red_doorSprite.getPosition().x!=210.0f and red_doorSprite.getPosition().y!=188.0f){
				level2 = 1;
				level1 = 0;

			}


			window.draw(backgroundSprite1);
			window.draw(keySprite);
			if (door == 0)
				window.draw(red_doorSprite);
			if (door == 1)
				window.draw(green_doorSprite);
			window.draw(canonballSprite);
			window.draw(caractereSprite);
			window.draw(cannonSprite);
			window.display();


		}


		
		//.................................................................................................................

		if (level2 == 1) {





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
						
							caractereSprite2.setPosition(caractereSprite2.getPosition().x - 7, caractereSprite2.getPosition().y);
						

							if (caractereSprite2.getPosition().y > wall_Top7 and caractereSprite2.getPosition().x < wall_Right7) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x+7, caractereSprite2.getPosition().y );
							}


							if (caractereSprite2.getPosition().x < wall_Right8) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x+7, caractereSprite2.getPosition().y );
							}


							if (caractereSprite2.getPosition().y < wall_Bottom9 and caractereSprite2.getPosition().x < wall_Right9) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x +7, caractereSprite2.getPosition().y);
							}

							if (caractereSprite2.getPosition().y < wall_Bottom10 and caractereSprite2.getPosition().y > wall_Top10 and caractereSprite2.getPosition().x < wall_Right10 and caractereSprite2.getPosition().x > wall_Left10) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x + 7, caractereSprite2.getPosition().y);
							}


							if (caractereSprite2.getPosition().y < wall_Bottom11 and caractereSprite2.getPosition().y > wall_Top11 and caractereSprite2.getPosition().x < wall_Right11 and caractereSprite2.getPosition().x > wall_Left11) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x + 7, caractereSprite2.getPosition().y);
							}

							if (caractereSprite2.getPosition().y < wall_Bottom12 and caractereSprite2.getPosition().y > wall_Top12 and caractereSprite2.getPosition().x < wall_Right12 and caractereSprite2.getPosition().x > wall_Left12) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x + 7, caractereSprite2.getPosition().y);
							}

							if (caractereSprite2.getPosition().y < wall_Bottom13 and caractereSprite2.getPosition().y > wall_Top13 and caractereSprite2.getPosition().x < wall_Right13 and caractereSprite2.getPosition().x > wall_Left13) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x + 7, caractereSprite2.getPosition().y);
							}



							if (caractereSprite2.getPosition().y > wall_Top14 and caractereSprite2.getPosition().x < wall_Right14 and caractereSprite2.getPosition().x > wall_Left14) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x + 7, caractereSprite2.getPosition().y);
							}

							if (caractereSprite2.getPosition().y < wall_Bottom15 and caractereSprite2.getPosition().y > wall_Top15 and caractereSprite2.getPosition().x < wall_Right15 and caractereSprite2.getPosition().x > wall_Left15) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x + 7, caractereSprite2.getPosition().y);
							}


						break;


					case Keyboard::Z://traiter le cas ou le boutton Z est appuiyé
						caractereSprite2.setPosition(caractereSprite2.getPosition().x, caractereSprite2.getPosition().y - 7);
						
						if (caractereSprite2.getPosition().y < wall_Bottom1) {
							caractereSprite2.setPosition(caractereSprite2.getPosition().x, caractereSprite2.getPosition().y + 7);
						}

						if (caractereSprite2.getPosition().y < wall_Bottom2 and caractereSprite2.getPosition().x > wall_Left2) {
							caractereSprite2.setPosition(caractereSprite2.getPosition().x, caractereSprite2.getPosition().y+7);
						}


						if (caractereSprite2.getPosition().x > wall_Left3 and caractereSprite2.getPosition().y < wall_Bottom3) {
							caractereSprite2.setPosition(caractereSprite2.getPosition().x , caractereSprite2.getPosition().y+7);
						}

						if (caractereSprite2.getPosition().y  < wall_Bottom9 and caractereSprite2.getPosition().x < wall_Right9) {
							caractereSprite2.setPosition(caractereSprite2.getPosition().x, caractereSprite2.getPosition().y + 7);
						}
						if (caractereSprite2.getPosition().y < wall_Bottom10 and caractereSprite2.getPosition().y > wall_Top10 and caractereSprite2.getPosition().x > wall_Left10 and caractereSprite2.getPosition().x < wall_Right10) {
							caractereSprite2.setPosition(caractereSprite2.getPosition().x, caractereSprite2.getPosition().y +7);
						}

						if (caractereSprite2.getPosition().y < wall_Bottom11 and caractereSprite2.getPosition().y > wall_Top11 and caractereSprite2.getPosition().x < wall_Right11 and caractereSprite2.getPosition().x > wall_Left11) {
							caractereSprite2.setPosition(caractereSprite2.getPosition().x , caractereSprite2.getPosition().y +7);
						}

						if (caractereSprite2.getPosition().y < wall_Bottom12 and caractereSprite2.getPosition().y > wall_Top12 and caractereSprite2.getPosition().x < wall_Right12 and caractereSprite2.getPosition().x > wall_Left12) {
							caractereSprite2.setPosition(caractereSprite2.getPosition().x , caractereSprite2.getPosition().y +7);
						}

						if (caractereSprite2.getPosition().y < wall_Bottom13 and caractereSprite2.getPosition().y > wall_Top13 and caractereSprite2.getPosition().x < wall_Right13 and caractereSprite2.getPosition().x > wall_Left13) {
							caractereSprite2.setPosition(caractereSprite2.getPosition().x , caractereSprite2.getPosition().y +7);
						}

						if (caractereSprite2.getPosition().y < wall_Bottom15 and caractereSprite2.getPosition().y > wall_Top15 and caractereSprite2.getPosition().x < wall_Right15 and caractereSprite2.getPosition().x > wall_Left15) {
							caractereSprite2.setPosition(caractereSprite2.getPosition().x , caractereSprite2.getPosition().y +7);
						}



						if (caractereSprite2.getPosition().y > wall_Top16 and caractereSprite2.getPosition().y < wall_Bottom16 and caractereSprite2.getPosition().x < wall_Right16) {
							caractereSprite2.setPosition(caractereSprite2.getPosition().x, caractereSprite2.getPosition().y + 7);
						}


						break;


					case Keyboard::D://traiter le cas ou le boutton D est appuiyé
						
						
							caractereSprite2.setPosition(caractereSprite2.getPosition().x + 7, caractereSprite2.getPosition().y);
							
							if (caractereSprite2.getPosition().x > wall_Left2 and caractereSprite2.getPosition().y < wall_Bottom2) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x-7, caractereSprite2.getPosition().y );
							}


							if (caractereSprite2.getPosition().x > wall_Left3 and caractereSprite2.getPosition().y < wall_Bottom3) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x - 7, caractereSprite2.getPosition().y);
							}


							if (caractereSprite2.getPosition().x > wall_Left4) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x-7, caractereSprite2.getPosition().y);
							}


							if (caractereSprite2.getPosition().y > wall_Top5 and caractereSprite2.getPosition().x > wall_Left5) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x-7, caractereSprite2.getPosition().y);
							}


							if (caractereSprite2.getPosition().y < wall_Bottom10 and caractereSprite2.getPosition().y > wall_Top10 and caractereSprite2.getPosition().x > wall_Left10 and caractereSprite2.getPosition().x < wall_Right10) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x -7, caractereSprite2.getPosition().y);
							}

							if (caractereSprite2.getPosition().y < wall_Bottom11 and caractereSprite2.getPosition().y > wall_Top11 and caractereSprite2.getPosition().x < wall_Right11 and caractereSprite2.getPosition().x > wall_Left11) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x - 7, caractereSprite2.getPosition().y);
							}

							if (caractereSprite2.getPosition().y < wall_Bottom12 and caractereSprite2.getPosition().y > wall_Top12 and caractereSprite2.getPosition().x < wall_Right12 and caractereSprite2.getPosition().x > wall_Left12) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x - 7, caractereSprite2.getPosition().y );
							}

							if (caractereSprite2.getPosition().y < wall_Bottom13 and caractereSprite2.getPosition().y > wall_Top13 and caractereSprite2.getPosition().x < wall_Right13 and caractereSprite2.getPosition().x > wall_Left13) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x - 7, caractereSprite2.getPosition().y);
							}



							if (caractereSprite2.getPosition().y > wall_Top14 and caractereSprite2.getPosition().x < wall_Right14 and caractereSprite2.getPosition().x > wall_Left14) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x - 7, caractereSprite2.getPosition().y);
							}



							if (caractereSprite2.getPosition().y < wall_Bottom15 and caractereSprite2.getPosition().y > wall_Top15 and caractereSprite2.getPosition().x < wall_Right15 and caractereSprite2.getPosition().x > wall_Left15) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x -7, caractereSprite2.getPosition().y);
							}

						break;


					case Keyboard::S://traiter le cas ou le boutton S est appuiyé
						
							caractereSprite2.setPosition(caractereSprite2.getPosition().x, caractereSprite2.getPosition().y + 7);


							if (caractereSprite2.getPosition().y > wall_Top5 and caractereSprite2.getPosition().x > wall_Left5) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x , caractereSprite2.getPosition().y-7);
							}

							if (caractereSprite2.getPosition().y > wall_Top6) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x, caractereSprite2.getPosition().y-7);
							}

							if (caractereSprite2.getPosition().y > wall_Top7 and caractereSprite2.getPosition().x < wall_Right7) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x, caractereSprite2.getPosition().y-7);
							}



							if (caractereSprite2.getPosition().y < wall_Bottom10 and caractereSprite2.getPosition().y > wall_Top10 and caractereSprite2.getPosition().x > wall_Left10 and caractereSprite2.getPosition().x < wall_Right10) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x, caractereSprite2.getPosition().y-7);
							}

							if (caractereSprite2.getPosition().y < wall_Bottom11 and caractereSprite2.getPosition().y > wall_Top11 and caractereSprite2.getPosition().x < wall_Right11 and caractereSprite2.getPosition().x > wall_Left11) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x, caractereSprite2.getPosition().y - 7);
							}

							if (caractereSprite2.getPosition().y < wall_Bottom12 and caractereSprite2.getPosition().y > wall_Top12 and caractereSprite2.getPosition().x < wall_Right12 and caractereSprite2.getPosition().x > wall_Left12) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x, caractereSprite2.getPosition().y - 7);
							}

							if (caractereSprite2.getPosition().y < wall_Bottom13 and caractereSprite2.getPosition().y > wall_Top13 and caractereSprite2.getPosition().x < wall_Right13 and caractereSprite2.getPosition().x > wall_Left13) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x , caractereSprite2.getPosition().y -7);
							}

							if (caractereSprite2.getPosition().y > wall_Top14 and caractereSprite2.getPosition().x < wall_Right14 and caractereSprite2.getPosition().x > wall_Left14) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x , caractereSprite2.getPosition().y -7);
							}


							if (caractereSprite2.getPosition().y < wall_Bottom15 and caractereSprite2.getPosition().y > wall_Top15 and caractereSprite2.getPosition().x < wall_Right15 and caractereSprite2.getPosition().x > wall_Left15) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x, caractereSprite2.getPosition().y-7);
							}



							if (caractereSprite2.getPosition().y > wall_Top16 and caractereSprite2.getPosition().y < wall_Bottom16 and caractereSprite2.getPosition().x < wall_Right16) {
								caractereSprite2.setPosition(caractereSprite2.getPosition().x, caractereSprite2.getPosition().y - 7);
							}

						break;


					}



				}
				window.clear();
			}


			//canon2
			if (canonballSprite2.getPosition().y > wall_Bottom15) {
				canonballSprite2.setPosition(canonballSprite2.getPosition().x, canonballSprite2.getPosition().y - 0.04);
			}





			if (canonballSprite2.getPosition().y <= wall_Bottom15) {
				canonballSprite2.setPosition(canonballSprite2.getPosition().x, canonballSprite2.getPosition().y + 1.0f);
				while (canonballSprite2.getPosition().y >= wall_Bottom15 and canonballSprite2.getPosition().y < wall_Top6) {
					canonballSprite2.setPosition(canonballSprite2.getPosition().x, canonballSprite2.getPosition().y + 0.1);
				}
			}
			//canon3

			if (canonballSprite3.getPosition().y < wall_canon3) {
				canonballSprite3.setPosition(canonballSprite3.getPosition().x, canonballSprite3.getPosition().y + 0.017);
			}





			if (canonballSprite3.getPosition().y >= wall_canon3) {
				canonballSprite3.setPosition(canonballSprite3.getPosition().x, canonballSprite3.getPosition().y - 1.0f);
				while (canonballSprite3.getPosition().y <= wall_canon3 and canonballSprite3.getPosition().y > wall_Bottom10) {
					canonballSprite3.setPosition(canonballSprite3.getPosition().x, canonballSprite3.getPosition().y - 0.1);
				}
			}


			//canon4


			if (canonballSprite4.getPosition().x > wall_Right13) {
				canonballSprite4.setPosition(canonballSprite4.getPosition().x - 0.04, canonballSprite4.getPosition().y );
			}





			if (canonballSprite4.getPosition().x <= wall_Right13) {
				canonballSprite4.setPosition(canonballSprite4.getPosition().x + 1.0f, canonballSprite4.getPosition().y );
				while (canonballSprite4.getPosition().x >= wall_Right13 and canonballSprite4.getPosition().x < wall_Left4) {
					canonballSprite4.setPosition(canonballSprite4.getPosition().x + 0.1, canonballSprite4.getPosition().y);
				}
			}




			if (isCollide(keySprite1, caractereSprite2, 20.0f)) {
				cout << "Key1 claimed" << endl;
				keySprite1.setPosition(-1000, -1000); // Move the key sprite off-screen
				door2++;
			}




			if (isCollide(keySprite2, caractereSprite2, 35.0f)) {
				cout << "Key2 claimed" << endl;
				keySprite2.setPosition(-1000, -1000); // Move the key sprite off-screen
				door2++;
				
			}



			if (isCollide(keySprite3, caractereSprite2, 20.0f)) {
				cout << "Key1 claimed" << endl;
				keySprite3.setPosition(-1000, -1000); // Move the key sprite off-screen
				door2++;
				

			}

		
			
			window.draw(backgroundSprite2);
			if (door2 < 3)
				window.draw(red_doorSprite2);
			if (door2 == 3) {
				red_doorSprite2.setPosition(-1000, -1000);
				window.draw(green_doorSprite2);
			}
			window.draw(keySprite1);
			window.draw(keySprite2);
			window.draw(keySprite3);
			window.draw(caractereSprite2);
			window.draw(canonballSprite2);
			window.draw(canonballSprite3);
			window.draw(canonballSprite4);
			window.draw(cannonSprite2);
			window.draw(cannonSprite3);
			window.draw(cannonSprite4);
			
			window.display();
		}





		if (isCollide(canonballSprite, caractereSprite, 35.0f) or isCollide(canonballSprite2, caractereSprite2, 22.0f) or isCollide(canonballSprite3, caractereSprite2, 20.0f) or isCollide(canonballSprite4, caractereSprite2, 20.0f)) 
		{
			end_game = 1;
		}


		if (isCollide(green_doorSprite2, caractereSprite2, 35.0f) and  red_doorSprite2.getPosition().y != 248.0f)
		{
			win_game = 1;
		}



		if (win_game == 1) 
		{
			level1 = 0;
			level2 = 0;
			end_game = 0;
		
			


			Event event;
			while (window.pollEvent(event))
			{
				music2.play();

				
				
				switch (event.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::KeyPressed:
					switch (event.key.code)
					{
					case Keyboard::R:

					


						break;

					}
				}
			}

			music.stop();
		    
			window.draw(winnerSprite);
			window.display();

		
		}



		if (end_game == 1)
		{
			
			
			level1 = 0;
			level2 = 0;
			end_game = 1;


			Event event;
			while (window.pollEvent(event))
			{
				
				
				music1.play();
	
				
				switch (event.type)
				{
					
				case Event::Closed:
					window.close();
					break;
				case Event::KeyPressed:
					switch (event.key.code)
					{
					case Keyboard::R://traiter le cas ou le boutton Q est
						
						level1 = 1;
						level2 = 0;
						end_game = 0;
						door2 = 0;
						door = 0;
						caractereSprite.setPosition(70.0f, 400.0f);
						keySprite.setPosition(420.0f, 330.0f);
						red_doorSprite.setPosition(210.0f, 188.0f);
						window.draw(red_doorSprite);
						caractereSprite2.setPosition(40.0f, 250.0f);
						keySprite1.setPosition(166.0f, 203.0f);
						keySprite2.setPosition(45.0f, 330.0f);
						keySprite3.setPosition(165.0f, 537.0f);
						red_doorSprite2.setPosition(40.0f, 248.0f);
						music.play();
						
						restart = 1;

						music1.stop();
						break;

					}
				}
			}
			if (restart == 0) {
				music.stop();
				
				window.draw(gameoverSprite);
				window.display();
				level2 = 0;
			}
			if(restart==1)
				music1.stop();

		}

	}
}









