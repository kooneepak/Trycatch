#include "unity.h"
#include "TryCatch.h"
#include "CException.h"
#include "Person.h"
#include "Person.h"

void setUp(){}
void tearDown(){}



//#define MAX 10;
#ifndef MAX 
	#define MAX 30
	
#endif //max

void test_justTryingOutTryCatch_should_throw_exception(){
	
	struct Person_t person;
	printf("MAx: %d \n", MAX);
	justTryingOutTryCatch();

}

void test_addPositiveNumber_should_add_two_positive_values_correctly(){
		int result = addPositiveNumber(4,7);
		TEST_ASSERT_EQUAL(11,result);
}

void test_addPositiveNumber_should_add_throw_an_exception_indication_first_value_is_negative(){
	int e;
	Try{
		int result = addPositiveNumber(-4,7);
	}Catch(e){
		TEST_ASSERT_EQUAL(ERR_FIRST_NUM_NEG, e);
		return;
	}
	//TEST_ASSERT_EQUAL(11,result);
	TEST_FAIL_MESSAGE("NO EXCEPTION THROWN.");	
}

void test_addPositiveNumber_should_add_throw_an_exception_indication_second_value_is_negative(){
	int e;
	Try{
		int result = addPositiveNumber(2,-56);
	}Catch(e){
		TEST_ASSERT_EQUAL(ERR_SECOND_NUM_NEG, e);
		return;
	}
	//TEST_ASSERT_EQUAL(11,result);
	TEST_FAIL_MESSAGE("NO EXCEPTION THROWN.");	
}

void test_addPositiveNumber_should_add_throw_an_exception_indication_both_value_is_negative(){
	int e;
	Try{
		int result = addPositiveNumber(-10,-20);
	}Catch(e){
		TEST_ASSERT_EQUAL(ERR_BOTH_NUM_NEG, e);
		return;
	}
	//TEST_ASSERT_EQUAL(11,result);
	TEST_FAIL_MESSAGE("NO EXCEPTION THROWN.");	
}
