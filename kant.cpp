#include <iostream>
#include <iomanip>

using namespace std;

const double USD_TO_EUR = 0.90;
const double USD_TO_GBP = 0.76;
const double USD_TO_JPY = 109.65;
const double USD_TO_PLN = 4.00;

const double EUR_TO_USD = 1.11;
const double EUR_TO_GBP = 0.84;
const double EUR_TO_JPY = 121.78;
const double EUR_TO_PLN = 4.44;

const double GBP_TO_USD = 1.32;
const double GBP_TO_EUR = 1.19;
const double GBP_TO_JPY = 200;
const double GBP_TO_PLN = 5.28;

const double JPY_TO_USD = 0.0091;
const double JPY_TO_EUR = 0.0082;
const double JPY_TO_GBP = 0.0069;
const double JPY_TO_PLN = 0.036;

const double PLN_TO_USD = 0.25;
const double PLN_TO_EUR = 0.23;
const double PLN_TO_GBP = 0.19;
const double PLN_TO_JPY = 27.78;

double przeliczWalute(double kwota, const string& zWaluty, const string& naWalute);

int main() {
    string zWaluty, naWalute;
    double kwota, przeliczonaKwota;
    
    cout << "Podaj walutę, którą posiadasz (USD, EUR, GBP, JPY, PLN): ";
    cin >> zWaluty;
    cout << "Podaj ilość posiadanych pieniedzy: ";
    cin >> kwota;
    cout << "Podaj walutę, na którą chcesz wymienić (USD, EUR, GBP, JPY, PLN): ";
    cin >> naWalute;

    przeliczonaKwota = przeliczWalute(kwota, zWaluty, naWalute);

    cout << fixed << setprecision(2);
    cout << "Otrzymasz: " << przeliczonaKwota << " " << naWalute << endl;

    return 0;
}

double przeliczWalute(double kwota, const string& zWaluty, const string& naWalute) {
    if (zWaluty == naWalute) {
        return kwota;
    }

    if (zWaluty == "USD") {
        if (naWalute == "EUR") return kwota * USD_TO_EUR;
        if (naWalute == "GBP") return kwota * USD_TO_GBP;
        if (naWalute == "JPY") return kwota * USD_TO_JPY;
        if (naWalute == "PLN") return kwota * USD_TO_PLN;
    } else if (zWaluty == "EUR") {
        if (naWalute == "USD") return kwota * EUR_TO_USD;
        if (naWalute == "GBP") return kwota * EUR_TO_GBP;
        if (naWalute == "JPY") return kwota * EUR_TO_JPY;
        if (naWalute == "PLN") return kwota * EUR_TO_PLN;
    } else if (zWaluty == "GBP") {
        if (naWalute == "USD") return kwota * GBP_TO_USD;
        if (naWalute == "EUR") return kwota * GBP_TO_EUR;
        if (naWalute == "JPY") return kwota * GBP_TO_JPY;
        if (naWalute == "PLN") return kwota * GBP_TO_PLN;
    } else if (zWaluty == "JPY") {
        if (naWalute == "USD") return kwota * JPY_TO_USD;
        if (naWalute == "EUR") return kwota * JPY_TO_EUR;
        if (naWalute == "GBP") return kwota * JPY_TO_GBP;
        if (naWalute == "PLN") return kwota * JPY_TO_PLN;
    } else if (zWaluty == "PLN") {
        if (naWalute == "USD") return kwota * PLN_TO_USD;
        if (naWalute == "EUR") return kwota * PLN_TO_EUR;
        if (naWalute == "GBP") return kwota * PLN_TO_GBP;
        if (naWalute == "JPY") return kwota * PLN_TO_JPY;
    }

    cerr << "Nieprawidłowa waluta." << endl;
    return 0;
}
