#pragma once

#include <ostream>
class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed &operator=(const Fixed &copy);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void)	const;
	private:
		int _rawBits;
		static const int _fractBits = 8;

};

std::ostream &operator<<(std::ostream &out, const Fixed &Fixed);
