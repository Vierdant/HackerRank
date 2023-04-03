#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int std_id = 0, prof_id = 0;

class Person {
    
    protected:
    string name;
    int age;
    int cur_id = 0;
    
    public:
    virtual void getdata() {};
    virtual void putdata() {};
    
};

class Professor : public Person {
    
    int publications;
    
    public:
    Professor() {
        prof_id++;
        cur_id = prof_id;
    }
    
    void getdata() override {
        cin >> name;
        cin >> age;
        cin >> publications;
    } 
    
    void putdata() override {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

class Student : public Person {
    
    int marks[6];
    
    public:
    Student() {
        std_id++;
        cur_id = std_id;
    }
    
    void getdata() override {
        cin >> name;
        cin >> age;
        
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }
    
    void putdata() override {
        cout << name << " " << age << " ";
        int sum = 0;
        for (int mark : marks) {
            sum += mark;
        }
        cout << sum << " " << cur_id << " " << endl;
    }
};

int main(){

    int n, val;
    cin >> n; //The number of objects that is going to be created.
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
