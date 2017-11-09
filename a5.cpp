#include <iostream>
using namespace std;
// --------------------------------------------------------------------
// Function: (1) Call the Fuzz function;
//           (2) Display the contents of the dynamically allocated REC record.
// --------------------------------------------------------------------
struct REC
{
  int a; string b; float c;
  REC(int A, string B, float C){a=A; b=B; c=C;}
};

int k=0;
void Fuzz(REC * r) { r->a++; r->b+=r->b; r->c-=k; }
int main()
{
   REC * rp = new REC(4,"Easy does it", 99.5); // DO NOT MOVE OR DELETE.
   cin >> k;  // DO NOT MOVE OR DELETE.
   Fuzz(rp);
   cout << rp->a << rp->b << rp->c;
   
   cout << endl; return 0; // DO NOT MOVE OR DELETE.
}//main

