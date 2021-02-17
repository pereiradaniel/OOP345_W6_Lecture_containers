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

	// STL: Standard Template Libraru
	std::array<int, 5> arrSTL_1{};
	std::array<int, 5> arrSTL_2{};

	std::vector<int> coll; // dynamically allocated array.
	coll.push_back(5);
	coll.push_back(8);
	coll.push_back(32);
	coll.push_back(9);
	coll.push_back(1);

	for (auto i = 0; i < coll.size(); ++i)
		cout << coll[i] << ", ";
	cout << endl;
	
	for (auto& item : coll)
		cout << item << ", ";
	cout << endl;

}