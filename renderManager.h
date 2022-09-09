#pragma once

#include "includes.h"

class renderManager
{

	private:

		void initializeVariables();

	public:

		// Final Sprite
		sf::Sprite renderOutput;
		// Render Layers
		sf::RenderTexture* renderGameTexture;
		sf::RenderTexture* renderGUITexture;
		// Render Textures
		const sf::Texture compositedTexture;

		// Constructor & Destructor
		renderManager();
		virtual ~renderManager();

		// Rendering Functions
		void render();

		void renderGame();
		void renderGUI();

		void compositeRenders();
};

