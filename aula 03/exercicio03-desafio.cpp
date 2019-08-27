#include <iostream>
using namespace std;

struct TIME{
    int hh;
    int mm;
    double seconds;
};

TIME convertTime(double secs){
    int hh, mm;
    double seconds;
    
    hh = secs / 3600;
    mm = (secs - (3600 * hh)) / 60;
    seconds = (secs -(3600 * hh)-(mm * 60));

    TIME tempoTotal;
    tempoTotal.hh = hh;
    tempoTotal.mm = mm;
    tempoTotal.seconds = seconds;
    
    return tempoTotal;
}

int main(){

    TIME tempo;
    tempo = convertTime(7355);

    cout << tempo.hh << " hora(s)" << endl;
    cout << tempo.mm << " minuto(s)" << endl;
    cout << tempo.seconds << " segundo(s)" << endl;

    return 0;
}


