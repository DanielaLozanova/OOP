#include <iostream>
#include"Header.h"

int main() 
{
	Box b(2.3, 3.5, 5.6);
	b.print();
	cout << "b volume" << b.volume() << endl;
	Material mat("Glass", true);
	mat.print();
	Element elem(mat, 7.2);
	elem.print();
	Item item(b, "Fmi", 6.23, 2);
	item.addItem(elem);
	Element elem1(mat, 1.2);
	Element elem2(mat, 0.5);
	item.addItem(elem1);
	item.addItem(elem2);
	item.print();
	item.save("File.txt");
	Furniture fur(b, "FXF", 4.1, 2, "Mar");
	cout << "Cost shipping: " <<fur.costShiping()<< endl;
	Shoes shoe(b,"SY",5.4,2,true);
	shoe.print();
	CourierCompany cc(1);
	cc.addItemToCC(item);
	//cc.printCC();
	system("pause");
	return 0;
}