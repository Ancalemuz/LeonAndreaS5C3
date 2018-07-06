#include<iostream>
using namespace std;

#include <iomanip>
using std::setw;

int arr[25] = {};

int main ()
{
	int c=0;
	int n=0;
	for( n=0; n<89 ; n++ )
	{
		if(n%2==0 && c<=25)
		{
		arr[c]=n;
		c++;
		}
	}
	for ( int j = 0; j < 25; j++ ) {
      	cout << arr[ j ] << endl;
   }
	return 0;
}

