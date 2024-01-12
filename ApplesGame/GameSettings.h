#pragma once
#include <string>

namespace ApplesGame
{
	// Resources path
	const std::string RESOURCES_PATH = "Resources/";

	// Game settings constants
	const float PLAYER_SIZE = 30.f;
	const float APPLE_SIZE = 5.f;
	const float INITIAL_SPEED = 80.f; /*уменьшил скорость, так как и так быстро растёт*/
	const float ACCELERATION = 5.f; // For each eaten apple player speed will be increased by this value
	const int NUM_APPLES = 500;
	const unsigned int SCREEN_WIDTH = 1024;
	const unsigned int SCREEN_HEGHT = 768;
}
