#pragma once

#include <iostream>
namespace trigger
{
	namespace math
	{

		struct vector2
		{

			float x, y;

			vector2();
			vector2(const float &x, const float &y);

			vector2& add(const vector2& other);
			vector2& subtract(const vector2& other);
			vector2& multiply(const vector2& other);
			vector2& divide(const vector2& other);


		};

		std::ostream &operator<<(std::ostream &stream, const vector2 &vector);


}
}