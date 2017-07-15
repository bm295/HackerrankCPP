#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student {
    private:
        int _age;
        int _standard;
        string _first_name;
        string _last_name;
    public:
        int get_age() {
            return _age;
        }
        void set_age(int age) {
            _age = age;
        }
        int get_standard() {
            return _standard;
        }
        void set_standard(int standard) {
            _standard = standard;
        }
        string get_first_name() {
            return _first_name;
        }
        void set_first_name(string first_name) {
            _first_name = first_name;
        }
        string get_last_name() {
            return _last_name;
        }
        void set_last_name(string last_name) {
            _last_name = last_name;
        }
        string to_string() {
            return std::to_string(_age) + "," + _first_name + "," + _last_name + "," + std::to_string(_standard);
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
