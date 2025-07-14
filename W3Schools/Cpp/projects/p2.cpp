/*
    Calculate a Students Average
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
    private:
        //variables
        vector<double> scores;
        double grade;
        int age;
        string name;

    public:
        //constructor
        Student(string name, int age);
        //Student();

        //methods
        void inputScore(double score);
        void calcGrade();
        double getGrade();
        string getName();
        int getAge();
};
Student::Student(string name = "Unknown", int age = 0) {
    grade = 0;
    this->age = age;
    this->name = name;
}
void Student::inputScore(double score) {
    scores.push_back(score);
}
void Student::calcGrade() {
    grade = 0; //reset
    for (auto it = scores.begin(); it != scores.end(); ++it) {
        grade += *it;
    }
}
double Student::getGrade() {
    return grade;
}
string Student::getName() {
    return name;
}
int Student::getAge() {
    return age;
}

//---MAIN
int main() {
    cout << "Hello student, welcome to grade calculator!\n";
    
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    int age;
    cout << "Enter your age: ";
    while (!(cin >> age)) {
        cout << "Incorrect input. Try again: ";
        cin.clear(); //reset err
        cin.ignore(10000, '\n');
    }

    if (name.empty()) {
        cout << "Well... :(\n";
    }
    Student s1(name, age);
    cout << "Welcome " << s1.getName() << " age: " << s1.getAge() << '\n';

    //loop and ask for scores
    bool running_flag = true;
    while (running_flag) {
        double score;
        cout << "Enter a score: ";
        while (!(cin >> score)) {
            cout << "Incorrect input. Try again: ";
            cin.clear(); //reset err
            cin.ignore(10000, '\n');
        }
        s1.inputScore(score);

        //should we exit?
        string reply;
        cout << "Finished?[Y/N]: ";
        cin >> reply;
        if (!reply.compare("Y")) { //0 if same
            running_flag = false;
        }
    }

    //print out final score
    s1.calcGrade();
    double grade = s1.getGrade();
    cout << s1.getName() << "\'s score: " << grade << '\n';

    return 0;
}