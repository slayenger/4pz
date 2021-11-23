#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{

 srand(time(NULL));
 vector<int> farray;
 vector<int> sarray;
 vector<int> tarray;
 int n1, n2;
 cin >> n1 ;
 cin >> n2 ;
 double sum1 = 0;
 double sum2 = 0;
 cout << "V1:" << endl;
 for (int i = 0; i < n1; i++)
 {
	 farray.push_back(rand() % 201 -100);
	 cout << farray[i] << " ";
	 sum1 = sum1 + farray[i];
 }
 cout << endl;
 cout << "V2:" << endl;
 for (int i = 0; i < n2; i++)
 {
	 int b = rand() % 201 - 100;
	 sarray.push_back(b);
	 cout << sarray[i] << " ";
	 sum2 = sum2 + sarray[i];
	 if (find(farray.begin(), farray.end(), b) != farray.end())
	 {
		 tarray.push_back(b);
	 }
 }

 cout << endl;
 for (int i = 0; i < tarray.size(); i++)
 {
	 cout << tarray[i] << " ";
 }
 cout << endl << "SA1: " << sum1 / n1 << endl;
 cout << "SA2: " << sum2 / n2 << endl;
	return 0;

}