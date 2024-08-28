//Name: Angel Moreno
//ASU ID: 1219993034

#include "IS.h"
#include "QS.h"
#include "MS.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>

#include <iostream>
#include <string.h>
#include <fstream>


using namespace std;


void printArray(int A[], int n)
{
  printf("-----------------------------\n");
  for (int i=0;i<n;i++)
    printf("numberprinted: %d\n", A[i]);

  cout << "\n ----------------------------- \n";
}


int main(int argc, char *argv[]){
  FILE *file= fopen("INPUT.txt", "r");
  int i, n, p1, p2;

  if (argc < 3 || std::atoi(argv[2])>1){
    cout << "Usage: ./PJ1 alg flag\n" << "       alg should be in {InsertionSort, MergeSort, QuickSort}\n" << "       flag should be in {0, 1}" << endl ;
    exit (1);
  }

  string arg =std::string(argv[1]);
  int arg2 =std::atoi(argv[2]);

  if(arg == "InsertionSort" || arg == "MergeSort" || arg == "QuickSort"){

    if (file == NULL) {
      cout << "Error: cannot open file INPUT.txt" << endl;
      exit (1);
    }

    if(!file){
      cout << "Error: cannot open file INPUT.txt" << endl;
      exit (1);

      return 0;
    }


    //determines whether to print result
    fscanf(file, "%d", &p1);
    //determines whether to print array
    fscanf(file, "%d", &p2);
    //determines n
    fscanf(file, "%d", &n);


    int A[n];
  
    for(int j=0; j<n;j++){

      fscanf(file, "%d", &A[j]);
    }

    fclose(file);


    int k=0;

    if(arg == "InsertionSort"){
      //int k;
      //int arr[n];
      //for (int i=0; i<n; i++)
      //arr[i] = A[i];


      InsertionSort(A, n, p1, p2, arg2, &k);

      cout << "Number of EWCs: " << k << endl;

      exit (1);
    }


    if(arg == "MergeSort"){

      printf("MergeSort\n");
    }

    if(arg == "QuickSort"){

      QuickSort(A, 0, n - 1, p1, p2, arg2, &k);

      if(p1 == 1){
	cout << "A[1:" << n << "] after sorting: ";
	for(int i=0; i<n-1;i++){
	  cout << A[i] << " ";
	}
	cout<< A[n-1] << endl;
      }
      cout << "Number of EWCs: " << k << endl;
    }

  }else{

    cout << "Usage: ./PJ1 alg flag" << endl;
    cout << "       alg should be in {InsertionSort, MergeSort, QuickSort}" << endl;
    cout << "       flag should be in {0, 1}" << endl;

  }
}
