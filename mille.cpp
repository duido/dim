#include <iostream>
#include <string>

using namespace std;

string lettere(long );
string centinaia(int n);

int main()
{
    long n = 10001001;

	cout << lettere(n);

    return 0;
}

string lettere(long n)
{        
    string s = "";
    string segno = "";
    
    if(n == 0)
    	return "zero";
    
    if(n < 0){
        segno = "meno ";
        n = -n;
    }
    
    int bil = n / 1000000000;
	n %= 1000000000;
	cout << bil << " " << n << endl;
	int mil = n / 1000000;
	n %= 1000000;
	cout << mil << " " << n << endl;
	int mila = n / 1000;
	n %= 1000;
	cout << mila << " " << n << endl;
	
	
	if(bil)
		if(bil == 1)
			s = "unmiliardo ";
		else
			s = "duemiliardi ";	
	
	if(mil)	
		if(mil == 1)
			s + "unmilione ";
		else	
			s = s + centinaia(mil) + "milioni ";
	
	if(mila)
		if(mila == 1)
			s = s + "mille ";
		else
			s = s + centinaia(mila) + "mila ";
	
	s = s + centinaia(n);
    s = segno + s;

    return s;
}

string centinaia(int n){
	string uni[] = {"", "uno", "due", "tre", "quattro", "cinque", "sei", "sette", "otto", "nove"};
    string dec[] = {"", "dieci", "venti", "trenta", "quaranta", "cinquanta", "sessanta", "settanta", "ottanta", "novanta"};
    string decu[] = {"", "", "vent", "trent", "quarant", "cinquant", "sessant", "settant", "ottant", "novant"};
    string teen[] = {"", "undici", "dodici", "tredici", "quattordici", "quindici", "sedici", "diciassette", "diciootto", "diciannove"};
	string s = "";
	
	int m = n / 100;
	
	if(m == 1)
		m = 0;
	
	if(n > 99)	
		s = uni[m] + "cento";
	
	n %= 100;	
		
	if(n == 10)
		s = s + "dieci";
	else if(n > 19){
			int m = n / 10;
			n %= 10;
			if(n == 1)
				s += decu[m];
			else	
				s += dec[m];
			
			s += uni[n];
		} else if(n < 10)
				s = s + uni[n];
			else {
				n -= 10;
				s = s + teen[n];
			}
	
	return s;		
}
