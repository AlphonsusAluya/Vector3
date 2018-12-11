/// <summary>
/// Your name here
/// estimate
/// time spent
/// issues
/// 
/// </summary>
#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 


#include "MyVector3.h"
#include <SFML\Graphics.hpp>
#include <string>



// you need more comments for Pete's sake

int main()
{
	MyVector3 vectorOne{};

	std::cout << "[0.0     ,0.0     ,0.0     ]" << std::endl;
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "Null / default constructor" << std::endl;
	std::cout << "----------------------------" << std::endl;
	sf::Vector3f sfV3f{ 1.2f, -3.2f,1.9f };

	vectorOne = sfV3f;
	std::cout << "[1.2     ,-3.2     ,1.9     ]" << std::endl;
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "sf::vector3f constructor" << std::endl;
	std::cout << "----------------------------" << std::endl;
	
	sf::Vector2f sfV2f = vectorOne;
	// check this with debugger
	// sfV2f should be {1.2~,-3.2~}
	
	std::system("pause");
	return EXIT_SUCCESS;
}


