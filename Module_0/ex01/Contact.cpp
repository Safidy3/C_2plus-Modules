#include "Contact.hpp"
#include <iostream>

const std::string	&Contact::get_first_name() const
{
	return (this->FirstName);
}

const std::string	&Contact::get_last_name() const
{
	return (this->LastName);
}

const std::string	&Contact::get_nick_name() const
{
	return (this->NickName);
}

const std::string	&Contact::get_secret() const
{
	return (this->Secret);
}

const std::string	&Contact::get_phone_number() const
{
	return (this->PhoneNumber);
}

void	Contact::set_first_name(const std::string FirstName)
{
	this->FirstName = FirstName;
}

void	Contact::set_last_name(const std::string LastName)
{
	this->LastName = LastName;
}

void	Contact::set_nick_name(const std::string NickName)
{
	this->NickName = NickName;
}

void	Contact::set_secret(const std::string Secret)
{
	this->Secret = Secret;
}

void	Contact::set_phone_number(const std::string PhoneNumber)
{
	this->PhoneNumber = PhoneNumber;
}
