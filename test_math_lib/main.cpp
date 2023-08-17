#include<iostream>
#include"my_math/add.h"
#include"my_math/div.h"


int main()
{



	float one , two, res_add, res_div ;

	std::cout<<"enter 2 number \n";

	std::cin>>one>>two;
	


	res_add= add_two(one, two);
	res_div= div_two(one, two);


	std::cout<<"addition \t"<<res_add<<std::endl;
	std::cout<<"div \t"<<res_div<<std::endl;



	return 0;
}
