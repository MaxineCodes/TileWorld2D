#include "includes.h"











// Load Textures from disk:
bool loadTexture(sf::Texture m_texture, std::string m_filePath)
{
	if (!m_texture.loadFromFile(m_filePath))
	{
		// Return false when loading texture fails.
		return false;
	}
	// Return true if loading texture goes well.
	return true;
}