// --------------------------------------------------------------------
// Function: Complete the body of the swap function.
// --------------------------------------------------------------------
#include <iostream>
using namespace std;

int w = 0;
void Fuzz(int m, int n) { cout << (w+n%10+ m%10)%10 << ":"; }
void swap(int & m, int & n)
{
	int temp = m;
	m = n;
	n = temp;
}//swap

int main()
{  // DO NOT DELETE ANY STATEMENTS in main..
   int x, y;
   cin >> x >> y;
   cin >> w;
   cout << endl << " ";
   Fuzz(x,y);
   cout << x << " " << y;
   swap(x,y);
   cout << endl << " ";
   Fuzz(x,y);
   cout << x << " " << y;
   cout << endl; return 0;
}//main

