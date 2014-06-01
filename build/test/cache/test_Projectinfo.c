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

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((test_setAge)), (((void *)0)), (_U_UINT)18, UNITY_DISPLAY_STYLE_INT);



}



void test_setAge_more_than_130_should_return_zero(void)

{



 int test_setAge;

 PersonInfo test;

 test_setAge = setAge(&test, 131);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((test_setAge)), (((void *)0)), (_U_UINT)28, UNITY_DISPLAY_STYLE_INT);



}



void test_setAge_more_than_0_but_less_than_130_which_is_55_should_return_one(void)

{



 int test_setAge;

 PersonInfo test;

 test_setAge = setAge(&test, 55);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((test_setAge)), (((void *)0)), (_U_UINT)38, UNITY_DISPLAY_STYLE_INT);



}



void test_setHeight_more_than_0m_and_less_than_three_meter_should_return_one(void)

{



 int test_setHeight;

 PersonInfo test;

 test_setHeight = setHeight(&test, 2.24);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((test_setHeight)), (((void *)0)), (_U_UINT)48, UNITY_DISPLAY_STYLE_INT);



}



void test_setHeight_more_than_3m_should_return_zero(void)

{



 int test_setHeight;

 PersonInfo test;

 test_setHeight = setHeight(&test, 4.0);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((test_setHeight)), (((void *)0)), (_U_UINT)58, UNITY_DISPLAY_STYLE_INT);



}



void test_setHeight_less_than_0_should_return_zero(void)

{



 int test_setHeight;

 PersonInfo test;

 test_setHeight = setHeight(&test, -1.0);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((test_setHeight)), (((void *)0)), (_U_UINT)68, UNITY_DISPLAY_STYLE_INT);



}



void test_setTelephone_less_than_10000000_should_return_one(void)

{



 int test_setTelephone;

 PersonInfo test;

 test_setTelephone = setTelephone(&test, 01234567);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((test_setTelephone)), (((void *)0)), (_U_UINT)78, UNITY_DISPLAY_STYLE_INT);



}



void test_setTelephone_more_than_99999999_should_return_zero(void)

{



 int test_setTelephone;

 PersonInfo test;

 test_setTelephone = setTelephone(&test, 100000000);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((test_setTelephone)), (((void *)0)), (_U_UINT)88, UNITY_DISPLAY_STYLE_INT);



}



void test_setTelephone_more_than_10000000_but_less_than_99999999_which_is_10000001_should_return_one(void)

{



 int test_setTelephone;

 PersonInfo test;

 test_setTelephone = setTelephone(&test, 10000001);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((test_setTelephone)), (((void *)0)), (_U_UINT)98, UNITY_DISPLAY_STYLE_INT);



}



void test_setTelephone_more_than_10000000_but_less_than_99999999_which_is_99999998_should_return_one(void)

{



 int test_setTelephone;

 PersonInfo test;

 test_setTelephone = setTelephone(&test, 99999998);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((test_setTelephone)), (((void *)0)), (_U_UINT)108, UNITY_DISPLAY_STYLE_INT);



}



void test_setFirstName_no_name_input_should_return_zero(void)

{



 int test_setFirstName;

 PersonInfo test;

 test_setFirstName = setFirstName(&test, "" );

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((test_setFirstName)), (((void *)0)), (_U_UINT)118, UNITY_DISPLAY_STYLE_INT);



}



void test_setFirstName_given_shyanhau_should_return_one(void)

{

 int test_setFirstName;

 PersonInfo test;

 test_setFirstName = setFirstName(&test, "shyanhau" );

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((test_setFirstName)), (((void *)0)), (_U_UINT)127, UNITY_DISPLAY_STYLE_INT);

}



void test_setFirstName_between_name_contain_space_should_return_one(void)

{

 int test_setFirstName;

 PersonInfo test;

 test_setFirstName = setFirstName(&test, "shyan hau" );

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((test_setFirstName)), (((void *)0)), (_U_UINT)135, UNITY_DISPLAY_STYLE_INT);

}





void test_setFirstName_more_than_20_charaters_should_return_zero(void)

{

 int test_setFirstName;

 PersonInfo test;

 test_setFirstName = setFirstName(&test, "abcdefghijklmnopqrstuv" );

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((test_setFirstName)), (((void *)0)), (_U_UINT)144, UNITY_DISPLAY_STYLE_INT);

}





void test_setLastName_no_name_input_should_return_zero(void)

{



 int test_setLastName;

 PersonInfo test;

 test_setLastName = setLastName(&test, "" );

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((test_setLastName)), (((void *)0)), (_U_UINT)154, UNITY_DISPLAY_STYLE_INT);



}



void test_setLastName_given_shyanhau_should_return_one(void)

{



 int test_setLastName;

 PersonInfo test;

 test_setLastName = setLastName(&test, "shyanhau" );

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((test_setLastName)), (((void *)0)), (_U_UINT)164, UNITY_DISPLAY_STYLE_INT);



}



void test_setLastName_between_name_contain_space_should_return_one(void)

{



 int test_setLastName;

 PersonInfo test;

 test_setLastName = setLastName(&test, "shyan hau" );

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((test_setLastName)), (((void *)0)), (_U_UINT)174, UNITY_DISPLAY_STYLE_INT);



}



void test_setLastName_more_than_20_charaters_should_return_zero(void)

{



 int test_setLastName;

 PersonInfo test;

 test_setLastName = setLastName(&test, "abcdefghijklmnopqrstuv" );

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((test_setLastName)), (((void *)0)), (_U_UINT)184, UNITY_DISPLAY_STYLE_INT);



}
