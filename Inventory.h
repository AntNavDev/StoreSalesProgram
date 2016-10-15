#ifndef INVENTORY_H_
#define INVENTORY_H_

class Inventory{
private:
	int    m_itemNumber = 0,
		   m_quantity = 0;
	double m_cost = 0;
public:
	Inventory();
	Inventory(int itemNum, int quantity, double cost);
	
	void setItemNumber(int itemNum);
	void setQuantity(int quantity);
	void setCost(double cost);
	
	int getItemNumber();
	int getQuantity();
	double getCost();
	double getTotalCost();

	template <class T>
	void testNegVal(T &member, T test);
};

#endif