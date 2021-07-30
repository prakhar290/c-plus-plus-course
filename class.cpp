#include <iostream>
#include <sstream>
#include <stdio.h>
using namespace std;

class Student{
    private:
    int ag, std;
    string first, last;
    public:
    void set_age(int age){
        ag=age;
    }
    int get_age() {
        return ag;
    }
    
    string get_first_name(){
    return first;
    }
     string get_last_name(){
    return last;
    }
    void set_first_name(string first_name){
        first=first_name;
    }
    void set_last_name(string last_name){
        last=last_name;
    }
    int get_standard(){
        return std;
    }
    void set_standard(int standard){
        std=standard;
    } 
    string to_string(){
         cout<<ag<<","<<first<<","<<last<<","<<std;
    return " ";
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
