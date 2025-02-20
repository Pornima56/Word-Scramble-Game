#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>  //this will help to randomize the word im gonna scramble
#include <ctype.h> //to keep all the words i scramble to lower case so that they can move around without worrying about the capitalization of certail characters
#include <stdbool.h>  //for boolean variables

/*****************************Global Variables*************************************/
char Temp ;


void scramble( char *arr)
{
  int len, pos1 ; 
  char original[length + 1] ;
  strcpy( original, arr ) ;   //this will copy the string from arr to original to keep the inmocified copy of the string to compare the scrambled version if the string later on
  
  len = strlen( arr ) ;

  for( int counter = 0 ; counter < len ; counter++)  //this will go from 0 to length of the string
  {
      //Here tolower() is the inbuilt function of 'ctype.h' library
      //it converts each character to lowercase and stores it in arr[] array
      arr[counter] = tolower( arr[counter] ) ;  
  }
//Now we will take care of couple special cases seperately
//If the string is 1 character long we can't scramble the word
  if( len == 1 ) 
    return ;  //just return in this case coz we can't do anything in our case and no number as its a void function and this will terminate the condition

  if(len == 2)  //if the length of the string is 2 
  {
      //then do swapping
      temp = arr[0] ;
      arr[0] = arr[1] ;
      arr[1] = temp ;
    return ;  //We will return and terminate the case
  }

  //If the length is more than two characters we will handle it more carefully
  do
  {
    int token = 0 ;
    while ( token < len )
    {
       //rand() function comes from 'stdlib.h' library
       pos1 = rand() % len ;    
       pos2 = rand() % len ;    

int main()
{
  
return 0 ;
}
