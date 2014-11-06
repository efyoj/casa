/*
 * =====================================================================================
 *
 *       Filename:  ascii.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/11/14 19:07:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alvaro J. Mathe (Mathe), mathe_4_9@hotmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
   int i;
  	printf("Elige un animal (Dinosaurio = 1, Peces = 2, Buho = 3\n");
   	scanf("%i", &i);
	if (i == 1){
	    printf("                                _.-_    \n");
	    printf("                             __.'  o \"-.\n");
	    printf("                    ___----\"\"       ,,,'\n");
	    printf("               __--\"             _-_ ^^;\n");
	    printf("       ____--\"\"  ___         _-\\\"   `\"\" \n");
	    printf("..--===-------\"\"\"   \"(   __-\"  ,}       \n");
	    printf("                    .'_/\"\\\n");
	    printf("                  .'/\"  `\\`._\n");
	    printf("                  \"-_c    \"  ' \n");
	}
	if (i == 2){
	    printf("          .----.                         ,----,\n");
	    printf(" ____    __\\\\\\\\\\\\__                  ___//////__    ____\n");
	    printf(" \\___'--\"          .-.            .-.           \"--'___/\n");
	    printf(" /___<             '0'            '0'              >___\\\n");
	    printf("/____,--.       y     B          8     q        ,--.____\\\n");
	    printf("        \"\".____  ___-\"            \"-___  ____,\"\"\n");
	    printf("        //    / /                      \\ \\   \\\\\n");
	    printf("              ]/                        \\[\n");
	}
	if (i == 3){
	    printf("                  , _ ,\n");
	    printf("                 ( o o )\n");
	    printf("                /'` ' `'\\\n");
	    printf("                |'''''''|\n");
	    printf("                |\\\\'''//|\n");
	    printf("                   \"\"\"\n");
	}
	if ( i != 1 && i != 2 && i != 3)
	    printf("Mete uno de los números que te digo\n");

    return EXIT_SUCCESS;

}
