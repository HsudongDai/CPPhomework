//17级软工二班 戴旭东（转专业）
#include <iostream>
using std::cout;

void Popu(int year);

int main()
{
    cout << "Enter the times of circulation you want: ";
    int year;
    std::cin >> year;
    Popu(year);
    system("pause");
    return 0;
}

void Popu(int year)
{
    const long origine = 312032486;
    long demograph = origine;
    const int cinqAnnee = 365 * 5 * 24 * 3600;
    const double birth = cinqAnnee / 7.0;
    const double mort = cinqAnnee / 13.0;
    const double immigrant = cinqAnnee / 45.0;
    for (int i = 0; i < year; i++)
    {
        demograph += (birth + immigrant - mort);
        cout << "The present population of No." << i + 1
             << " five years is " << demograph << "! \n";
    }
    cout << "Done!";
}
