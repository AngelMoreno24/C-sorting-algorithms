//Name: Angel Moreno
//ASU ID: 1219993034

#ifndef DEFNS
#define DEFNS
#include "QS.h"
#endif

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int partition(int A[], int p, int r,int p1, int p2, int arg2, int* EWC)
{
  //pivot
  int x = A[r]; 
  int i = (p- 1); 


  
  for (int j = p; j <= r - 1; j++) {
    int check=0;

    if (A[j] < x) {
      i++; 
      
      if(check==0){
	check=1;
	*EWC+=1;

	if(arg2==1){
	  cout << "EWC: " << A[j] << " <= " << x << "?" <<  endl;
	}
      }

      int temp = A[i];
      A[i] = A[j];
      if(p2 == 1){
	int q;
	cout << "A[" << p+1 << ":"  << r+1 << "]: ";

	for(q=p; q<r;q++){
	  cout << A[q] << " ";
	}
	cout << A[r] << endl;
      }

      A[j] = temp;
      if(p2 == 1){

	int q;
	cout << "A[" << p+1 << ":"  << r+1 << "]: ";
	for(q=p; q<r;q++){
	  cout << A[q] << " ";
	}
	cout << A[r] << endl;
      }
    }

    if(check==0){
      *EWC+=1;

      if(arg2==1){
	cout << "EWC: " << A[j] << " <= " << x << "?" <<  endl;	
      }
    }    
  }
  
  int temp = A[i+1];
  A[i+1] = A[r];
  if(p2 == 1){
    int q;
    cout << "A[" << p+1 << ":"  << r+1 << "]: ";
    for(q=p; q<r;q++){
      cout << A[q] << " ";
    }
    cout << A[r] << endl;
  }

  A[r] = temp;
  if(p2 == 1){
    int q;
    cout << "A[" << p+1 << ":"  << r+1 << "]: ";
    for(q=p; q<r;q++){
      cout << A[q] << " ";
    }
    cout<< A[r] << endl;
  }
  return (i + 1);
}

void QuickSort(int A[], int p, int r, int p1, int p2, int arg2, int* EWC)
{
  if (p < r) {
    
    int q = partition(A, p, r, p1, p2, arg2, EWC);

    QuickSort(A, p, q - 1, p1, p2, arg2, EWC);
    QuickSort(A, q + 1, r, p1, p2, arg2, EWC);
  }
}



