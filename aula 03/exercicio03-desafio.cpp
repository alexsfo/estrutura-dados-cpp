#include <iostream>
using namespace std;

struct TIME{
    int hh;
    int mm;
    double seconds;
};


TIME convertTime(double secs);

TIME addTime(TIME a, TIME b);



int main(){ /////////////////main

    TIME tempo;
    tempo = convertTime(7355);

    cout << tempo.hh << " hora(s)" << endl;
    cout << tempo.mm << " minuto(s)" << endl;
    cout << tempo.seconds << " segundo(s)" << endl;


    cout << "---------------" << endl;

    TIME tempo2;
    tempo2.hh = 2;
    tempo2.mm = 50;
    tempo2.seconds = 55;

   TIME agora  = addTime(tempo, tempo2);

    cout << agora.hh << " hora(s)" << endl;
    cout << agora.mm << " minuto(s)" << endl;
    cout << agora.seconds << " segundo(s)" << endl;

    

    return 0;
}


TIME addTime(TIME a, TIME b){


    int horaParaSeg = ((a.hh + b.hh) * 3600);
    int minParaSeg = ((a.mm + b.mm)* 60);
    double segundos = (a.seconds + b.seconds);
    

    int hh = horaParaSeg / 3600;
    int mm = (minParaSeg - (3600 * hh)) / 60;
    double sec = (segundos -(3600 * hh)-(mm * 60));

    TIME AGORAVAI;

    AGORAVAI.hh == hh;
    AGORAVAI.mm == mm;
    AGORAVAI.seconds = sec;

    return AGORAVAI;


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