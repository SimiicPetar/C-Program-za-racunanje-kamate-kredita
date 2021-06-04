#include <iostream>

using namespace std;
#include <iomanip>

int main()

{
	double kredit;
	double kamata;
	double rate;
	double a=0;
	double brojMeseci=1;
	double c=0;
	
	cin>> kredit>>kamata >>rate;
	double k1 = kredit;
	
	while(kredit > rate ){
	
		a = kamata * 0.01 * (kredit - rate );
	 kredit = kredit - (rate - a);
	 c = c+a;
	 cout << fixed << setprecision(1) << kredit<<endl;
	brojMeseci = brojMeseci + 1;
	}
	cout << fixed << setprecision(0) << brojMeseci<<endl;
		cout << fixed << setprecision(1) << c+k1<<endl;
	
}
