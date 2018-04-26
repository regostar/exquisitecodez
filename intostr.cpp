/*integer to string without using inbuilt */


#include <iostream>
using namespace std;

string f( int val )
{
	string s;
   while(val>0)
   {
      s=(char)(val%10 +'0')+s;
      
      val=val/10;
     // cout<<s<<endl;
   }
   return s;
}

int main() {
	cout << f( 63 ) << endl ;
	// your code goes here
	return 0;
}
