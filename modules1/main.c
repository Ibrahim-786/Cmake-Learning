#include<stdio.h>

#include"add.h"
#include"div.h"
#include"print.h"

int main()
{


	float one,two,res_add,res_div;


	printf("please enter two numbers\n");
	scanf("%f %f",&one,&two);

    res_add = add_two(one,two);
    res_div = div_two(one,two);


    print(res_add,"add of two");
    print(res_div,"div of two");


	


	return 0;


}


