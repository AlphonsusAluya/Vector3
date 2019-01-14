  /// <summary>
/// Vector 3 class
/// Alphonsus Aluya,
/// </summary>
#include "MyVector3.h"
#include <string.h>
#define PI           3.14159265358979323846

/// <summary>
/// Default constructor set all 3 values to zero
/// </summary>
MyVector3::MyVector3() :
	x{ 0.0 },
	y{ 0.0 },
	z{ 0.0 }
{
}

/// <summary>
/// default destructor
/// nothing to release because we only have
/// primitive type data
/// </summary>
MyVector3::~MyVector3()
{
}

/// <summary>
/// 
/// </summary>
/// <returns>the vector as a string surrounded by square brackets and separated by commas</returns>
std::string MyVector3::toString()
{
	const std::string output = "[" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + "]";
	return output;	
}

MyVector3::MyVector3(double t_x, double t_y, double t_z)
{
	x = t_x;
	y = t_y;
	z = t_z;
}

/// <summary>
/// create a vector 3 from an sf::vector3f
/// </summary>
/// <param name="t_sfVector">input vector</param>
MyVector3::MyVector3(sf::Vector3f t_sfVector)
{
	x = static_cast<double>( t_sfVector.x);
	y = static_cast<double>(t_sfVector.y);
	z = static_cast<double>(t_sfVector.z);
}

MyVector3::MyVector3(sf::Vector2i t_sfVector)
{
	x = static_cast<int>(t_sfVector.x);
	y = static_cast<int>(t_sfVector.y);
}

MyVector3::operator sf::Vector2u()
{
	return sf::Vector2u{};
}


MyVector3 MyVector3::operator+(const MyVector3 t_right) const
{
	sf::Vector3f vectorOne{};
	vectorOne.x = x + t_right.x;
	vectorOne.y = y + t_right.y;
	vectorOne.z = z + t_right.z;
	return vectorOne;
}

MyVector3 MyVector3::operator-(const MyVector3 t_right) const
{
	sf::Vector3f vectorOne{};
	vectorOne.x = x - t_right.x;
	vectorOne.y = y - t_right.y;
	vectorOne.z = z - t_right.z;
	return vectorOne;
}

MyVector3 MyVector3::operator*(const double t_scalar) const
{
	sf::Vector3f vectorOne{};
	vectorOne.x = x * t_scalar;
	vectorOne.y = y * t_scalar;
	vectorOne.z = z * t_scalar;
	return vectorOne;
}

MyVector3 MyVector3::operator/(const double t_divisor) const
{
	sf::Vector3f vectorOne{};
	vectorOne.x = x / t_divisor;
	vectorOne.y = y / t_divisor;
	vectorOne.z = z / t_divisor;
	return vectorOne;
}

MyVector3 MyVector3::operator+=(const MyVector3 t_right)
{
	
	return MyVector3(x += t_right.x, y += t_right.y, z += t_right.z);
	
}

MyVector3 MyVector3::operator-=(const MyVector3 t_right)
{
	
	return MyVector3(x -= t_right.x, y -= t_right.y, z -= t_right.z);
}

bool MyVector3::operator==(const MyVector3 t_right) const
{
	sf::Vector3f vectorOne{};
	if (vectorOne.x == t_right.x && vectorOne.y == t_right.y && vectorOne.z == t_right.z)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool MyVector3::operator!=(const MyVector3 t_right) const
{
	sf::Vector3f vectorOne{};
	if (vectorOne.x == t_right.x || vectorOne.y == t_right.y || vectorOne.z == t_right.z)
	{
		return true;
	}
	else
	{
		return false;
	}
}

