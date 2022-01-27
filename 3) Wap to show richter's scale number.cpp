/*The National Earthquake Information Center has asked you to write a programimplementing thefollowing decision table to characterize an earthquakebased on its Richter scale number.Could  you  handle  this  problem  with  a switch statement?  If  so,  use  a switchstatement;  if  not, explainWhy?

*/
#include <stdio.h> /*make the input output library available*/
//ART
  
  //define the charicter for earthquake
  int main (void) 
{				//beggining of program
  double earthquake;
  
 
printf ("enter magnitude> ");	//defines magnitude as a number
  /*this program takes the value of an earthquake and displays a damage report */ 
    scanf ("%lf", &earthquake);	//tells the computer to look for the value of the earthquake
  if (earthquake < 5.0)		// gives the check statement
    
printf ("Little or no damage.\n");	// if the statement is true display this
  else if ((earthquake >= 5.0) && (earthquake < 5.5))	//false then check this
    printf ("Some damage.\n");
  
 
  else if (5.5 <= earthquake && earthquake < 6.5)
    
 
printf ("Serious damage, Walls may crack or fall.\n");
  
 
  else if (6.5 <= earthquake && earthquake < 7.5)
    
 
printf ("disaster: houses and buildings may collapse.\n");
  
 
  else if (earthquake >= 7.5)
    
 
 
printf ("Catastophe: most buildings destoyed.\n");
  
 
return (0);

 
}


 
 
