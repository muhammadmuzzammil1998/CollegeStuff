#include <iostream>

using namespace std;

class Time {
  int hou, min, sec;

 public:
  Time(int hours = 0, int minutes = 0, int seconds = 0) {
    this->hou = hours;
    this->min = minutes;
    this->sec = seconds;
  }

  void add(Time);
  void print();
};

void Time::add(Time t) {
  int h, m, s;

  s = sec + t.sec;
  m = this->min + t.min + (s / 60);
  h = this->hou + t.hou + (m / 60);

  s %= 60;
  m %= 60;

  cout << hou << " hours " << min << " minutes and " << s << " seconds" << endl;
}
void Time::print() {
  cout << hou << " hours and " << min << " minutes" << sec << " seconds"
       << endl;
}

int main() {
  int h, m, s;

  cout << "Enter hours minutes and seconds: ";
  cin >> h >> m >> s;

  Time a(h, m, s);

  cout << "Enter hours minutes and seconds: ";
  cin >> h >> m >> s;

  Time b(h, m, s);

  a.print();
  b.print();

  cout << "SUM:";
  a.add(b);
}