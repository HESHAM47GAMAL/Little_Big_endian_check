/*
 *  Created on: 21/5/2022
 *  Author: Hesham Shehata
 *  Description: check machine storing endianness (little or big endian)
 */

#include <stdio.h>

int main(void)
{
	int variable =0x12345678;
	char *pointer ;
	pointer = &variable;//there will happen implict casting
	// pointer =(char*)&variable   -->in this case no warning
	printf("variable value = %x , content of first byte from variable = %x\n",variable,*pointer);
	if(*pointer == 0x78)
	{
		printf("machine storage is little endian");
	}
	else if(*pointer == 0x12)
	{
		printf("machine storage is big endian");
	}

	return 0;
}

