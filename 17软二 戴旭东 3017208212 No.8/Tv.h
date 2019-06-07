#ifndef TV_H_INCLUDED
#define TV_H_INCLUDED
//17软工二班转专业 戴旭东
class Tv{
public:
    friend class Remote;
    enum{Off, On};
    enum{MinVal, MaxVal = 20};
    enum{Antenna, Cable};
    enum{TV, DVD};

    Tv(int s = Off, int mc = 125) : state(s),
        volume(5), maxChannel(mc), mode(Cable), input(TV) {}
    bool onOff() {state = (state == On)? On : Off;}
    bool isOn() const{return state == On;}
    bool volUp();
    bool volDown();
    void chanUp();
    void chanDown();
    void setMode() {mode = (mode == Antenna) ? Antenna : Cable;}
    void setInput() {input = (input == TV) ?TV : DVD;}
    void settingsShow() const;

private:
    int state;
    int volume;
    int maxChannel;
    int channel;
    int mode;
    int input;
};

class Remote{
private:
    int mode;
public:
    Remote(int m = Tv::TV) : mode(m) {}
    void onOff(Tv &t) {t.onOff();}
    bool volUp(Tv &t) {return t.volUp();}
    bool volDown(Tv &t) {return t.volDown();}
    void chanUp(Tv &t) {return t.chanUp();}
    void chanDown(Tv &t) {return t.chanDown();}
    void setMode(Tv &t) {return t.setMode();}
    void setInput(Tv &t) {return t.setInput();}
    void setChan(Tv &t, int c) {t.channel = c;}
};

#endif // TV_H_INCLUDED
