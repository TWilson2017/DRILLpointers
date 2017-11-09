// --------------------------------------------------------------------
// Function: Complete the swap function body, and FIX the call to swap.
// --------------------------------------------------------------------
#include <iostream>
using namespace std;

int w=0;
void Fuzz(int m, int n) { cout << (w+n%10+ m%10)%10 << ":"; }
void swap(int * m, int * n)
{
  int temp = *m;
  *m = *n;
  *n = temp;
}//swap

int main()
{  // DO NOT DELETE/MODIFY ANY STATEMENTS in main..
   int x, y;
   cin >> x >> y;
   cin >> w;
   Fuzz(x,y);
   cout << x << " " << y;

   swap(x,y);   // EXCEPT THIS (if needed). *************************

   Fuzz(x,y);
   cout << x << " " << y;
   cout << endl; return 0;
}//main
