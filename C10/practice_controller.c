
#include <stdio.h>




typedef struct practice_controller{

	void (* practice_one)(unsigned int test);
	void (* practice_two)(void);

}practice_controller,*p_practice_controller;

void practice_init(void){

	practice_controller.practice_one = 123;


}



