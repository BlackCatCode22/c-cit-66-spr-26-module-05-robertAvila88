//
// Created by catt9ine on 3/12/26.
//
#include <iostream>
#include <list>
using namespace std;

class animal {
private:
    int age;
    string sex;
    string species;
    string birthSeason;
    string color;
    int weight;
    string birthPlace;
public:
    animal(int age, string sex, string species, string birthSeason, string color, int weight, string birthPlace) {
        age = 0;
        sex = sex;
        species = species;
        birthSeason = birthSeason;
        color = color;
        weight = 0;
        birthPlace = birthPlace;
    }
    void GetInfo() {
        cout << "Age: " << age << endl;
        cout << "Sex: " << sex << endl;
        cout << "Species: " << species << endl;
        cout << "Birth Season: " << birthSeason << endl;
        cout << "Color: " << color << endl;
        cout << "Weight: " << weight << endl;
        cout << "Birth Place: " << birthPlace << endl;
    }
};
class hyena:public animal {
public:
    hyena(int age, const string& sex, const string& species, const string& birthSeason, const string& color, int weight, const string& birthPlace) : animal(age, sex, species, birthSeason, color, weight, birthPlace) {

    }
};
int main() {
    hyena hyenas ()

    return 0;
}