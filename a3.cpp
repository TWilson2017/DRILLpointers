#include <iostream>
using namespace std;
// --------------------------------------------------------------------
// Function: (1) Read in a name and a value.
//           (2) Dynamically allocate a BOX object, intializing it with
//               the name and value.
//           (3) Call ShowBOX to display the BOX object.
// --------------------------------------------------------------------
class BOX
{
  public:
     int y;
     BOX(){y=3;n="TBA";}
     BOX(string name, int val){y=val;n=name;}
     void K(int c){y+=c;}
     void Show(){cout << n << " "<<y<<endl;}
  private:
     string n;
};
void ShowBOX (BOX * bp){cout << bp->y % 10 <<": "; bp ->Show();}
int main()
{

	string name;
	int value;
	BOX *ptrBox;
	
	cin >> name >> value;
	
	ptrBox = new BOX(name, value);
	ShowBOX(ptrBox);

   return 0;
}//main
