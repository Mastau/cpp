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
		bool operator>(const Fixed &copy) const;
		bool operator<(const Fixed &copy) const;
		bool operator>=(const Fixed &copy) const;
		bool operator<=(const Fixed &copy) const;
		bool operator==(const Fixed &copy) const;
		/* bool operator===(const Fixed &copy) const; */
		/* bool operator!==(const Fixed &copy) const; */
		bool operator!=(const Fixed &copy) const;
		Fixed operator+(const Fixed &copy) const;
		Fixed operator-(const Fixed &copy) const;
		Fixed operator*(const Fixed &copy) const;
		Fixed operator/(const Fixed &copy) const;
		Fixed &operator--();
		Fixed operator--(int nb);
		Fixed &operator++();
		Fixed operator++(int nb);
		
		static Fixed &min(Fixed &nb1, Fixed &nb2);
		static const Fixed &min(const Fixed &nb1, const Fixed &nb2);
		static Fixed &max(Fixed &nb1, Fixed &nb2);
		static const Fixed &max(const Fixed &nb1, const Fixed &nb2);

		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void)	const;
	private:
		int _rawBits;
		static const int _fractBits = 8;

};

std::ostream &operator<<(std::ostream &out, const Fixed &Fixed);
