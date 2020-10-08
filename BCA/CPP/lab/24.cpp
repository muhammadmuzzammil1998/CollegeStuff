#include <iostream>

class Student {
   private:
    int admno;
    char *name;
    float english, math, science, total;
    float ctotal(float e, float m, float s) {
        this->total = e + m + s;
        return this->total;
    }

   public:
    void TakeData(int admno, char *sname, float english, float science, float math) {
        this->admno = admno;
        this->name = sname;
        this->english = english;
        this->science = science;
        this->math = math;
        ctotal(this->english, this->math, this->science);
    }
    void ShowData(Student std) {
        std::cout << "Student details: " << std::endl
                  << " Student ID: " << std.admno << std::endl
                  << " Student Name: " << std.name << std::endl
                  << "  English\t" << std.english << std::endl
                  << "  Science\t" << std.science << std::endl
                  << "  Math\t\t" << std.math << std::endl
                  << "\n  Total\t" << std.total << std::endl;
    }
};

int main() {
    Student std;
    char name[20];
    float no, eng, math, sci;
    std::cout << "Enter student's admission number: ";
    std::cin >> no;
    std::cout << "Enter student's name: ";
    std::cin >> name;
    std::cout << "Enter marks in order of [eng math sci]: ";
    std::cin >> eng >> math >> sci;
    std.TakeData(no, name, eng, sci, math);
    std.ShowData(std);
    return 0;
}
