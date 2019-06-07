//17软二戴旭东 转专业
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>
using namespace std;

class stopWatch{
private:
    long startTime;
    long stopTime;
public:
    stopWatch() : startTime(time(NULL)), stopTime(0) {}
    void start(){
        startTime = time(NULL);
    }
    void stop()  {
       stopTime = time(NULL);
    }
    long getElapsedTime(){
        return stopTime - startTime;
    }
    long getStart(){
        return startTime;
    }
    long getStop(){
        return stopTime;
    }
};

double random_unint(unsigned int min, unsigned int max)
{
    static std::default_random_engine e(time(NULL));
    static std::uniform_real_distribution<double> u(min, max);
    return u(e);
}

void selectSort(double r[], int n){
    int i,index,j,temp;
    for(i=1; i<n; i++)
    {
        index = i;
        for(j=i+1; j<n; j++)
        {
            if(r[index] > r[j])
            {
                index = j;
            }
        }
        if(index != i)
        {
            temp = r[index];
            r[index] = r[i];
            r[i] = temp;
        }
    }
}

int main()
{
    double targ[100000];
    for (int i = 0; i < 100000; i++){
        targ[i] = random_unint(0, 1e9);
    }
    stopWatch test1;
    cout << test1.stopWatch::getStart() << endl;
    test1.start();
    selectSort(targ, 100000);
    test1.stop();
    cout << test1.stopWatch::getStop() << endl;
    cout << test1.stopWatch::getElapsedTime();
    return 0;
}
