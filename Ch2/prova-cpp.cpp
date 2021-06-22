/* Define the Sales_data class and re-write exercises 1.20, 1.21, 1.22
 * Exercise 1.20 pag.22: Read a set of book transactions and writing each one to the std output
 * Exercise 1.21 pag.22:Write a program which takes two books with same ISBN and prints their sum
 * Exercise 1.22 pag.22: Write a program which takes several transaction with same ISBN and prints their sum
 *
 * Example text: 0-201-78345-X 3 20
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

void ex1_20(){
	
	Sales_data item;
	double price = 0;
	
	cout << "Insert transaction: bookNo, unit sold and revenue. Ctrl+C to exit" << endl;
	while(cin >> item.bookNo >> item.units_sold >> price) {
		item.revenue = item.units_sold * price;
		cout << "BookNo: " << item.bookNo << "   Unit solds:" << item.units_sold << ",   Revenue:" << item.revenue << endl;
	}

}

int ex1_21(){
	Sales_data total, d;
  double price = 0;
  if (std::cin >> total.bookNo >> total.units_sold >> price) {
    total.revenue = total.units_sold * price;
    while (std::cin >> d.bookNo >> d.units_sold >> price) {
      d.revenue = d.units_sold * price;
      if (total.bookNo == d.bookNo) {
        total.units_sold += d.units_sold;
        total.revenue += d.revenue;
      } else {
        std::cout << total.bookNo << " "
                  << total.units_sold << " "
                  << total.revenue << " ";
        if (total.units_sold != 0)
          std::cout << total.revenue / total.units_sold << std::endl;
        else
          std::cout << "(no sales)" << std::endl;
        total.bookNo = d.bookNo;
        total.units_sold = d.units_sold;
        total.revenue = d.revenue;
      }
    }
    std::cout << total.bookNo << " "
              << total.units_sold << " "
              << total.revenue << " ";
    if (total.units_sold != 0)
      std::cout << total.revenue / total.units_sold << std::endl;
    else
      std::cout << "(no sales)" << std::endl;
  } else {
    std::cerr << "No data for item!" << std::endl;
    return -1;
  }
  return 0;
}

int main(){
	
	//ex1_20();
	ex1_21();
	return 0;	
}