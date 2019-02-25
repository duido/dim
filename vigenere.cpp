
/*
    caratteri da 97 a 122

*/
#include <fstream>
#include <iostream>

#define CAR 26
#define A 97

using namespace std;

 ifstream IN("in.txt");
 ofstream OUT("out.txt", std::ofstream::app);

void carica(char tab[][CAR]);
void stampa(char tab[][CAR]);
void cifra(string k, string frase);
void decifra(string k, string frase);
void decarica(char tab[][CAR]);

int main()
{

  char tab[CAR][CAR];
  string k = "ciao";
  string frase;

  char ch;
  while(!IN.eof())
  {
    IN >> frase;
    //cifra();
  }
  IN.close();




  decifra(k, frase);
  //stampa(tab);

  OUT.close();

  return 0;
}

void cifra(string k, string frase)
{
    int j;
    char tab[CAR][CAR];
    carica(tab);
    for(int i = 0;i < frase.length();i++){
        j = i % k.length();
        OUT << tab[k[j]-A][frase[i]-A];
    }

}

void decifra(string k, string frase)
{
    int j, l;
    char tab[CAR][CAR];
    carica(tab);
    for(int i = 0;i < frase.length();i++){
        j = i % k.length();
        for(l = 0;l < CAR;l++)
            if(tab[k[j]-A][l] == frase[i]){
                break;
            }
        OUT << tab[0][l];
    }

}

void carica(char tab[][CAR])
{
    for(int i = 0;i < CAR;i++)
        for(int j = 0;j < CAR;j++)
            tab[i][j] = ((i + j) % CAR) + A;
}

void decarica(char tab[][CAR])
{
    for(int j = 0;j < CAR;j++)
        for(int i = 0;i < CAR;i++)
            tab[i][j] = ((i + j) % CAR) + A;
}





void stampa(char tab[][CAR])
{
    for(int i = 0;i < CAR;i++){
        for(int j = 0;j < CAR;j++)
            cout << tab[i][j];
        cout << endl;
    }

}
