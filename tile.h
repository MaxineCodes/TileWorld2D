#pragma once

#include "includes.h"

// tile.h creates the tile class.
// It also includes a function to loads textures from disk.


class tile 
{
	public:
		sf::Sprite tile;

		int ID = 0;

		int resolution = 16;
		int size = 32;

		int positionX = 0;
		int positionY = 0;

		// Initialize texture:
		//sf::Texture tileTexture;

		void applyTexture(sf::Texture tileTexture) 
		{
			tile.setTexture(tileTexture);
		}
};
