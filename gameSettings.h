#pragma once

#include <string>

// General settings variables that apply to the game.
class gameSettings
{
public:

    // Window Settings
    std::string windowTitle = "window";
    int windowWidth = 800, 
        windowHeight = 800;
    const int frameRateLimit = 60;

    // World Settings
    // Size of the tiles on screen in pixels (Square) essentially the "zoom"
    int tileScale = 64;
    // Size of the tile grid
    const int worldSizeX = 50, worldSizeY = 50;
};