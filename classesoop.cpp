#include <print>
#include <iostream>
#include <string>


class Widget {
private:
    int val;

public:
    Widget(int i) : val(i) {
    }
    ~Widget() {
    }

    void display() {
        std::println("{}", val);
    }
};

class Student {
private:
    std::string name;
    int totalMarks;
    Widget w{1};

public:
    Student(std::string student_name, int marks) {
        name = student_name;
        totalMarks = marks;
    }
    void displayInfo() {
        std::println("Name: {}", name);
        //std::println("Marks: {}", totalMarks);
        std::cout << "Marks: " << totalMarks << std::endl;
        w.display();
    }

    void addMarks(int marks) {
        totalMarks += marks;
    }
};

int main() {
    Student student("Non NullPTR", 100);
    Student* studentptr = &student;
    student.displayInfo();
    studentptr->displayInfo();
}
