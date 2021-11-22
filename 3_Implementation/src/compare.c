#include "header.h"
#include "string.h"


int CompareColor (char *color1, char *color2)
{
    if (*color1=='\0' && *color2=='\0') return 0;   // checks if null array is being passed
    if (*color1!='\0' && *color2=='\0') return 1;
    if (*color1=='\0' && *color2!='\0') return -1;

    while(*color1 && *color2 && *color1 == *color2)  // runs the loop to increment color strings
	{
	  *color1++ ;
	  *color2++ ;
    }
    return *color1 - *color2;
}