//17软工二班 戴旭东
#include <iostream>
#include "Tv.h"

bool Tv::volUp()
{
    if (volume < MaxVal){
        ++volume;
        return true;
    }
    else
        return false;
}

bool Tv::volDown()
{
    if(volume > MinVal){
        --volume;
        return true;
    }
    else
        return false;
}

void Tv::chanUp()
{
    if(channel < maxChannel)
        ++channel;
    else
        channel = 1;
}

void Tv::chanDown()
{
    if(channel > 1)
        --channel;
    else
        channel = maxChannel;
}

void Tv::settingsShow() const
{
    using std::endl;
    using std::cout;
    cout << "Tv is " << ((state == Off) ? "Off" : "On") << endl;
    if (state == On){
        cout << "Volume setting = " << volume << endl;
        cout << "Channel setting = " << channel << endl;
        cout << "Mode = "
            << (mode == Antenna ? "Antenna" : "Cable") << endl;
        cout << "Input = "
            << ((input == TV) ? "TV" : "DVD") << endl;
    }
}
