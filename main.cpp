#include <iostream>
#include <array>
#include <vector>

using namespace std;

void display(int arr[], size_t size) {
	for (auto i = 0; i < size; ++i) {
		cout << arr[i] << ", ";
	}
}

void display(std::array<int, 5> arr) {
	for (auto i = 0; i < arr.size(); ++i) {
		cout << arr[i] << ", ";
	}
}

int main()
{
	// advantage: fast retrieval of the element at a random index 'i'
	// disadvantage: cannot be resized or very expensive to resize
	int arr_1[]{ 5, 8, 32, 9, 1 };
	
	int arr_2[5];

	//	arr_2 = arr_1; // can't
	
	// STL: Standard Template Libraru
	std::array<int, 5> arrSTL_1{};
	std::array<int, 5> arrSTL_2{};

	std::vector<int> vect; // dynamically allocated array.

	arrSTL_2 = arrSTL_1; // Advantage
}