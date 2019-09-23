#include<iostream>
#include "customer.h"

namespace nwacc
{
	/*!
		\brief creates an instance of customer with customer data
		\param customer's ID, first and last name, company, address,city, state and postal code
	*/
	customer::customer(const std::string& id, const std::string& first_name, const std::string& last_name, const std::string& company,
		const std::string& address, const std::string& city, const std::string& state, const std::string& postal_code)
	{
		this->set_id(id);
		this->set_first_name(first_name);
		this->set_last_name(last_name);
		this->set_company(company);
		this->set_address(address);
		this->set_city(city);
		this->set_state(state);
		this->set_postal_code(postal_code);
	}
	/*!
		\brief Gets the ID of this instance
		\return returns the ID of this instance
	*/
	std::string customer::get_id() const
	{
		return this->id_;
	}

	/*!
		\brief gets the first name of this instance
		\return returns the first name of this instance.
	*/
	std::string customer::get_first_name() const
	{
		return this->first_name_;
	}

	/*!
		\brief gets the last name of this instance
		\return returns the last name of this instance.
	*/
	std::string customer::get_last_name() const
	{
		return this->last_name_;
	}

	/*!
		\brief gets the company name of this instance
		\return returns the company name of this instance.
	*/
	std::string customer::get_company() const
	{
		return this->company_;
	}

	/*!
		\brief gets the address of this instance
		\return returns the address of this instance.
	*/
	std::string customer::get_address() const
	{
		return this->address_;
	}

	/*!
		\brief gets the city of this instance
		\return returns the city of this instance.
	*/
	std::string customer::get_city() const
	{
		return this->city_;
	}
	/*!
		\brief gets the state of this instance
		\return returns the state of this instance.
	*/
	std::string customer::get_state() const
	{
		return this->state_;
	}
	/*!
		\brief gets the postal code of this instance
		\return returns the postal code of this instance.
	*/
	std::string customer::get_postal_code() const
	{
		return this->postal_code_;
	}

	/*!
		\brief Gets the address of this instance
		\param company,address,city,state and postal code.
		\return returns  the address of this instance
	*/
	std::string customer::full_address(const std::string company, const std::string address, const std::string city, const std::string state, const std::string postal_code) const
	{
		if (company.empty())
		{
			return this->address_ + '\n' + this->city_ + '\n' + this->state_ + this->postal_code_;
		}
		else
		{
			return this->company_+ this->address_ + '\n' + this->city_ + '\n' + this->state_ + this->postal_code_;
		}
	}
	
	/*!
		\brief opoerator overloaing of equality operator.
	*/
	bool customer::operator==(const customer& input)const
	{
		return this->id_ == input.id_;
	}

	/*!
		\brief friend function for operator overloading of the insertion operator
	*/
	std::ostream& operator<<(std::ostream& out, const customer& value)
	{
		out << value.id_ << " " <<value.company_<< value.address_ << value.city_ << " " << value.state_ << value.postal_code_;
		return out;
	}

	/*!
		\brief friend function for the operator overloading of the exraction operator.
	*/
	std::istream& operator>>(std::istream& in, customer& value)
	{
		in>> value.id_ >> value.company_ >> value.address_ >> value.city_ >> value.state_ >> value.postal_code_;
		return in;
	}
	/*!
		\brief sets the value of ID of this instance.
		\param ID of this instance
	*/
	void customer::set_id(const std::string& id)
	{
		this->id_ = id;
	}
	/*!
		\brief sets the first name of this instance
		\param first name of this instance.
	*/
	void customer::set_first_name(const std::string& first_name)
	{
		this->first_name_ = first_name;
	}

	/*!
		\brief sets the last name of this instance
		\param last name of this instance.
	*/
	void customer::set_last_name(const std::string& last_name)
	{
		this->last_name_ = last_name;
	}
	/*!
		\brief sets the company of this instance
		\param company of this instance.
	*/
	void customer::set_company(const std::string& company)
	{
		this->company_ = company;
	}
	/*!
		\brief sets the address of this instance
		\param address of this instance.
	*/
	void customer::set_address(const std::string& address)
	{
		this->address_ = address;
	}

	/*!
		\brief sets the city of this instance
		\param city of this instance.
	*/
	void customer::set_city(const std::string& city)
	{
		this->city_ = city;
	}

	/*!
		\brief sets the state of this instance
		\param state of this instance.
	*/
	void customer::set_state(const std::string& state)
	{
		this->state_ = state;
	}

	/*!
		\brief sets the postal code of this instance
		\param postal code of this instance.
	*/
	void customer::set_postal_code(const std::string& postal_code)
	{
		this->postal_code_ = postal_code;
	}

}