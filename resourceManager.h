#pragma once

#include "includes.h"

class resourceManager
{
	private:

		void initializeVariables();
		//void initializeTextures();
		void loadTexture();

	public:

		// Textures
		sf::Texture prototype_grass;

		// Constructor & Destructor
		resourceManager();
		virtual ~resourceManager();

		// Loading Functions
		void loadResources();
};

