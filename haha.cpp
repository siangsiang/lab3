#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
ifstream inFile("file.in", ios::in);
int n,k;
inFile >>n;
vector<int> v1(n);
for(k=0; k<n; ++k)
{
 inFile>>v1.at(k);
}
sort(v1.begin(),v1.end());
reverse(v1.begin(),v1.end());
cout<< v1.at(0)+v1.at(1)+v1.at(2)+v1.at(3)+v1.at(4)<<endl;
inFile.close();
return 0;
}
