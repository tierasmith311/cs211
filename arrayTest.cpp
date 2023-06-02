/***************************************************************
CS211
Template prepared by Kazumi Slott
1-28-2020

This program tests array.h
**************************************************************/
#include "array.h"
#include <iostream>
#include <iomanip>

//??????
//
//void bubbleSort();
int main()
{

  int lowest,highest;
  const int SZ_I = 7;
  //declare const called SZ_I set to 7
  const int SZ_D = 3;
  //declare const called SZ_D set to 3
  const int SZ_C = 5;
  //declare const called SZ_C set to 5

  int intArr[SZ_I];
  //create an integer array that has SZ_I slots
  double dlArr[SZ_D];
  //create a double array that has SZ_D slots
  char charArr[SZ_C];
  //create a character array that has SZ_C slots
    

   cout << "Enter your number";
   fill(intArr, SZ_I);

   //call fill with the integer array
    cout << "-----filling double array-----" << "\n";
     cout << "ENter your number: ";
    fill(dlArr, SZ_D);
   // call fill with the double array
   cout << "-----filling the character array----" << "\n";
     cout << "Enter characters";
    fill(charArr, SZ_C);
  //call fill with the character array

   sort(intArr, SZ_I);
    print(intArr, SZ_I);
    cout << "lowest is  " << getLowest(intArr, SZ_I); 
    //call print (with 2 parameters) with the integer array
     print(dlArr, SZ_D);
  //call print with the double array
      print(charArr, SZ_C);
    //call print with the character array
    
   
     getHighest(charArr, SZ_C);
   //call getHighest with the character array and show the highest value along with its location

     //   cout << "lowest is" << getLowest(dlArr, SZ_D);
  //call getLowest with the duoble and show the lowest value along with its location
    getLowest(dlArr, SZ_D);
  
   getAvg(intArr, SZ_I);
  //call getAvg with the integer array and show the returend value

  // unique(intArr, intArr , SZ_I );
  //call unique with integer array and show unique array and the number of unique numbers
  // unique(charArr, charArr, SZ_C);
  //call unique with character array and show unique array and the number of unique numbers

   sort(dlArr, SZ_D);
    print(dlArr,SZ_D);
   //sort the double array and print it
    sort(charArr, SZ_C);
   print(charArr, SZ_C);
  //sort the character array and print it
  
   /*
    bubbleSort(intArr, SZ_I);
   
    print(intArr, SZ_I);
  
    bubbleSort(dlArr, SZ_D); 
    
    print(dlArr, SZ_D);
   
    bubbleSort(charArr, SZ_C);
   
    print(charArr, SZ_C);
   */
    return 0;

}





