#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int value,
	bitPos,
	strLen,
	strPos;

    char *ptr;
	
    value = 0;

    ptr = "1010";

    printf("PTR: %s\n", ptr);

    strLen = strlen(ptr);

    for (bitPos = 0, strPos = strLen - 1; strPos >= 0; bitPos++, strPos--)
    {
	printf("Checking bit %d...\n", bitPos);
	if (ptr[strPos] == '1') 
	{
	    printf("Setting bit %d...\n", bitPos);
	    value |= 1 << bitPos;
        }
    }

    printf("Value: %d\n", value);

    exit(0);
}
