#include "Contact.hpp"
#include <iostream>

const std::string	&Contact::get_first_name() const
{
	return (this->FirstName);
}

const std::string	&Contact::get_phone_number() const
{
	return (this->PhoneNumber);
}

void				Contact::set_phone_number(const std::string FirstName)
{
	this->PhoneNumber = FirstName;
}
