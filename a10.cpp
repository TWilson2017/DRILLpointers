#include <iostream>
using namespace std;
// --------------------------------------------------------------------
// Function: Fix the ShowInt and ShowFloat functions.
// --------------------------------------------------------------------

/* FIX */ void ShowInt(int *p) {cout << *p << ' '; }
/* FIX */ void ShowFloat(float  *p) { cout << *p << ' '; }
int main()
{
   int i; float f;
   cin >> i >> f; // DO NOT DELETE.

   ShowFloat(&f);
   ShowInt(&i);

   cout << i << ' ' << f ; // DO NOT DELETE.
   cout << endl; return 0; // DO NOT DELETE.
}//main

