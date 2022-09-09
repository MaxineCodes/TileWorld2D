#include "gameSettings.h"
#include "gameApp.h"
#include "renderManager.h"

// Declare renderManager Class as "renderer"
renderManager renderer;
// Declare gameSettings Class as "settings"
gameSettings settings;

// ----------------------------------------------------------------------
// Private Functions:
// 

void gameapp::initializeVariables() 
{
	// Initialize window pointer
	this->window = nullptr;
}

void gameapp::initializeWindow()
{

	this->videoMode.width = settings.windowWidth;
	this->videoMode.height = settings.windowHeight;

	this->window = new sf::RenderWindow(this->videoMode, settings.windowTitle);
}

// ----------------------------------------------------------------------
// Constructor / Destructor:
// 

// Game Constructor
gameapp::gameapp() 
{
	this->initializeVariables();
	this->initializeWindow();
}

// Game Destructor
gameapp::~gameapp() 
{
	delete this->window;
}

// ----------------------------------------------------------------------
// Public Functions:
// 

// Return window is running
const bool gameapp::isRunning() const
{
	return this->window->isOpen();
}


// Event handling
void gameapp::events()
{
	// Poll for events
	while (this->window->pollEvent(event)) 
	{
		switch (this->event.type) 
		{
			// Close when window is closed
			case sf::Event::Closed:
				this->window->close();
				break;

			// Close when Escape is pressed
			case sf::Event::KeyPressed:
				if (this->event.key.code == sf::Keyboard::Escape) 
				{
					this->window->close();
				}
				break;
		}
	}
}


void gameapp::update()
{
	// Check for events
	this->events();
}

void gameapp::render() 
{
	// Clear everything, with Magenta background
	this->window->clear(sf::Color::Magenta);

	// Declare renderManager Class
	renderManager renderer;
	renderer.render();

	// Draw calls here
	this->window->draw(renderer.renderOutput);

	// Display to window
	this->window->display();
}