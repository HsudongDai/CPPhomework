//17软二戴旭东 转专业
#include <iostream>
//#include <utility>
//#include <vector>
#include <string>
using namespace std;

int main()
{
    int cnt = 0;
    cout << "Enter the number of etudiants: ";
    cin >> cnt;

    struct Item{
        string name;
        double grade;
    };
    Item items[cnt] ;
    Item p1, p2;
    for (int j = 0; j < cnt; j++){
        cout << "Entrez les noms et les notes des etudiants, s'il vous plait: ";
        cin >> items[j].name >> items[j].grade;
    }
    p1 = items[0];
    p2 = items[cnt - 1];
    for (auto &x : items){
        if (x.grade > p1.grade){
            p1 = x;
    }
    for (auto &y : items){
        if (y.grade > p2.grade && y.grade < p1.grade)
            p2 = y;
    }
    //to prevent the 1st and 2nd highest score is the same
    if (p1.grade == p2.grade)
    {
        items[cnt - 1].grade = -1;
        p2 = items[cnt / 2];
        for (auto &z : items)
            if (z.grade > p2.grade && z.grade < p1.grade){
               p2 = z;
            }
    }
}
    cout << "The 1st student is " << p1.name
         << " and the grade is " << p1.grade << endl;
    cout << "The 2nd student is " << p2.name
         << " and the grade is " << p2.grade << endl;

    system("pause");
    return 0;
}
//unable to execute, merely a failed attempt

    /*vector<pair<string, double> > items;
    for (int j = 0; j < cnt; j++){
        cout << "Please enter the name and grade of items: ";
        string temp1;
        double temp2;
        pair<string, double> temp3;
        cin >> temp1 >> temp2;
        temp3 = make_pair(temp1, temp2);
        items[j] = temp3;
    }
    pair<string, double> p1;
    pair<string, double> p2;
    p1 = p2 = items[0];
    for (int i = 0; i < items.size() - 2; i++){
        if (items[i+1].second < p2.second){
            if (items[i+1].second < p1.second){
                p2 = p1;
                p1 = items[i+1];
            }
            else if(items[i+1].second = p1.second)
                p2 = items[i+1];
            else
                p2 = items[i+1];

    }
    }
    cout << "The 1st cheapest item is " << p1.first
         << " and its grade is $" << p1.second;
    cout << "The 2nd cheapest item is " << p2.first
         << " and its grade is $" << p2.second;*/

