#include<vector>

template<typename T>
class Stack {

private:
	std::vector<T> s;
public:
	void Push(const T num) {
		s.push_back(num);
	}
	void Pop() {
		s.pop_back();
	}
	bool IsEmpty() {
		return s.size();
	}
};