#ifndef GAME_H
#define GAME_H

#include <string>
#include <sstream>

#include <iostream>
#include "GL/glew.h"
#include <GL/wglew.h>

#include <glm/glm/glm.hpp>
#include <glm/glm/gtc/matrix_transform.hpp>

#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

#include <Debug.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

using namespace std;
using namespace sf;
using namespace glm;

class Game
{
public:
	Game();
	Game(sf::ContextSettings settings);
	~Game();
	void run();
private:
	RenderWindow window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();
	void drawCube(mat4 &model);
};

#endif