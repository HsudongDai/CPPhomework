#include <iostream>
#include <fstream>
#include <cassert>
#include <cstdlib>
#include <vector>
#include <utility>
using namespace std;

double distance(double, double, double, double);

int main()
{
    ifstream inf;
    vector<pair<double, double>> temp;
    //enter the file location in brackets
    inf.open("D:\\C++ homework\\points.txt");
    if (!inf.is_open()){
        cout << "Cannot find the file.\n";
        exit(EXIT_FAILURE);
    }
    while (!inf.eof()){
        if (inf.good()){
            double ope1 = 0;
            double ope2 = 0;
            inf >> ope1 >> ope2;
            temp.push_back({ope1, ope2});
        }
            //for (int i = 0; i < temp.size()- 1; i++)
              //  cout << temp[i].first << " " << temp[i].second << endl;
    }
    inf.close();
    double max = 2e30;
    double point1[2], point2[2];
    for (int i = 0; i < temp.size() - 2; i++){
        for (int j = i + 1; j < temp.size() - 1; j++){
            double tech = distance(temp[i].first, temp[i].second,
                                   temp[j].first, temp[j].second);
            if (tech < max){
                max = tech;
                point1[0] = temp[i].first;
                //cout << point1[0] << " ";
                point1[1] = temp[i].second;
                //cout << point1[1] << endl;
                point2[0] = temp[j].first;
                //cout << point2[0] << " ";
                point2[1] = temp[j].second;
                //cout << point2[1] << endl;
            }
        }
    }
    cout << "The closest points are (" << point1[0] << ", "
         << point1[1] << ") and (" << point2[0] << ", "
         << point2[1] << ").";

    return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}
