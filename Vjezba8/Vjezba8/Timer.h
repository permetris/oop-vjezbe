#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Timer {
private:
	int h;
	int m;
	double s;
public:
	Timer() {
		h = 0;
		m = 0;
		s = 0;
	}
	Timer(int hour, int min, double sec) {
		h = hour;
		m = min;
		s = sec;
	}
	void SetH(int hour);
	void SetM(int min);
	void SetS(double sec);

	int GetH();
	int GetM();
	double GetS();

	Timer operator+=(const Timer& other);
	Timer operator/=(const int count);
	Timer& operator+(const Timer& other);
	Timer& operator-(const Timer& other);

	friend ostream& operator<<(ostream& out, const Timer& t1);
	bool operator<(const Timer& other);
	operator double();

};

class Functor {

	int penalty;
	
public:
	Functor(int num) : penalty(num) {}

	Timer operator()(Timer& t1) {
		int h = t1.GetH();
		int m = t1.GetM();
		int s = t1.GetS();


		s = s - penalty;
		if (s < 0) {
			s = s + 60;
			m--;
			if (m < 0) {
				m = m + 60;
				h--;
			}
		}
		t1.SetH(h);
		t1.SetM(m);
		t1.SetS(s);

		return t1;
	}
};



