//
// Created by catt9ine on 3/8/26.
//
#include "classThingy.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main () {
    vector<Hyena*> hyenaList;
    vector<Lion*> lionList;
    vector<Tiger*> tigerList;
    vector<Bear*> bearList;
    ifstream file;
    string data;
    file.open("arrivingAnimals.txt");
    map<string, int> animalAmount;
    animalAmount["Hyena"] = 0;
    animalAmount["Lion"] = 0;
    animalAmount["Tiger"] = 0;
    animalAmount["Bear"] = 0;
    while (getline(file, data)) {
        int age;
        string sex;
        string species;
        string birthSeason;
        string color;
        int weight;
        string birthPlace;

        string temp;
        int tempIndex = 0;
        for (int i = 0; i < 5; i++) {
            if (i != 4) {
                tempIndex = data.find(", ");
                temp = data.substr(0, tempIndex);
            } else {
                temp = data;
            }
            switch (i) {
                case 0: //this is taking the first block from arrivingAnimals.txt (4 year old female hyena,) and parsing each bit into its own thingy and so on
                    age = stoi(temp.substr(0, temp.find(" ")));
                    if (temp.find("female") != string::npos)
                        sex = "female";
                    else
                        sex = "male";
                    if (temp.find("hyena") != string::npos)
                        species = "hyena";
                    else if (temp.find("lion") != string::npos)
                        species = "lion";
                    else if (temp.find("tiger") != string::npos)
                        species = "tiger";
                    else
                        species = "bear";
                    break;
                case 1:
                    if (temp.find("unknown") != string::npos)
                        birthSeason = "unknown";
                    else if (temp.find("summer") != string::npos)
                        birthSeason = "summer";
                    else if (temp.find("fall") != string::npos)
                        birthSeason = "fall";
                    else if (temp.find("winter") != string::npos)
                        birthSeason = "winter";
                    else if (temp.find("spring") != string::npos)
                        birthSeason = "spring";
                    break;
                case 2:
                    color = temp.substr(0, temp.find(" color"));
                    break;
                case 3:
                    weight = stoi(temp.substr(0, temp.find(" pounds")));
                    break;
                default:
                    birthPlace = temp.substr(5);
            };
            data = data.substr(tempIndex + 2);
        }

        if (species == "hyena") {
            hyenaList.push_back(new Hyena(age, sex, species, color, weight, birthSeason, birthPlace));
            animalAmount["Hyena"] ++;
        }
        else if (species == "lion") {
            lionList.push_back(new Lion(age, sex, species, color, weight, birthSeason, birthPlace));
            animalAmount["Lion"] ++;
        }
        else if (species == "tiger") {
            tigerList.push_back(new Tiger(age, sex, species, color, weight, birthSeason, birthPlace));
            animalAmount["Tiger"] ++;
        }
        else {
            bearList.push_back(new Bear(age, sex, species, color, weight, birthSeason, birthPlace));
            animalAmount["Bear"] ++;
        }
    }

    int sizeOfHyenaList = animalAmount ["Hyena"];
    for (int i = 0; i < sizeOfHyenaList; i++) {
        delete hyenaList.at(i);
    }
    int sizeOfLionList = animalAmount ["Lion"];
    for (int i = 0; i < sizeOfLionList; i++) {
        delete lionList.at(i);
    }
    int sizeOfTigerList = animalAmount ["Tiger"];
    for (int i = 0; i < sizeOfTigerList; i++) {
        delete tigerList.at(i);
    }
    int sizeOfBearList = animalAmount ["Bear"];
    for (int i = 0; i < sizeOfBearList; i++) {
        delete bearList.at(i);
    }
    file.close();
    return 0;
}