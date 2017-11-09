#include <iostream>
using namespace std;
// --------------------------------------------------------------------
// Function: Fix the calls to functions ShowFloat and ShowInt.
// --------------------------------------------------------------------
void ShowInt(int * p) { cout << *p << ' '; }
void ShowFloat(float * p) { cout << *p << ' '; }
int main()
{
   int i; float f;
   cin >> i >> f; // DO NOT DELETE.

   ShowFloat(&f); 
   ShowInt(&i);   

   cout << f << ' ' << i ; // DO NOT DELETE.
   cout << endl; return 0; // DO NOT DELETE.
}//main

