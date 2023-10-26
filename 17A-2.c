//Demonstrate int, float, double and char pointer
#include <stdio.h>                                                                            
void main()                                                                     
{                                                                               
    char ch, *chp;
	double db,*dbp;                                                              
    int i, *ip;                                                                 
    float ff, *fp;                                                              
    printf("Enter character: ");                                                
    scanf("%c", &ch);                                                           
                                                                                
    printf("\nEnter integer: ");                                                
    scanf("%d", &i);                                                            
                                                                                
    printf("\nEnter float: ");                                                  
    scanf("%f", &ff); 
	
	printf("\nEnter double: ");                                                  
    scanf("%lf", &db);                                                         
                                                                                
    chp = &ch;                                                                  
    ip = &i;                                                                    
    fp = &ff; 
	dbp = &db;                                                                  
                                                                                
     printf("\nAddress of dbp: %u", dbp);
    printf("\nAddress of chp: %u", chp);                              
    printf("\nAddress of ip: %u", ip);                                
    printf("\nAddress of fp: %u", fp);                                
                                                                                
    printf("\nValue of char: %c", *chp);   
	printf("\nValue of double: %lf", *dbp);                     
    printf("\nValue of int: %d", *ip);                           
    printf("\nValue of float : %f", *fp);                          
}     
