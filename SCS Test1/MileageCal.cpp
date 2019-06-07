/*
* @Author: PC
* @Date:   2018-12-12 13:39:56
* @Last Modified by:   PC
* @Last Modified time: 2018-12-12 14:02:45
*/
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string temp;
	string depart;
	string arrive;
	int miles = 0;
	char level;
	int result;
	getline(cin, temp);
	cin >> depart >> arrive >> miles >> level;
	cout << temp << " " << miles;
	while (temp != "#") {
		switch (level){
			case 'Y':
				if (miles < 500)
					result = 500;
				else
					result = miles;
				break;
			case 'B':
				result = miles * 1.5;
				break;
			case 'F':
				result = miles * 2;
				break;
			default :
				result = 0;
				break;
		}
		cout << result;
		getline(cin, temp);
		if (temp != "0")
			cin >> depart >> arrive >> miles >> level;
		else {
			depart = arrive = "";
			miles = 0;
			level = 'A';
		}
	}
	return 0;
}