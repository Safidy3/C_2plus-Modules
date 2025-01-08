#include <iostream>
#include <string>

class Contact {
	private :
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	Secret;
		std::string	PhoneNumber;
	public :
		const std::string	&get_first_name(void) const;
		const std::string	&get_last_name(void) const;
		const std::string	&get_nick_name(void) const;
		const std::string	&get_secret(void) const;
		const std::string	&get_phone_number(void) const;
		void				set_first_name(const std::string FirstName);
		void				set_last_name(const std::string FirstName);
		void				set_nick_name(const std::string FirstName);
		void				set_secret(const std::string FirstName);
		void				set_phone_number(const std::string PhoneNumber);
};
