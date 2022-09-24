#include "gameSettings.h"
#include "gameApp.h"
#include "world.h"


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


void gameapp::initializeVariables() 
{
	// Initialize window pointer
	this->window = nullptr;
}

// Initialize a window object
void gameapp::initializeWindow()
{
	// Declare gameSettings Class as "settings"
	gameSettings settings;

	this->videoMode.width = settings.windowWidth;
	this->videoMode.height = settings.windowHeight;

	this->window = new sf::RenderWindow(this->videoMode, settings.windowTitle);
}

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

// Game updates
void gameapp::update()
{
	// Check for events
	this->events();

	world::testFunction();
}

// Game sprite rendering
void gameapp::render() 
{
	// Renders every Sprite object in class vector renderQueue 

	// Clear everything, with Magenta colour background (Magenta is easier to debug visual issues with)
	this->window->clear(sf::Color::Magenta);

	// Iterate on each item in renderQueue and draw
	int renderQueueSize = std::size(renderQueue);
	for (int i = 0; i < renderQueueSize; i++) 
	{
		this->window->draw(renderQueue[i]);
	}

	// Display to window
	this->window->display();
}