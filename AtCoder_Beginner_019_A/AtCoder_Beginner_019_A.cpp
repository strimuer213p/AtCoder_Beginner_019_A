#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	std::vector<int> num;
	num.resize(3);

	std::cin >> num[0] >> num[1] >> num[2];

	std::sort(num.begin(), num.end());

	std::cout << num[1] << std::endl;

	return 0;
}