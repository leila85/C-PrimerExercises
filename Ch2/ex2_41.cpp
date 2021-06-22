/* Define the Sales_data class and re-write exercises 1.20, 1.21, 1.22
 * Exercise 1.20 pag.22: Read a set of book transactions and writing each one to the std output
 * Exercise 1.21 pag.22:Write a program which takes two books with same ISBN and prints their sum
 * Exercise 1.22 pag.22: Write a program which takes several transaction with same ISBN and prints their sum
 *
 * Example text: 0-201-78345-X 3 20
 */

#include <iostream>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;


void ex1_20(){
	
	Sales_data item;
	double price = 0;
	
	cout << "Insert transaction: bookNo, unit sold and revenue. Ctrl+C to exit" << endl;
	while(cin >> item.bookNo >> item.units_sold >> price) {
		item.revenue = item.units_sold * price;
		cout << "BookNo: " << item.bookNo << "   Unit solds:" << item.units_sold << ",   Revenue:" << item.revenue << endl;
	}

}

int ex1_22(){
	Sales_data item;
	double price = 0;
	double total_revenue = 0;
	unsigned total_sold = 0;
	std::string temp_isbn;
	
	//Ensure we have available data
	if(cin >> item.bookNo >> item.units_sold >> price)
	{
		item.revenue = item.units_sold * price;
		total_revenue = item.revenue;
		total_sold = item.units_sold;
		temp_isbn = item.bookNo;
		while(cin >> item.bookNo >> item.units_sold >> price)
		{
			if(item.bookNo == temp_isbn){
				item.revenue = item.units_sold * price;
				total_revenue += item.revenue;
				total_sold += item.units_sold;
				temp_isbn = item.bookNo;	
			}
			else{
				cout << "The book inserted are different! " << endl;
			}
		}

		cout << "Total books sold: " << total_sold << endl;
		cout << "Total revenue: " << total_revenue << endl;
		
	}
	return 0;
}

void ex1_21(){
	Sales_data item1, item2;
	double price = 0;
	
	//Ensure we have available data
	if(cin >> item1.bookNo >> item1.units_sold >> price)
	{
		item1.revenue = item1.units_sold * price;
		
		if(cin >> item2.bookNo >> item2.units_sold >> price)
		{
			item2.revenue = item2.units_sold * price;
			if(item1.bookNo == item2.bookNo){
				cout << "Total sold = " << item1.units_sold + item2.units_sold << ". Total revenue = " << item1.revenue + item2.revenue << endl;
			}
			else{
				cout << "The book inserted are different! " << endl;
			}
		}
	}	
}

int main(){
	unsigned num = 0;
	cout << "Insert number of exercise to start: 1 (ex 1_20), 2 (ex 1_21), 3 (ex 1_22)" << endl;
	cin >> num; 
	
	if(num == 1)
	{
		ex1_20();
	}
	
	if(num == 2){
		ex1_21();
	}
	
	if(num == 3){
		ex1_22();
	}
	
	return 0;	
}