#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/
struct Student
{
    int age;
    char first_name[51];
    char last_name[51];
    int standard;
};
int main() {
    Student st;
    
    cin>>st.age;
    cin>>st.first_name;
    cin>>st.last_name;
    cin>>st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
