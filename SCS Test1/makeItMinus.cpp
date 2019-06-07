/*
* @Author: PC
* @Date:   2018-12-09 13:10:00
* @Last Modified by:   PC
* @Last Modified time: 2018-12-09 13:12:27
*/
#include <iostream>

int main()
{
	std::cout << "Please enter a number";
	int num = 0;
	std::cin >> num;
	num = (num > 0) ? -num : num;
	std::cout << num << std::endl;
	return 0;
}