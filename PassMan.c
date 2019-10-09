// Wed - 6 group
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "funcdecs.h"//including self created library funcdecs
int main()
{
	system("clear");
    printf("------------------ PASSWORD MANAGER PROGRAM ------------------\n\n");
    printf("Hello ,Welcome to Password Manager.\n");
    printf("Password manager helps you manage your password for different accounts.\n\n© Wed-6 Corp. Pvt. Ltd.\n");
    printf("\n\n");
    char opt[50];
    printf("-------------------------- Main Menu --------------------------\n");//displaying the menu list 
    printf("[1] Generate a password.\n");
    printf("[2] Store a password.\n");
    printf("[3] Retrieve a password.\n");
    printf("[4] Help.\n");
    printf("[5] Exit.\n");
    printf("-------------------------- Main Menu --------------------------\n");
    while(1)
    {
        printf("> ");
        scanf(" %[^\n]",opt);//taking input from user (among the options given in menu list)
        int l=strlen(opt);
        int rv;
        if(l==1)
        {
           if (opt[0] > '0' && opt[0] < '6')
           {
                switch(opt[0])
                {
                
	                case '1':
	                {
	                    rv = ranPass();//if option =1,call ranPass function (for generating random passwords)
	                    if(rv == 0)
	                    	main();
	                }

	               	case '2':
	            	{
	                	rv = encrypt();//calling encrypt function(for storing your password and encoding it )
	                	if(rv == 0)
	                		main();
	            	}
	               
	               	case '3':
	               	{
	                	rv = decrypt();//calling decrypt function (for retrieving the password and decoding the stored password)
	                	if(rv == 0)
	                	main();
	               	}
	               
	               	case '4':
	               	{
	                	rv = help();//calling help function(if any help is required)
	                	if(rv == 0)
	                		main();
	               	}
	               	
	               	case '5':
	               	{	
	               		system("clear");
	               		printf("\n------------------- PASSWORD MANAGER PROGRAM ------------------\n");
	               		exit(0);//Exit the program
	               	}
           			
           			default:
           				printf("Invalid Input.\n");
            	}
           	}
           
           

       }
       else
       {
           printf("Invalid Input.\n");
       }
    }
	
	
}