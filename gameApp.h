#pragma once

#include "includes.h"


// game Class
class gameapp
{
private:

	// Private Game Variables
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event event;

	// Private Game Functions
	void initializeVariables();
	void initializeWindow();

public:

	// Constructor & Destructor
	gameapp();
	virtual ~gameapp();

	// Accessor
	const bool isRunning() const;

	// Public Game Functions
	void events();
	void update();
	void render();

};

