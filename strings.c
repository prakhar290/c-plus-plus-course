#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  int size_a,size_b;
  string a,b,c;
  cin>>a;
  cin>>b;
  size_a=a.size();
  size_b=b.size();
  cout<<size_a<<" "<<size_b<<endl;
  c=a+b;
  cout<<c<<endl;
  for(int i=0;i<1;i++)
  for(int j=0;j<1;j++)
  {
      int swap;
      swap=a[i];
      a[i]=b[j];
      b[j]=swap;
  }
  cout<<a<<" "<<b;


    return 0;
}
