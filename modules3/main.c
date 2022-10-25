#include<stdio.h>

#include"my_math/add.h"
#include"my_math/div.h"
#include"my_print/print.h"

int main()
{

	float one,two,res_add,res_div;


	printf("please enter two numbers for calculation\n");
	scanf("%f %f",&one,&two);

    	res_add = add_two(one,two);
    	res_div = div_two(one,two);


    	print(res_add,"add of two");
    	print(res_div,"div of two");


	


	return 0;


}


