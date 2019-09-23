#include "customer_list.h"

int main()
{
	
	{

		nwacc::customer_list customers;
		customers.load_data_structure("TextFile1.txt");

		std::cout << "Menu : (C)reate, (R)ead/(V)iew,(U)pdate,(D)elete,(S)ave" << std::endl;
		std::cout << "Enter option:";
		auto option = ' ';
		std::cin >> option;


		switch (option)
		{
		case 'C':
				customers.create_customer("TextFile1.txt");
				break;
		case 'R':
			customers.read_customer("TextFile1.txt");
			break;
		case 'V':
			customers.read_customer("TextFile1.txt");
			break;
		case 'U':
			customers.update_customer("TextFile1.txt");
			break;
		case 'D':
			customers.delete_customer("TextFile1.txt");
			break;
		case 'S':
				customers.save_customer("TextFile1.txt");
				break;
		default:
			std::cout << "Invalid option! Try again :";
			break;
		}
		
	}
	return 0;
}