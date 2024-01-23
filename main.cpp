#include <iostream> //pridedame bibliotekà, kuri atsakinga uþ ávedimà ir iðvedimà
#include <cmath> //pridedame bibliotekà, kuri leidþia atlikti matematinius veiksmus
#include <iomanip> //pridedame bibliotekà, kuri atsakinga uþ ávedimà ir iðvedimà
using namespace std; //eilutë, kuri leidþia neraðyti std:: prieð cout, cin, endl, fl, df


int main()
{
    setlocale(LC_ALL, "Lithuanian");  //iðvedimui naudosime lietuviø kalbà
    int skaiciai[100], kvadratai[100], laipsniu[100]; //masyvai, kurie talpins skaièiø, kvadratø ir skaièius pakeltus pasirinktu laipsniu
    int kiek, laipsnis; //kintamieji


    cout << "Kiek skaièiø norite suvesti? "<<endl; //vartotojo paklausiama, kiek skaièiø jis norës ávesti
    cin >> kiek; //ávedama kiekis skaièiø, kurá norima bus panaudoti ir jam priskiriamas kintamasis ,,kiek”





    for (int i = 0; i < kiek; i++) //ciklas, kurio metu vartotojas áveda norimus skaièius ir jis áraðomas á masyvà
    {
        cout <<"Áveskite "<< i + 1 << "-àjá skaièiø:"<<endl;
        cin >> skaiciai[i];
    }


    cout << "Kokiu laipsniu norite, kad jûsø skaièiai bûtø pakelti?"<<endl; //vartotojas paklausiamas, kokiu laipsniu jis norës pakelti savo pasirinktus skaièius
    cin >> laipsnis; //ávedamas laipsnis ir jam priskiriamas kintamasis


    for (int i = 0; i < kiek; i++) //ciklas, kuris á kvadratø ir laipsniø masyvus áraðys skaièius, kurie yra pakelti kvadratu ir vartotojo norimu skaitmeniu
    {
        kvadratai[i] = skaiciai[i] * skaiciai[i];
        laipsniu[i] = pow(skaiciai[i], laipsnis);
    }


    cout << "\nSuvesti skaiciai:\n"; //á ekranà bus iðvedami skaièiai, kurie buvo suvesti


    for (int i = 0; i < kiek; i++) //ciklas, kuris iðveda skaièius á ekranà
    {
        cout << skaiciai[i] << " ";
    }


    cout << "\n\nSiu skaiciu kvadratai:\n"; //á ekranà bus iðvedami kvadratai skaièiø, kurie buvo suvesti


    for (int i = 0; i < kiek; i++) //ciklas, kuris iðveda masyvo skaièius á ekranà
    {
        cout << kvadratai[i] << " ";
    }


    cout << "\n\nSie skaiciai pakelti " << laipsnis << "-u laipsniu:\n";  //á ekranà bus iðvedami skaièiai, kurie buvo pakelti vartotojo norimu laipsniu


    for (int i = 0; i < kiek; i++) //ciklas, kuris iðveda skaièius ið masyvo
    {
        cout << laipsniu[i] << " ";
    }

//kuriama lentelës pradþia
    cout << "\n\n";
    cout << "+----------+-----------+---------------+\n";
    cout << "| Skaicius | Kvadratas | " << laipsnis << "-as laipsnis |\n";
    cout << "+----------+-----------+---------------+\n";


    for (int i = 0; i < kiek; i++) //ciklas, kuris uþpildo lentelës vidø
    {
        cout << "| " << setw(8) << left << skaiciai[i] << " | "
            << setw(9) << kvadratai[i] << " | "
            << setw(13) << laipsniu[i] << " |\n";
    }


    cout << "+----------+-----------+---------------+\n"; //lentelës pabaiga


    return 0;
}
