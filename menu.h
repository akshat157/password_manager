#include "funcdecs.h"
int menu()
{
    char opt[50];
    printf("-------------------------- Main Menu --------------------------\n");
    printf("[1] Generate a password.\n");
    printf("[2] Store a password.\n");
    printf("[3] Retrieve a password.\n");
    printf("[4] Help.\n");
    printf("[5] Exit.\n");
    while(1)
    {
        printf("> ");
        scanf(" %s",opt);
        int l=strlen(opt);
        int rv;
        if(l==1)
        {
           if (opt[0] > '0' && opt[0] < '6')
           {
               if (opt[0] == '1')
               {
                  rv = ranPass();
                  if(rv == 0)
                     main();
               }

              /* if (opt[0] == '2')
               {
                  rv = encrypt();
                  if(rv == 0)
                  main();
               }
               
               if (opt[0] == '3')
               {
                  rv = decrypt();
                  if(rv == 0)
                  main();
               }*/
               
               if (opt[0] = '4')
               {
                  rv = help();
                  if(rv == 0)
                     help();
               }
               if (opt[0] = '5')
                     exit(0);
           }
           
           else
           printf("Invalid Input.\n");

       }
       else
       {
           printf("Invalid Input.\n");
       }
    }

}
