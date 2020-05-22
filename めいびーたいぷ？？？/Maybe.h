#pragma once
#include <vector>
#include <random>

template<class T>
class Maybe {
public:
	Maybe() = delete;
	Maybe(const std::initializer_list<T>& In) :B(In.begin(), In.end()) {
		Reroll();

		return;
	}
	const T& Get() {
		return B[P];
	}
	std::size_t Size() {
		return B.size();
	}
	bool Reroll() {
		std::random_device rd;
		std::uniform_int_distribution<std::size_t> UI(0, B.size() - 1);
		P = UI(rd);

		return true;
	}
	bool Observation(const std::size_t& In) {
		return In == P;
	}
	const T& operator ()() {
		return B[P];
	}

protected:
	std::vector<T> B;
	std::size_t P = 0;

};
