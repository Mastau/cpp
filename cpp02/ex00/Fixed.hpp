#pragma once

class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed &operator=(const Fixed &copy);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _rawBits;
		static const int _fractBits = 8;
};
