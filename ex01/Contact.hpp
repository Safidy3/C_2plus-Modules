#include <iostream>
#include <string>

class Contact {
	private :
		std::string	FirstName;
		std::string	PhoneNumber;
	public :
		const std::string	&get_first_name(void) const;
		const std::string	&get_phone_number(void) const;
		void				set_first_name(const std::string &FirstName);
		void				set_phone_number(const std::string FirstName);
};
