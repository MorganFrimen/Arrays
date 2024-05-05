#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

template<typename T>
int find_max(const std::vector<T> &vec)
{
	int max = INT_MIN;
	for (const T& i : vec) {
		if (max < i) {
			max = i;
		}
	}
	return max;
}

template<typename T>
std::unordered_set<T> 
find_duplicate(const std::vector<T> &dup)
{
	std::unordered_set<int> seen;
	std::unordered_set<int> duplicate;
	for (int i : dup)
	{
		if (seen.find(i) != seen.end())
		{
			duplicate.insert(i);
		}
		seen.insert(i);
	}
	return duplicate;
}



int main()
{
	std::vector<int> nums{ 1,2,3,4,5,6,7,8,8,9,9,90,1 };
	for (size_t numbers : nums)
		std::cout << "Vector : " << numbers << std::endl;

	int max = find_max(nums);
	std::cout << "Maximum = " << max << std::endl;

	std::unordered_set<int> duplicate = find_duplicate(nums);
	for (auto& arr : duplicate)
	{
		std::cout << "Duplicates Arrays " << arr << std::endl;
	}

	std::cin.get();
}