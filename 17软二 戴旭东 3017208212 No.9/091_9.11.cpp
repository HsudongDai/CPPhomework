//17软二戴旭东 转专业
#include <iostream>
using namespace std;

class EvenNumber{
private:
    int obj;
public:
    EvenNumber() : obj(0) {}
    EvenNumber(int x) : obj(x) {}
    int getNext()
    {
        return obj + 2;
    }
    int getPrevious()
    {
        return obj - 2;
    }
};

int main()
{
    EvenNumber test(16);
    cout << test.getNext() << " " << test.getPrevious();
    return 0;
}
