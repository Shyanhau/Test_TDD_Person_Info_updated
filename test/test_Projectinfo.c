#include "unity.h"
#include "Projectinfo.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_setAge_less_than_0_should_return_invalid(void)
{
	
	int test_setAge; 
	PersonInfo test;
	test_setAge = setAge(&test, 20);	
	TEST_ASSERT_EQUAL_STRING("invalid",test_setAge);
	
	
}


