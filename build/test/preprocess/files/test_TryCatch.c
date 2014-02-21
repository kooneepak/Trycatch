#include "unity.h"
#include "TryCatch.h"
#include "Person.h"
#include "CException.h"




void setUp(){}

void tearDown(){}

void test_justTryingOutTryCatch_should_throw_exception(){



 struct Person_t person;

 printf("MAx: %d \n", 30);

 justTryingOutTryCatch();



}



void test_addPositiveNumber_should_add_two_positive_values_correctly(){

  int result = addPositiveNumber(4,7);

  UnityAssertEqualNumber((_U_SINT)((11)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)28, UNITY_DISPLAY_STYLE_INT);

}



void test_addPositiveNumber_should_add_throw_an_exception_indication_first_value_is_negative(){

 int e;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  int result = addPositiveNumber(-4,7);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { e = CExceptionFrames[MY_ID].Exception; e=e; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((ERR_FIRST_NUM_NEG)), (_U_SINT)((e)), (((void *)0)), (_U_UINT)36, UNITY_DISPLAY_STYLE_INT);

  return;

 }



 UnityFail( ("NO EXCEPTION THROWN."), (_U_UINT)40);;

}



void test_addPositiveNumber_should_add_throw_an_exception_indication_second_value_is_negative(){

 int e;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  int result = addPositiveNumber(2,-56);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { e = CExceptionFrames[MY_ID].Exception; e=e; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((ERR_SECOND_NUM_NEG)), (_U_SINT)((e)), (((void *)0)), (_U_UINT)48, UNITY_DISPLAY_STYLE_INT);

  return;

 }



 UnityFail( ("NO EXCEPTION THROWN."), (_U_UINT)52);;

}



void test_addPositiveNumber_should_add_throw_an_exception_indication_both_value_is_negative(){

 int e;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  int result = addPositiveNumber(-10,-20);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { e = CExceptionFrames[MY_ID].Exception; e=e; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((ERR_BOTH_NUM_NEG)), (_U_SINT)((e)), (((void *)0)), (_U_UINT)60, UNITY_DISPLAY_STYLE_INT);

  return;

 }



 UnityFail( ("NO EXCEPTION THROWN."), (_U_UINT)64);;

}
