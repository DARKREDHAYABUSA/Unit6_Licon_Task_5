#include <iostream>
#include <algorithm>
#include "accounts.h"
using namespace std;

void printArray(int[], int);
void sortArrDesc(int[], int);

int main() 
{
//using built-in sort Desc to an array
cout << "\nStart: " << cpuTime() << endl;
//call the sort function
//built-in sort sort(nameOfArray, nameArray+size);
sort(accountBalances, accountBalances+maxAccounts);
printArray(accountBalances, maxAccounts);
//reverse call sort first!!!
//built-in sort sort(nameOfArray, nameArray+size);
reverse(accountBalances, accountBalances+maxAccounts);
printArray(accountBalances, maxAccounts);
cout << "\nEnd: " << cpuTime() << endl;
  return 0;
}

void printArray(int arrayVals[], int size)
{
cout << "\nPrinted Values in Array: " << endl;
for(int i = 0; i < size; i++)
{
  cout << arrayVals[i] << ",";

    }
  }
