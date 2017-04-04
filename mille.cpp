#include <iostream>
#include <string>

using namespace std;

string lettere(long );

int main()
{
    long n = -34;

    cout << lettere(n);

    return 0;
}

string lettere(long n)
{
    string uni[] = {"zero", "uno", "due", "tre", "quattro", "cinque", "sei", "sette", "otto", "nove"};
    string dec[] = {"", "dieci", "venti", "trenta", "quaranta", "cinquanta", "sessanta", "settanta", "ottanta", "novanta"};
    string teen[] = {"", "undici", "dodici", "tredici", "quattordici", "quindici", "sedici", "diciassette", "diciootto", "diciannove"};
    string milia = "miliardo";
    string mila = "mila";
    string cento = "cento";
    string s = "";
    string segno = "";

    if(n > 99999999){
        n -= 1000000000;
        if(n > 999999999)
            s = "due" + milia;
        else
            s = "un" + milia;
    }

    if(n > 99999999){
        int m = n / 100000000;

    }


    if(n < 0){
        segno = "meno ";
        n = -n;
     }

    if(n < 10)
        s = uni[n];
    else if (n == 10){
        s = dec[1];
    } else if(n > 10 && n < 20){
        int u = n % 10;
        s = teen[u];
    } else if
        int u = n % 10;
        int d = n / 10;
        s = "" + dec[d] + uni[u];
    } else {

    }

    s = segno + s;

    return s;
}
