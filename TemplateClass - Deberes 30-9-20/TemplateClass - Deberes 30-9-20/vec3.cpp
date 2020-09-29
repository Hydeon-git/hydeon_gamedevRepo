#include<string.h>
#include <math.h> 

template<typename T>
class vec3
{
public:
	T int x, y, z;
	char name[10];

	vec3(){}
	vec3(int _x, int _y, int _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}
	vec3(char _name[10])
	{
		strcpy(name, _name);
	}

	bool operator + (int sum)
	{
		vec3 vector1;

		vector1.x + sum;
		vector1.y + sum;
		vector1.z + sum;
	}
	bool operator - (int sum)
	{
		vec3 vector1;

		vector1.x - sum;
		vector1.y - sum;
		vector1.z - sum;
	}
	bool operator += (const vec3& other)
	{
		vec3 vector1;

		vector1.x += other.x;
		vector1.y += other.y;
		vector1.z += other.z;
	}
	bool operator -= (const vec3& other)
	{
		vec3 vector1;

		vector1.x -= other.x;
		vector1.y -= other.y;
		vector1.z -= other.z;
	}
	bool operator = (const vec3& other)
	{
		bool isEqual = (x = other.x) && (y = other.y) && (z = other.z);
	}
	bool operator == (const vec3& other)
	{
		if ((x == other.x) && (y == other.y) && (z == other.z))
		{
			return true;
		}
		else
		{
			return false;
		}		
	}

	void Normalize()
	{
		int lenght = sqrt((x * 2) + (y * 2) + (z * 2));
		vec3 normVec((x/lenght), (y / lenght), (z / lenght));
	}
	void Zero()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	bool isZero()
	{
		if ((x == 0) && (y == 0) && (z == 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void DistanceTo(vec3 vector1)
	{
		sqrt((x - vector1.x) + (y - vector1.y) + (z - vector1.z));
	}
};