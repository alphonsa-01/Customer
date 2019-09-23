#include<iostream>
#include "customer_list.h"
#include <iostream>
#include <fstream>
#include <vector>

namespace nwacc
{
	/*!
		\brief The number of data from the file.
	*/
	const int customer_list::k_number_of_data = 8;

	/*!
		\brief Method to load the data from the file to the data structure
		\param file which has the data.
	*/
	void customer_list::load_data_structure(const std::string& filename)
	{
		std::ifstream file;
		std::string word;
		std::string intermediate;

		std::string delim = "\t";

		// opening file 
		file.open(filename);

		while (getline(file, word)) {
			std::vector <std::string> tokens;
			auto start = 0U;
			auto end = word.find(delim);
			while (end != std::string::npos)
			{
				tokens.push_back(word.substr(start, end - start));
				start = end + delim.length();
				end = word.find(delim, start);
			}
			tokens.push_back(word.substr(start, end));

			if (tokens.size() >= k_number_of_data)
			{
				nwacc::customer customer(tokens[0], tokens[1], tokens[2], tokens[3], tokens[4], tokens[5], tokens[6], tokens[7]);
				customers[tokens[0]] = customer;
			}
		}
		file.close();
	}

	/*!
		\brief map which stores the customer based on their unique ID
	*/
	std::map<std::string, nwacc::customer> customers; 

	/*!
		\brief Method to create a customer from the file
		\param file which has the data.
	*/
	void customer_list::create_customer(const std::string& filename)
	{
		std::map<std::string, customer>::iterator iterate;

		std::cout << "Enter Customer Id: ";
		std::string option = " ";
		std::cin >> option;

		std::cout << "ID exists" << std::endl;
	}
	/*!
		\brief Method to view the customer existing in the database.
		\param file which has the data 
	*/
	void customer_list::read_customer(const std::string& filename)
	{
		std::cout << "Enter Customer Id: ";
		std::string option = " ";
		std::cin >> option;

		nwacc::customer customer_value = customers[option];
		std::cout << customer_value.get_first_name() << " " << customer_value.get_last_name() << std::endl;
		std::cout << customer_value.get_address() << std::endl;
		std::cout << customer_value.get_city() << ", " << customer_value.get_state() << " " << customer_value.get_postal_code() << std::endl;
	}
	/*!
	\brief Method to update the customer data
	\param file which has the data
	*/
	void customer_list::update_customer(const std::string& filename)
	{
		std::map<std::string, customer>::iterator iterate;
		std::cout << "Enter Customer Id to update: ";
		std::string option = " ";
		std::cin >> option;

		iterate = customers.find(option);
		std::cout << "No customer with that ID";

	}
	
	/*!
	\brief Method to delete the customer data
	\param file which has the data
	*/
	void customer_list::delete_customer(const std::string& filename)
	{
		std::map<std::string, customer>::iterator iterate;

		std::cout << "Enter Customer Id: ";
		std::string option = " ";
		std::cin >> option;

		iterate = customers.find(option);
		customers.erase(iterate);

		std::cout << "Customer with customer id " << option << " has been deleted";
	}
	/*!
	\brief Method to save the customer data
	\param file which has the data
	*/
	void customer_list::save_customer(const std::string& filename)
	{

		std::cout << "Enter file name ";
		std::string file;
		std::cin >> file;


		std::cout << "File saved as " << file << ".csv";
	}
}
