#include <iostream>
using namespace std;
// --------------------------------------------------------------------
// Function: Declare pointer variables ip and fp, initializing them to the
//           addresses of variables i and f, respectively.
// --------------------------------------------------------------------
void ShowInt(int * p) { cout << *p << endl; }
void ShowFloat(float * p) { cout << *p << endl; }
int main()
{
   int i; float f;
   int *ip, *fp;


   cin >> i >> f; // DO NOT DELETE.
   *ip = &i;
   *fp = &f;
   ShowFloat(fp); // DO NOT DELETE.
   ShowInt(ip);   // DO NOT DELETE.
   cout << i << " " << f << endl; // DO NOT DELETE.
   return 0;
}//main

