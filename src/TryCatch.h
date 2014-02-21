#ifndef __TRY_CATCH_H__
#define __TRY_CATCH_H__

enum ExceptionError{NO_ERROR , ERR_FIRST_NUM_NEG,
					ERR_SECOND_NUM_NEG , ERR_BOTH_NUM_NEG};

void justTryingOutTryCatch(void);
int addPositiveNumber(int value1,int value2);
#endif  //__TRY_CATCH_H__