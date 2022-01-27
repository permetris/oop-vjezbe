#include "Timer.h"

void Timer::SetH(int hour) {
	h = hour;
}
void Timer::SetM(int min) {
	m = min;
}
void Timer::SetS(double sec) {
	s = sec;
}
int Timer::GetH() { return h; }
int Timer::GetM() { return m; }
double Timer::GetS() { return s; }

ostream& operator<<(ostream& out, const Timer& t1) {
	out << t1.h << ":" << t1.m << ":" << t1.s << endl;
	return out;
}
Timer Timer::operator+=(const Timer& other) {

	s += other.s;
	if (s > 59) {
		s = s - 60;
		m++;
	}
	m += other.m;
	if (m == 60) {
		m = m - 60;
		h++;
	}
	h += other.h;
	return *this;

}
Timer& Timer::operator+(const Timer& other) {

	Timer res;

	res.s = s + other.s;
	res.m = m + other.m;
	res.h = h + other.h;

	if (res.s >= 60) {
		res.s -= 60;
		res.m++;
	}
	if (res.m >= 60) {
		res.m -= 60;
		res.h++;
	}

	return res;
}
Timer& Timer::operator-(const Timer& other) {

	Timer res;

	res.s = s - other.s;
	res.m = m - other.m;
	res.h = h - other.h;

	if (res.s < 0) {
		res.s += 60;
		res.m--;
	}
	if (res.m < 0) {
		res.m += 60;
		res.h--;
	}

	return res;
}
Timer Timer::operator /=(const int count) {

	double temp = h * 3600 + m * 60 + s;
	temp /= count;
	
	h = temp / 3600;
	m = (int)temp % 3600 / 60;
	s = (int)temp %3600 % 60;
	


	return *this;
}
bool Timer::operator<(const Timer& other) {

	if (h < other.h) {
		return true;
	}
	else if (h > other.h) {
		return false;
	}
	else {
		if (m < other.m) {
			return true;
		}
		else if (m > other.m) {
			return false;
		}
		else {
			if (s < other.s) {
				return true;
			}
			else {
				return false;
			}
		}
	}
}
 Timer::operator double() {
	return (h*3600+m*60+s);
}