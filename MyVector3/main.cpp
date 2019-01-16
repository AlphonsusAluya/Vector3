/// <summary>
/// Alphonsus
/// 1 week
/// 2 weeks
/// issues: none
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
	MyVector3 vectorTwo{};
	MyVector3 vectorThree{};

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

	vectorOne = sfV2f;
	std::cout << "[1.2     ,-3.2     ,1.9     ]" << std::endl;
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "sf::vector3f constructor" << std::endl;
	std::cout << "----------------------------" << std::endl;

	sf::Vector3i sfV3i = { 2,-6,8 };

	vectorOne = sfV3i;
	std::cout << "[2     ,-6     ,8     ]" << std::endl;
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "sf::vector3i constructor" << std::endl;
	std::cout << "----------------------------" << std::endl;

	sf::Vector2i sfV2i = { 3, 4 };

	vectorOne = sfV2i;
	std::cout << "[3  , 4]" << std::endl;
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "sf::vector2i constructor" << std::endl;
	std::cout << "----------------------------" << std::endl;

	sf::Vector2u sfV2u = { 6, -9 };

	vectorOne = sfV2u;
	std::cout << "[6  , -9]" << std::endl;
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "sf::vector2u constructor" << std::endl;
	std::cout << "----------------------------" << std::endl;

	vectorOne = { 3, 5, 8 };
	vectorTwo = { 4, 7, 3 };
	vectorThree = vectorOne + vectorTwo;

	std::cout << "[7, 12, 11]" << std::endl;
	std::cout << vectorThree.toString() << std::endl;
	std::cout << "+operator " << std::endl;
	std::cout << "-----------------------------" << std::endl;

	vectorOne = { 5, 6, 7 };
	vectorTwo = { 2, 4, 3 };
	vectorThree = vectorOne - vectorTwo;

	std::cout << "[3, 2, 4]" << std::endl;
	std::cout << vectorThree.toString() << std::endl;
	std::cout << "-operator " << std::endl;
	std::cout << "-----------------------------" << std::endl;

	vectorOne = { 3, 5, 6 };
	vectorTwo = vectorOne * 3;

	std::cout << "[9, 15, 18]" << std::endl;
	std::cout << vectorTwo.toString() << std::endl;
	std::cout << "*operator " << std::endl;
	std::cout << "-----------------------------" << std::endl;

	vectorOne = { 12, 15, 6 };
	vectorTwo = vectorOne / 3;

	std::cout << "[4, 3, 2]" << std::endl;
	std::cout << vectorTwo.toString() << std::endl;
	std::cout << "/operator " << std::endl;
	std::cout << "-----------------------------" << std::endl;



	
	std::system("pause");
	return EXIT_SUCCESS;
}


