#pragma once

class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed &operator=(const Fixed &copy);
		int	getRawBits() const;
		void setRawBits(int const raw);
	private:
		int _rawBits;

};
