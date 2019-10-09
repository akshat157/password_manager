//#include "funcdecs.h"
//#include "PassMan.c"
#define KNRM  "\x1B[0m"//displaying in specific colours
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int help()//displaying help menu
{
	char opt[50];
	printf("------------------------- Program Help ------------------------\n\n");
	printf("1. RanPass Generator generates random strings of the desired length\n\t   which you can use as password for different accounts.\n");
    printf("%s\t\tTO GENERATE NEW PASSWORD\n",KRED);
    printf("%sOutput:Enter the length of password\n",KBLU);
    printf("%sIutput:10\n",KGRN);
    printf("%sOutput:Your password is ->  1234567890\n\n",KBLU);
	
	printf("%s2. Store password: Use this to save your passwords in our secure \n\t   Password Manager.\n", KNRM);
    printf("%s\t\tTO STORE A PASSWORD\n",KRED);
    printf("%sOutput:Enter the token\n",KBLU);
    printf("%sInput:1. or ICICIBANK\n",KGRN);
    printf("%sOutput:Enter the password of program\n",KBLU);
    printf("%sInput:ABC\n",KGRN);
    printf("%sOutput:Enter the password that you want to save\n",KBLU);
    printf("%sInput:1234567890\n",KGRN);
    printf("%sOutput:Password saved successfully\n\n",KBLU);
	
	printf("%s3. Retrieve password: Use this to retrieve a password you've stored\n\t   previously.\n", KNRM);
    printf("%s\t\tTO RETRIEVE A PASSWORD\n",KRED);
    printf("%sOutput:Enter the token\n",KBLU);
    printf("%sInput:1. or ICICIBANK\n",KGRN);
    printf("%sOutput:Enter the password of program\n",KBLU);
    printf("%sInput:ABC\n",KGRN);
    printf("%sOutput:Password for 1 or ICICIBANK: 1234567890\n",KBLU);
	
	printf("%s4. Help: Prints this help text.\n", KNRM);
	
	printf("%s5. Exit: Exits the program.\n", KNRM);





	printf("\n------------------------- Program Help ------------------------\n");
	printf("0 to go to menu.\n");
	
	while(1)
	{
		printf("> ");
		scanf(" %[^\n]",opt);
		int l = strlen(opt);
		if (l == 1)
		{
			if (opt[0] == '0')
			{
				return 0;
			}
			else
			{
				printf("Invalid Input.\n");
			}
		}
		
		else
			{
				printf("Invalid Input.\n");
			}
	}
}