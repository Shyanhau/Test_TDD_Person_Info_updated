#include "unity.h"
#include "Projectinfo.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_setAge_less_than_0_should_return_zero(void)
{
	
	int test_setAge; 
	PersonInfo test;
	test_setAge = setAge(&test, -1);	
	TEST_ASSERT_EQUAL(0,test_setAge);

}

void test_setAge_more_than_130_should_return_zero(void)
{
	
	int test_setAge; 
	PersonInfo test;
	test_setAge = setAge(&test, 131);	
	TEST_ASSERT_EQUAL(0,test_setAge);

}

void test_setAge_more_than_0_but_less_than_130_which_is_55_should_return_one(void)
{
	
	int test_setAge; 
	PersonInfo test;
	test_setAge = setAge(&test, 55);	
	TEST_ASSERT_EQUAL(1,test_setAge);

}

void test_setHeight_more_than_0m_and_less_than_three_meter_should_return_one(void)
{
	
	int test_setHeight; 
	PersonInfo test;
	test_setHeight = setHeight(&test, 2.24);	
	TEST_ASSERT_EQUAL(1,test_setHeight);

}

void test_setHeight_more_than_3m_should_return_zero(void)
{
	
	int test_setHeight; 
	PersonInfo test;
	test_setHeight = setHeight(&test, 4.0);	
	TEST_ASSERT_EQUAL(0,test_setHeight);

}

void test_setHeight_less_than_0_should_return_zero(void)
{
	
	int test_setHeight; 
	PersonInfo test;
	test_setHeight = setHeight(&test, -1.0);	
	TEST_ASSERT_EQUAL(0,test_setHeight);

}

void test_setTelephone_less_than_10000000_should_return_one(void)
{
	
	int test_setTelephone; 
	PersonInfo test;
	test_setTelephone = setTelephone(&test, 01234567);	
	TEST_ASSERT_EQUAL(0,test_setTelephone);

}

void test_setTelephone_more_than_99999999_should_return_zero(void)
{
	
	int test_setTelephone; 
	PersonInfo test;
	test_setTelephone = setTelephone(&test, 100000000);	
	TEST_ASSERT_EQUAL(0,test_setTelephone);

}

void test_setTelephone_more_than_10000000_but_less_than_99999999_which_is_10000001_should_return_one(void)
{
	
	int test_setTelephone; 
	PersonInfo test;
	test_setTelephone = setTelephone(&test, 10000001);	
	TEST_ASSERT_EQUAL(1,test_setTelephone);

}

void test_setTelephone_more_than_10000000_but_less_than_99999999_which_is_99999998_should_return_one(void)
{
	
	int test_setTelephone; 
	PersonInfo test;
	test_setTelephone = setTelephone(&test, 99999998);	
	TEST_ASSERT_EQUAL(1,test_setTelephone);

}

void test_setFirstName_no_name_input_should_return_zero(void)
{
	
	int test_setFirstName; 
	PersonInfo test;
	test_setFirstName = setFirstName(&test, "" );	
	TEST_ASSERT_EQUAL(0,test_setFirstName);

}

void test_setFirstName_given_shyanhau_should_return_one(void)
{
	int test_setFirstName; 
	PersonInfo test;
	test_setFirstName = setFirstName(&test, "shyanhau" );	
	TEST_ASSERT_EQUAL(1,test_setFirstName);
}

void test_setFirstName_between_name_contain_space_should_return_one(void)
{
	int test_setFirstName; 
	PersonInfo test;
	test_setFirstName = setFirstName(&test, "shyan hau" );	
	TEST_ASSERT_EQUAL(1,test_setFirstName);
}


void test_setFirstName_more_than_20_charaters_should_return_zero(void)
{
	int test_setFirstName; 
	PersonInfo test;
	test_setFirstName = setFirstName(&test, "abcdefghijklmnopqrstuv" );	
	TEST_ASSERT_EQUAL(0,test_setFirstName);
}


void test_setLastName_no_name_input_should_return_zero(void)
{
	
	int test_setLastName; 
	PersonInfo test;
	test_setLastName = setLastName(&test, "" );	
	TEST_ASSERT_EQUAL(0,test_setLastName);

}

void test_setLastName_given_shyanhau_should_return_one(void)
{
	
	int test_setLastName; 
	PersonInfo test;
	test_setLastName = setLastName(&test, "shyanhau" );	
	TEST_ASSERT_EQUAL(1,test_setLastName);

}

void test_setLastName_between_name_contain_space_should_return_one(void)
{
	
	int test_setLastName; 
	PersonInfo test;
	test_setLastName = setLastName(&test, "shyan hau" );	
	TEST_ASSERT_EQUAL(1,test_setLastName);

}

void test_setLastName_more_than_20_charaters_should_return_zero(void)
{
	
	int test_setLastName; 
	PersonInfo test;
	test_setLastName = setLastName(&test, "abcdefghijklmnopqrstuv" );	
	TEST_ASSERT_EQUAL(0,test_setLastName);

}