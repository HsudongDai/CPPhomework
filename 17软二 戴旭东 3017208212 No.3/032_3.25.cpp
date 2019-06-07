//17软工二班 戴旭东 转专业
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double r1x, r1y, r1Hgt, r1Wth;
    double r2x, r2y, r2Hgt, r2Wth;

    cout << "Enter r1's center x-, y-coordinates, width, and height: ";
    cin >> r1x >> r1y >> r1Hgt >> r1Wth;
    cout << "Enter r2's center x-, y-coordinates, width, and height: ";
    cin >> r2x >> r2y >> r2Hgt >> r2Wth;
    if	(sqrt(pow(r2y - r1y, 2)) + r2Hgt / 2 <= r1Hgt / 2 &&
			(sqrt(pow(r2x - r1x, 2)) + r2Wth / 2 <= r1Wth / 2) &&
			(r1Hgt / 2 + r2Hgt / 2 <= r1Hgt) &&
			(r1Wth / 2 + r2Wth / 2 <= r1Wth))
			cout << "r2 is inside r1";
    else if ((r1x + r1Wth / 2 > r2x - r2Wth) ||
					(r1y + r1Hgt / 2 > r2y - r2Hgt))
        cout << "r2 overlaps r1";
    else
        cout << "r2 does not overlap r1";
}
