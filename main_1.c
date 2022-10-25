#include<stdio.h>

float add_two(float one,float two){
    return one+two;
}

float div_two(float one,float two){
    return one/two;
}


void print(float result, char *type){
    printf("%s %f",type,result);
}



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


