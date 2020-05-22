#pragma once
#include <vector>
#include <random>

template<class T>
class Maybe {
public:
	Maybe() = delete;
	Maybe(const std::initializer_list<T>& In) :B(In.begin(), In.end()) {
		std::random_device rd;
		std::uniform_int_distribution<std::size_t> UI(0, In.size() - 1);

		P = UI(rd);

		return;
	}

	const T& operator ()() {
		return B[P];
	}

protected:
	std::vector<T> B;
	std::size_t P = 0;

};
