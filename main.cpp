#include <iostream> //pridedame bibliotek�, kuri atsakinga u� �vedim� ir i�vedim�
#include <cmath> //pridedame bibliotek�, kuri leid�ia atlikti matematinius veiksmus
#include <iomanip> //pridedame bibliotek�, kuri atsakinga u� �vedim� ir i�vedim�
using namespace std; //eilut�, kuri leid�ia nera�yti std:: prie� cout, cin, endl, fl, df


int main()
{
    setlocale(LC_ALL, "Lithuanian");  //i�vedimui naudosime lietuvi� kalb�
    int skaiciai[100], kvadratai[100], laipsniu[100]; //masyvai, kurie talpins skai�i�, kvadrat� ir skai�ius pakeltus pasirinktu laipsniu
    int kiek, laipsnis; //kintamieji


    cout << "Kiek skai�i� norite suvesti? "<<endl; //vartotojo paklausiama, kiek skai�i� jis nor�s �vesti
    cin >> kiek; //�vedama kiekis skai�i�, kur� norima bus panaudoti ir jam priskiriamas kintamasis ,,kiek�





    for (int i = 0; i < kiek; i++) //ciklas, kurio metu vartotojas �veda norimus skai�ius ir jis �ra�omas � masyv�
    {
        cout <<"�veskite "<< i + 1 << "-�j� skai�i�:"<<endl;
        cin >> skaiciai[i];
    }


    cout << "Kokiu laipsniu norite, kad j�s� skai�iai b�t� pakelti?"<<endl; //vartotojas paklausiamas, kokiu laipsniu jis nor�s pakelti savo pasirinktus skai�ius
    cin >> laipsnis; //�vedamas laipsnis ir jam priskiriamas kintamasis


    for (int i = 0; i < kiek; i++) //ciklas, kuris � kvadrat� ir laipsni� masyvus �ra�ys skai�ius, kurie yra pakelti kvadratu ir vartotojo norimu skaitmeniu
    {
        kvadratai[i] = skaiciai[i] * skaiciai[i];
        laipsniu[i] = pow(skaiciai[i], laipsnis);
    }


    cout << "\nSuvesti skaiciai:\n"; //� ekran� bus i�vedami skai�iai, kurie buvo suvesti


    for (int i = 0; i < kiek; i++) //ciklas, kuris i�veda skai�ius � ekran�
    {
        cout << skaiciai[i] << " ";
    }


    cout << "\n\nSiu skaiciu kvadratai:\n"; //� ekran� bus i�vedami kvadratai skai�i�, kurie buvo suvesti


    for (int i = 0; i < kiek; i++) //ciklas, kuris i�veda masyvo skai�ius � ekran�
    {
        cout << kvadratai[i] << " ";
    }


    cout << "\n\nSie skaiciai pakelti " << laipsnis << "-u laipsniu:\n";  //� ekran� bus i�vedami skai�iai, kurie buvo pakelti vartotojo norimu laipsniu


    for (int i = 0; i < kiek; i++) //ciklas, kuris i�veda skai�ius i� masyvo
    {
        cout << laipsniu[i] << " ";
    }

//kuriama lentel�s prad�ia
    cout << "\n\n";
    cout << "+----------+-----------+---------------+\n";
    cout << "| Skaicius | Kvadratas | " << laipsnis << "-as laipsnis |\n";
    cout << "+----------+-----------+---------------+\n";


    for (int i = 0; i < kiek; i++) //ciklas, kuris u�pildo lentel�s vid�
    {
        cout << "| " << setw(8) << left << skaiciai[i] << " | "
            << setw(9) << kvadratai[i] << " | "
            << setw(13) << laipsniu[i] << " |\n";
    }


    cout << "+----------+-----------+---------------+\n"; //lentel�s pabaiga


    return 0;
}
