/*
 *@author:liucheng
 *create: 2018-10-26-16:55
 *function: to solve the problem of practice 1.23-1.25 in C++ Primer
*/


#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total; //save current book
    
    if (std::cin >> total){
	Sales_item tran; //sava next book
	while(std::cin >> tran)
	    if (total.isbn() == tran.isbn()){
		//if we still deal with the same book
	        total = total + tran; //update total sales
	    }else{
		//print the last book
		std::cout << total  << std::endl;
		total = tran; //change total into a new book
	    }
	//print the last book
	std::cout << total  << std::endl;
    }
    //warning for no data
    else{ std::cout << "No Data?!" << std::endl; }

    return 0;
}
