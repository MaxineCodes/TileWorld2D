#include "world.h"



sf::Texture texture;

void testFunction() 
{
    if (!texture.loadFromFile("Sprites/Prototype/prototype_grass.png"))
    {
        // error...
    }

    tile m_tile;
    m_tile.applyTexture(texture);

    gameapp::renderQueue.push_back(m_tile.sprite);
}