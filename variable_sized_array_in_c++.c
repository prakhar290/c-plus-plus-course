#include <cmath>
#include <cstdio>
#include <vector>  
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,q,size,l,r,n;
    cin>>n>>q;
    vector<vector<int>> vec1; //this is a 2-D vector array
    for(int i=0;i<n;i++)
    {
        cin>>size;
        vector<int> vec2;  // this is 1-d vector array
        for(int j=0;j<size;j++)
        {
          cin>>a;
          vec2.push_back(a); //inserting the elements in the vector array
        }
        vec1.push_back(vec2); // here we insert the 1-D vector array into another 2-D vector array 
    }
    for(int k=0;k<q;k++)
    {
        cin>>l>>r;
        cout<<vec1[l][r]<<"\n"; //giving out the element according to the query
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}