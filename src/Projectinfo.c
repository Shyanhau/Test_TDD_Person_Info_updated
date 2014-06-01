#include "Projectinfo.h"
#include <stdio.h>

/**
* Set FirstName
*
* Input:
* info is a pointer to person's age
*	Return : 
*	0 to indicate failure
*	1 to indicate success
*/

int setFirstName(PersonInfo *info, char *name)
{
	int i; 
	
	if(*name == '\0')
	{	
		printf("There is no name entered for first name!!\n");
		return 0;
	}
	else 
	{ i = 0;
		while(*name != '\0')
		{
			if(*name != 32)		// 32 is the ASCII for space
			{
				if((*name >= 65 && *name <= 90 ) || (*name >= 97 && *name <= 122 ) == 0)  // ASCII code from 65 to 90 is capital letter  
					return 0; 															  // ASCII code from 97 to 122 is small letter
					
			}
			name++; 
			i++;	
		} 
		if( i > 19 )
		{	
			printf("There is more than 20 characters!!\n");
		
			return 0;
		}	
		else 
			return 1;
		 
	}	
}

/**
* Set LastName
*
* Input:
* info is a pointer to person's age
*	Return : 
*	0 to indicate failure
*	1 to indicate success
*/

int setLastName(PersonInfo *info, char *name)
{
	int i; 
	
	if(*name == '\0')
	{	
		printf("There is no name entered for last name!!\n");
		return 0;
	}
	else 
	{ i = 0;
		while(*name != '\0')
		{
			if(*name != 32)		// 32 is the ASCII for space
			{
				if((*name >= 65 && *name <= 90 ) || (*name >= 97 && *name <= 122 ) == 0)  // ASCII code from 65 to 90 is capital letter  
					return 0; 															  // ASCII code from 97 to 122 is small letter
					
			}
			name++; 
			i++;	
		} 
		if( i > 19 )
		{	
			printf("There is more than 20 characters!!\n");
		
			return 0;
		}	
		else 
			return 1;
		 
	}	
}

/**
* Set Age
*
* Input:
* info is a pointer to person's age
*	Return : 
*	0 to indicate failure
*	1 to indicate success
*/

int setAge(PersonInfo *info , int age)
{
	//printf("age = %i\n",age ); 
	if( age<0 || age>=130 )
		return 0 ; 
	else 
		return 1;
}
/**
* Set Height
*
* Input:
* info is a pointer to person's height
*	Return : 
*	0 to indicate failure
*	1 to indicate success
*/

int setHeight(PersonInfo *info, float height)
{
	
	if (height < 1 )
		return 0;
	else if (height > 3 )
		return 0;  
	else 
		return 1;
		
}

/**
* Set telephone number
*
* Input:
* info is a pointer to person's telephone number
*	Return : 
*	0 to indicate failure
*	1 to indicate success
*/

int setTelephone(PersonInfo *info, unsigned long int telephone)
{
	if( telephone < 10000000 || telephone > 99999999 )
		return 0 ;
	else 
		return 1; 
}
	





























