#include <stdio.h>
#include "TryCatch.h"
#include "CException.h"


void nastyFunction(){
	//Because I am nasty, I am going to throw something
	Throw(1234);
	
}

void trying2BeNice(){
	
	int exception;
	
	//Because I am nasty, I am going to throw something
	Try{
	nastyFunction();
	}Catch(exception){
		printf("I know you are nasty , but is fine \n");
		//Re-throw
		Throw(12);
		}
}



void justTryingOutTryCatch(){
	
	int e;
	printf("No error 	   : %d\n",NO_ERROR);
	printf("ERR_FIRST_NUM_NEG 	: %d\n",ERR_FIRST_NUM_NEG);
	printf("ERR_SECOND_NUM_NEG	: %d\n",ERR_SECOND_NUM_NEG);
	printf("ERR_BOTH_NUM_NEG	: %d\n",ERR_BOTH_NUM_NEG);
	
	
	Try{
		Try{
			//Any number statement to try
			printf("Trying...\n");
			//Throw(2);
			trying2BeNice();
		
		}Catch(e){
			printf("an exception has been thrown :%d\n",e);
			//I think i like to throw...
			Throw(45);
		
		}
	
	}Catch(e){
		printf("you have rethrown this :%d\n",e);
	}
	printf("Hello World !!");
}

int addPositiveNumber(int value1,int value2){

	if (value1 < 0 && value2 < 0)
		Throw(ERR_BOTH_NUM_NEG);
		
	if(value1 > 0 && value2 > 0)
		return value1+value2;
	if (value1 <= 0)
		Throw(ERR_FIRST_NUM_NEG);
	if (value2 <= 0)
		Throw(ERR_SECOND_NUM_NEG);
	
	Throw(NO_ERROR);
}


