#pragma once
#include "settings.h"
#include "player.h"

class 
	Bullet {
private:
	sf::Sprite sprite;
	sf::Texture texture;
	sf::Vector2f speed;
	Player player;
public:
	enum MeteorSize { Small, Average, Big };
	Bullet() {
		texture.loadFromFile(bullet_file_name);
		//sprite.setPosition(pos);
		sprite.setTexture(texture);
	}
	void update() {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
			sprite.move(speed);
		}
		
	}

	
};