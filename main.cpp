#include <iostream>
#include <array>
#include <vector>
#include <list>

using namespace std;

void display(int arr[], size_t size) {
	for (auto i = 0u; i < size; ++i) {
		cout << arr[i] << ", ";
	}
}

void display(std::array<int, 5> arr) {
	for (auto i = 0u; i < arr.size(); ++i) {
		cout << arr[i] << ", ";
	}
}

int main()
{
	// advantage: fast retrieval of the element at a random index 'i'
	// disadvantage: cannot be resized or very expensive to resize
	/*int arr_1[]{ 5, 8, 32, 9, 1 };
	
	int arr_2[5];*/

	// std::vector<int> coll; // dynamically allocated array.
	std::list<int> coll;
	coll.push_back(5);
	coll.push_back(8);
	coll.push_back(32);
	coll.push_back(9);
	coll.push_back(1);

	for (auto it = coll.begin(); it != coll.end(); ++it);

	auto it = coll.begin();
	++(++it);
	// coll.insert(it, -87);
	coll.erase(it);
	
	for (auto& item : coll)
		cout << item << ", ";
	cout << endl;

}