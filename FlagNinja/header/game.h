#pragma once


class Game {

	std::vector<Player*> players;
	std::vector<Platform*> platforms;
	std::vector<Bullet*> bullets;

	sf::Vector2f cameracamera = sf::Vector2f(0.0f, 0.0f);
	sf::Vector2f mousePosition;

public:

	Timer timer;
	sf::RenderWindow window = sf::RenderWindow(sf::VideoMode(1200, 800), "Flag Ninja");

	Game();
	~Game();

	// getters for object arrays
	std::vector<Player*>& getPlayers();
	const std::vector<Platform*>& getPlatforms();

	void adjustCameraPosition();
	void readMap(int num);  // read and load map file
	void handlePlayers();   // handle player movement
	void drawObjects();     // draw objects
	void update();  // update values
	void handleSfmlEvents();  // handle sfml specific events
};