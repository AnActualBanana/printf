#include "main.h"
/*
 *
 */int _conversion_s(char *string)
 {
	 unsigned int string_count;
<<<<<<< HEAD
	 unsigned int printed;
=======
	 unsigned int printed = 0;
>>>>>>> main
	 char print_index;
	 for (string_count = 0; string[string_count] != '\0'; string_count++)
	 {
		 print_index = string[string_count];
		 _putchar(print_index);
		 printed++;
	 }
	 return(printed);
 }
