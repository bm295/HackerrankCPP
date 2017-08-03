#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    protected:
        string name;
        int age;
    public:
        virtual void getdata() {}
        virtual void putdata() {}
};
int professorCount = 0;
class Professor : public Person {
    private:
        int publications;
        int cur_id;
    public:
        void getdata() {
            cin >> name >> age >> publications;
        }
        void putdata() {
            cur_id = ++professorCount;
            cout << name << " " << age << " " << publications << " " << cur_id << endl;
        }
};
int studentCount = 0;
class Student : public Person {
    private:
        int marks[6];
        int cur_id;
    public:
        void getdata() {
            cin >> name >> age;
            for (int i = 0; i < 6; i++) {
                cin >> marks[i];
            }
        }
        void putdata() {
            cur_id = ++studentCount;
            int sum = 0;
            for (int i = 0; i < 6; i++) {
                sum += marks[i];
            }
            cout << name << " " << age << " " << sum << " " << cur_id << endl;
        }
};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
