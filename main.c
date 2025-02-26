#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>  //this will help to randomize the word im gonna scramble
#include <ctype.h> //to keep all the words i scramble to lower case so that they can move around without worrying about the capitalization of certail characters
#include <stdbool.h>  //for boolean variables

/*****************************Global Variables*************************************/


void scramble( char *arr)
{
  int len, pos1, token ; 
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
      char  temp = arr[0] ;
      arr[0] = arr[1] ;
      arr[1] = temp ;
    return ;  //We will return and terminate the case
  }

  double different =  0 ;  //checks to see if the string is sufficiently scrambled
  bool match_start = false, match_end = false ; 
  //If the length is more than two characters we will handle it more carefully
  do
  {
    token = 0 ;
    while ( token < len )
    {
       //rand() function comes from 'stdlib.h' library
       pos1 = rand() % len ;    //This results in integer between  0 and len - 1
       pos2 = rand() % len ;    
       //Now we have 2 random positions in a string 
       //To scramble this string we will swap the characters at those positions
       if( pos != pos2 )
       {
         char temp = arr[pos1] ;
         arr[pos1] = arr[pos2] ;
         arr[pos2] = temp ;
         token++ ;
       }
    }
  int unique = 0 ;
  for( int counter = 0 ; counter < len ; counter++)
  {  
    if( original[counter] != arr[j] )
      {
        unique++ ;      //this will count the number of uniques
        differences = (double) unique / len ;
        match_start = arr[0] == original[0] ;
        match_end = arr[len - 1] == original[len - 1] ;
      }
      while( ( match_start && match_end ) || unique < 0.5 )
      {
        
      }
  }
}
  

int main()
{
  //When we return function time as NULL as an argument it return current time 
  srand(time(NULL)) ; //This gives us a random number everytime it runs
return 0 ;
}
