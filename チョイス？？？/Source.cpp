#include <iostream>

template <class T>
T& GreaterChoise(T& A, T& B) {
	return A > B ? A : B;
}
template <class T>
T& LesserChoise(T& A, T& B) {
	return A < B ? A : B;
}
int main() {
	int A = 2;
	int B = 3;

	auto& C = GreaterChoise(A, B);

	std::cout << &A << ',' << &B << ',' << &C << std::endl;

	return 0;
}