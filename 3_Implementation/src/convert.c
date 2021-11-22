#include "stddef.h"
#include "header.h"
#include "string.h"

char *UpperToLower (char *trgt, char *src)
{
	if(!src || !trgt)    // check if input string is empty
	return NULL;
    char *ptr = trgt;
    
    while(*src)                  // runs until src aray reaches null character
        if (*src >= 'A'  && 'Z' >= *src)   // checks if src is has elements in upper case
        {
		  *ptr = *src | (1 << 5);     // convert to lower
           src++;
           ptr++;
		}
        else                            // if already in lower store as it is
            {
			*ptr = *src;                 
            ptr++;
            src++; 
			}
    *ptr = 0;
    return trgt;
}