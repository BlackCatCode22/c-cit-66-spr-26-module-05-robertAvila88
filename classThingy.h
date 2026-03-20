//
// Created by catt9ine on 3/8/26.
//
#ifndef CLASS_THINGY_H
#define CLASS_THINGY_H
#include <string>

using namespace std;

class Animals {
public:
    Animals(int age, string sex, string species, string color, int weight, string birthSeason, string birthPlace) {
        this->age = age;
        this->sex = sex;
        this->species = species;
        this->color = color;
        this->weight = weight;
        this->birthSeason = birthSeason;
        this->birthPlace = birthPlace;
    }
    int getAge() {
        return this->age;
    }
    string getSex() {
        return this->sex;
    }
    string getSpecies() {
        return this->species;
    }
    string getColor() {
        return this->color;
    }
    int getWeight() {
        return this->weight;
    }
    string getBirthSeason() {
        return this->birthSeason;
    }
    string getBirthPlace() {
        return this->birthPlace;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setSex(string sex) {
        this->sex = sex;
    }
    void setSpecies(string species) {
        this->species = species;
    }
    void setColor(string color) {
        this->color = color;
    }
    void setWeight(int weight) {
        this->weight = weight;
    }
    void setBirthSeason(string birthSeason) {
        this->birthSeason = birthSeason;
    }
    void setBirthPlace(string birthPlace) {
        this->birthPlace = birthPlace;
    }
private:
    int age;
    string sex;
    string species;
    string color;
    int weight;
    string birthSeason;
    string birthPlace;
};

class Hyena : public Animals {
public:
    Hyena(int age, string sex, string species, string color, int weight, string birthSeason, string birthPlace)
        :Animals(age, sex, species, color, weight, birthSeason, birthPlace){
    }
};

class Lion : public Animals {
public:
    Lion(int age, string sex, string species, string color, int weight, string birthSeason, string birthPlace)
        :Animals(age, sex, species, color, weight, birthSeason, birthPlace){
    }
};

class Tiger : public Animals {
public:
    Tiger(int age, string sex, string species, string color, int weight, string birthSeason, string birthPlace)
        :Animals(age, sex, species, color, weight, birthSeason, birthPlace){
    }
};

class Bear : public Animals {
public:
    Bear(int age, string sex, string species, string color, int weight, string birthSeason, string birthPlace)
        :Animals(age, sex, species, color, weight, birthSeason, birthPlace){
    }
};

#endif