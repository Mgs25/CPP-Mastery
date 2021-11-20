#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

void display_separator();
void display_header(const string);

struct City {
    string name;
    long population;
    long double cost;
};

struct Country {
    string name;
    vector<City> cities;
};

struct Tours {
    string title;
    vector<Country> countries;
};

int main() {
    Tours tour {
        "The Great Asian Tour",
        {
            {
                "India",
                {
                    { "Chennai", 18000000, 20000.25 },
                    { "Coimbatore", 1000000, 10000.70 },
                    { "Trichy", 18034, 5000.10 }
                }
            },
            
            {
                "China",
                {
                    { "Beijing", 200000, 50000.80 },
                    { "Shanghai", 250000, 100000.65 },
                    { "Shenzhen", 199900, 50000.95 }
                }
            },
            
            {
                "Japan",
                {
                    { "Tokyo", 130000, 10000.15 },
                    { "Kyoto", 2500000, 12000.20 },
                    { "Osaka", 120000, 18000.28 }
                }
            }
        }
    };

    display_header(tour.title);
    
    for (const auto& country: tour.countries) {
        for (size_t i {0}; i < country.cities.size(); i++) {
            if (i == 0)
                cout << left << setw(30 - country.name.size()) << country.name;
            else
                cout << setw(25) << ' ';
            cout << country.cities[i].name;
            cout << setw(35 - (country.cities[i].name).size()) << ' ';
            cout << country.cities[i].population;
            cout << setw(15 - to_string(country.cities[i].population).size()) << ' ';
            cout << right << country.cities[i].cost << endl;
        }
    }
    return 0;
}

void display_separator() {
    cout << setfill('-') << setw(85) << '-' << endl;
    cout << setfill(' ');
}

void display_header(string title) {
    display_separator();
    cout << right << setw(52) << title << endl;
    display_separator();
    cout << left << setw(25) << "Country";
    cout << left << setw(25) << "City";
    cout << right << setw(20) << "Population";
    cout << right << setw(10) << "Cost" << endl;
    display_separator();
}