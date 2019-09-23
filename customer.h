#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include<iostream>
#include<string>

/**
 * \brief The standard nwacc namespace.
 *
 * The namespace used for all nwacc application code.
 */
namespace nwacc
{
	/*!
	\brief Represents a customer object with customer data and methods to determine the state of customer
		Represents a customer where the object stores all the customer data such as id,first_name,last name, company, address,city state and postal code.
		This class also contains the methods to get address and the operator overload for equality and insertion and extraction operators.
	*/
	class customer
	{
	public:
		/*!
		\brief creates an instance of customer with customer data
		\param customer's ID, first and last name, company, address,city, state and postal code
		*/
		customer( const std::string& id="", const std::string& first_name = "", const std::string& last_name= "", const std::string& company="",
			const std::string& address="", const std::string& city="",const std::string& state="",const std::string& postal_code="");
		/*!
		\brief Gets the ID of this instance
		\return returns the ID of this instance
		*/
		std::string get_id() const;
		/*!
		\brief gets the first name of this instance
		\return returns the first name of this instance.
		*/
		std::string get_first_name() const;
		/*!
		\brief gets the last name of this instance
		\return returns the last name of this instance.
		*/
		std::string get_last_name() const;
		/*!
		\brief gets the company name of this instance
		\return returns the company name of this instance.
		*/
		std::string get_company() const;
		/*!
		\brief gets the address of this instance
		\return returns the address of this instance.
		*/
		std::string get_address() const;
		/*!
		\brief gets the city of this instance
		\return returns the city of this instance.
		*/
		std::string get_city() const;
		/*!
		\brief gets the state of this instance
		\return returns the state of this instance.
		*/
		std::string get_state() const;
		/*!
		\brief gets the postal code of this instance
		\return returns the postal code of this instance.
		*/
		std::string get_postal_code() const;

		/*!
		\brief Gets the address of this instance
		\param company,address,city,state and postal code.
		\return returns  the address of this instance
		*/
		std::string full_address(const std::string company,const std::string address,const std::string city,const std::string state,const std::string postal_code) const;
		/*!
		\brief opoerator overloaing of equality operator.
		*/
		bool operator==(const customer& input)const;

		/*!
		\brief friend function for operator overloading of the insertion operator
		*/
		friend std::ostream& operator<<(std::ostream& out, const customer& value);

		/*!
		\brief friend function for the operator overloading of the exraction operator.
		*/

		friend std::istream& operator>>(std::istream& in, customer& value);

	private:
		/*!
		\brief sets the value of ID of this instance.
		\param ID of this instance
		*/
		void set_id(const std::string& id);

		/*!
		\brief sets the first name of this instance
		\param first name of this instance.
		*/
		void set_first_name(const std::string& first_name);

		/*!
		\brief sets the last name of this instance
		\param last name of this instance.
		*/

		void set_last_name(const std::string& last_name);

		/*!
		\brief sets the company of this instance
		\param company of this instance.
		*/
		void set_company(const std::string& company);

		/*!
		\brief sets the address of this instance
		\param address of this instance.
		*/
		void set_address(const std::string& address);

		/*!
		\brief sets the city of this instance
		\param city of this instance.
		*/

		void set_city(const std::string& city);

		/*!
		\brief sets the state of this instance
		\param state of this instance.
		*/
		void set_state(const std::string& state);

		/*!
		\brief sets the postal code of this instance
		\param postal code of this instance.
		*/
		void set_postal_code(const std::string& postal_code);

		/*!
		\brief The ID of this instance
		ID is customer's unique identification number
		*/
		std::string id_{};
		/*!
		\brief The first name of this instance
		first name of the customer
		*/
		std::string first_name_;
		/*!
		\brief last name of this instance
		last name of customer
		*/
		std::string last_name_;
		/*!
		\brief company name of this instance
		This is the company name of the customer
		*/
		std::string company_;
		/*!
		\brief address of this instance
		This is the address of the customer.
		*/
		std::string address_;
		/*!
		\brief city of this instance
		This is the city of the customer.
		*/
		std::string city_;
		/*!
		\brief state of this instance
		This is the state of the customer
		*/
		std::string state_;
		/*!
		\brief Postal code of this instance
		This is the postal code of the customer.
		*/
		std::string postal_code_{};

	};


}
#endif