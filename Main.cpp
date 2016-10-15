#include <iostream>
#include "Inventory.h"

int main(){

	Inventory test(7, 12, 7.99);
	

	std::cout << "Item No: " << test.getItemNumber() << "\nQuantity In Stock: " << test.getQuantity() << "\nCost: " << test.getCost() << "\nTotal Cost: " << test.getTotalCost() << std::endl;
	test.setItemNumber(42);
	test.setQuantity(99);
	test.setCost(14.99);
	std::cout << "Item No: " << test.getItemNumber() << "\nQuantity In Stock: " << test.getQuantity() << "\nCost: " << test.getCost() << "\nTotal Cost: " << test.getTotalCost() << std::endl;

	

	system("pause");
	return 0;
}