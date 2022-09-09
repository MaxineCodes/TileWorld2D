#include "renderManager.h"

/*
renderManager handles all the rendering seperately from the main game window.
Render layers seperately, such as Game, and GUI.

-Receive objects that must be rendered, for each layer.
-Render frames off-screen to a texture, for each layer.
-Then composite these textures together, and send to the window in gameApp.

This allows the GUI and Game to be easily seperated.
It also allows for altering the output frames in post.
*/


// Private Functions 

void renderManager::initializeVariables()
{
	//this->renderOutput = nullptr;
	compositedTexture;
	this->renderGameTexture = nullptr;
	this->renderGUITexture = nullptr;
}

// Public Functions

// Constructor
renderManager::renderManager()
{
	this->initializeVariables();
}

// Destructor
renderManager::~renderManager()
{
}

void renderManager::render()
{


	//sf::Texture compositedTexture 
	//this->renderOutput = new sf::Sprite();


	sf::RenderTexture renderTexture;
	if (!renderTexture.create(500, 500))
	{
		// error...
	}

	// drawing uses the same functions
	renderTexture.clear(sf::Color::Black);
	//renderTexture.draw(sprite); // or any other drawable
	renderTexture.display();

	// get the target texture (where the stuff has been drawn)
	this->compositedTexture = renderTexture.getTexture();
	//this->compositedTexture = renderTexture.getTexture();

	// draw it to the window
	renderOutput = sf::Sprite(compositedTexture);
}

// Render Game Objects
void renderManager::renderGame()
{
	sf::RenderTexture renderTexture;
	if (!renderTexture.create(500, 500))
	{
		// error...
	}

	// drawing uses the same functions
	renderTexture.clear(sf::Color::Black);
	//renderTexture.draw(sprite); // or any other drawable
	renderTexture.display();

	// get the target texture (where the stuff has been drawn)
	const sf::Texture& texture = renderTexture.getTexture();

	// draw it to the window
	sf::Sprite sprite(texture);

}

// Render Game GUI
void renderManager::renderGUI()
{

}


void renderManager::compositeRenders()
{
}
