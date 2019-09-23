#ifndef CUSTOMER_LIST_H_
#define CUSTOMER_LIST_H_

#include <map>
#include <string>
#include "customer.h"
namespace nwacc
{
	class customer_list
	{
	public:
		/*!
		\brief The number of data from the file.
		*/
		static const int k_number_of_data;
		/*!
		\brief Method to load the data from the file to the data structure
		\param file which has the data.
		*/
		void load_data_structure(const std::string& filename);
		/*!
		\brief Method to create a customer from the file
		\param file which has the data.
		*/
		void create_customer(const std::string& filename);
		/*!
		\brief Method to view the customer existing in the database.
		\param file which has the data particular 
		*/
		void read_customer(const std::string& filename);
		/*!
		\brief Method to update the customer data
		\param file which has the data
		*/
		void update_customer(const std::string& filename);
		/*!
		\brief Method to delete the customer data
		\param file which has the data
		*/
		void delete_customer(const std::string& filename);
		/*!
		\brief Method to save the customer data
		\param file which has the data
		*/
		void save_customer(const std::string& filename);

	private:
		/*!
		\brief map which stores the customer based on their unique ID
		*/
		std::map<std::string, nwacc::customer> customers;
		
	};


}

#endif
