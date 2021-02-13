#include <iostream>

using namespace std;

class Time {
  int hours, minutes, seconds;

 public:
  Time(int hours = 0, int minutes = 0, int seconds = 0) {
    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;
  }

  Time add(Time);
  void print();
};

Time Time::add(Time t) {
  int h, m, s;

  s = this->seconds + t.seconds;
  m = this->minutes + t.minutes + (s / 60);
  h = this->hours + t.hours + (m / 60);

  s %= 60;
  m %= 60;

  return Time(h, m, s);
}

void Time::print() {
  cout << hours << " hours " << minutes << " minutes and " << seconds
       << " seconds" << endl;
}

int main() {
  int h, m, s;

  cout << "Enter hours, minutes and seconds for a: ";
  cin >> h >> m >> s;

  Time a(h, m, s);

  cout << "Enter hours, minutes and seconds for b: ";
  cin >> h >> m >> s;

  Time b(h, m, s);

  a.print();
  b.print();

  cout << "SUM:";
  a.add(b).print();

  return 0;
}