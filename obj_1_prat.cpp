#include "mano_lib.h"

int main(){

    vector <Stud> grupe;
    int sum, atsisk_paz, medianos_poz, n, m;
    char pasirinkimas;
    bool testi = true;
    cout << "Sveiki! Padesiu jums paskaiciuoti galutini studento bala!" << endl;

   while(testi) {
        Stud laik;
        sum = 0;
        int i = 1;
        cout << "Iveskite studento varda: ";
        cin >> laik.var;
        cout << "Iveskite studento pavarde: ";
        cin >> laik.pav;
        
        while(testi){
            cout << "Iveskite " << i << "-a atsiskaitymo pazymi: ";
            i++;
            cin >> atsisk_paz;
            sum += atsisk_paz;
            laik.paz.push_back(atsisk_paz);
            cout << "Ar norite testi pazymiu ivedima? (0 - Ne, 1 - taip): ";
            cin >> testi;
            if (!testi) break;
        }

        cout << "Iveskite egzamino ivertinima: ";
        cin >> laik.egz;
        laik.vidurkis = double(sum) / laik.paz.size();

        sort(laik.paz.begin(), laik.paz.end());

        if (laik.paz.size() % 2 == 0) {
            medianos_poz = laik.paz.size() / 2;
            laik.mediana = ( laik.paz.at(medianos_poz) + laik.paz.at(medianos_poz - 1) ) / 2.0;
        }
        else {
            medianos_poz = floor(laik.paz.size() / 2);
            laik.mediana = laik.paz.at(medianos_poz);
        }
        
        grupe.push_back(laik);
        cout << "Ar norite testi studentu ivedima? (0 - Ne, 1 - taip): ";
        cin >> testi;
        if(!testi) break;
    }

    cout << "Ivedimas baigtas! Norite skaiciuoti galutini bala su studentu vidurkiais ar medianomis? [V/M]" << endl;
    cin >> pasirinkimas;

    cout << std::left << setw(20) << "Pavardė" << setw(20) << " Vardas" << setw(20) << ( (pasirinkimas == 'V') ? " Galutinis (Vid.)" : " Galutinis (Med.)" ) << endl;
    cout << string(56, '-') << endl;
    for (auto n: grupe) {
        n.galutinis = (pasirinkimas == 'V') ? (0.4 * n.vidurkis + 0.6 * n.egz) : (0.4 * n.mediana + 0.6 * n.egz);
        cout << std::left << setw(20) << n.pav << setw(20) << n.var << setw(20) << std::fixed << std::setprecision(2) << n.galutinis << endl;
        }

}

