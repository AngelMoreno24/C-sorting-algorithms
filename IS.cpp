//Name: Angel Moreno
//ASU ID: 1219993034

#ifndef DEFNS
#define DEFNS
#include "IS.h"
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

void InsertionSort(int A[], int n, int p1, int p2, int arg2, int* count){
  int i, key, j, check=0, check2=0; 
  for (i = 1; i < n; i++){ 
    key = A[i]; 
    j = i - 1; 
    while (j >= 0 && A[j] > key){

      //counts EWCs
      *count+=1;      
      A[j + 1] = A[j];

      if(arg2==1){
	cout << "EWC: " << A[j] << " > " << key << "?" <<  endl;
	check2=1;
      }

      j = j - 1;      
      check = 1;
    } 

    if(check==0){
      *count+=1;
    }

    check = 0;

    if(check2==0){
      if(arg2==1){
      cout << "EWC: " << A[j] << " > " << key << "?" <<  endl;    
      }
    }
    A[j + 1] = key; 

    //prints array if second int is 1
    if(p2 == 1){
      cout << "A[1:" << n << "]: ";
      for(int i=0; i<n-1;i++){
	cout << A[i] << " ";
      }
      cout << A[n-1] << endl;
    }
  }
  //prints result if first int is 1
  if(p1 == 1){
   
    cout << "A[1:" << n << "] after sorting: ";
    for(int i=0; i<n-1;i++){
      cout << A[i] << " ";
    }
    cout<< A[n-1] << endl;
  } 
}

