#include "Inventory.h"
#include <iostream>

Inventory::Inventory(){
	m_itemNumber = 0;
	m_quantity = 0;
	m_cost = 0;
}

Inventory::Inventory(int itemNum, int quantity, double cost){
	testNegVal(m_itemNumber, itemNum);
	testNegVal(m_quantity, quantity);
	testNegVal(m_cost, cost);
}

void Inventory::setItemNumber(int itemNum){
	testNegVal(m_itemNumber, itemNum);
}

void Inventory::setQuantity(int quantity){
	testNegVal(m_quantity, quantity);
}

void Inventory::setCost(double cost){
	testNegVal(m_cost, cost);
}

int Inventory::getItemNumber(){
	return m_itemNumber;
}

int Inventory::getQuantity(){
	return m_quantity;
}

double Inventory::getCost(){
	return m_cost;
}

double Inventory::getTotalCost(){
	return m_cost * m_quantity;
}

template <class T>
void Inventory::testNegVal(T &member, T input){
	if (input < 0){
		std::cout << "Input cannot be less than 0. Value unchanged." << std::endl;
	}
	else {
		member = input;
	}
}
