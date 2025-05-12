#include <iostream>
#include <string.h>
// #include "Hero.cpp"
using namespace std;

class Hero{
    public:
        int health;
        char* name;
        char level;
        static int timeToComplete;

    Hero(){
        name = new char[100];
        cout << "Hero is called" << endl;
    }
    Hero(int health, char level){
        cout << "health = " << health << endl;
        cout << "level = " << level << endl;
    }
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name) + 1];  // Creating a Deep Copy

        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
        cout << "Copy constructor called" << endl;
    }

    void print(){
        cout << endl << "[ Name = " << name << ", ";
        cout << "Health = " << health << ", ";
        cout << "level = " << level << " ]" << endl << endl;
    }

};

int Hero::timeToComplete = 5;

int main()
{
    // Hero hero;
    // Hero *hero1 = new Hero;

    // hero.name = "Hero";
    // hero.health = 100;
    // hero.level = 'A';

    // (*hero1).health = 200;
    // (*hero1).level = 'B';
    // hero1 -> name = "Hero 1";
    // hero1 -> health = 100;
    // hero1 -> level = 'A';
    // hero.print();


    // Hero hero2(hero); // By default compiler create its own copy constructor;
    // Hero hero3;
    // hero2.print();

    // hero3 = hero2; // Copy assignment operator is called here.
    // hero3.print();
    // cout << "After making change in hero2 : " << endl;
    // hero2.print();
    // hero2.name[0] = 'Z';
    // hero3.print();

    Hero hero4(10, 'A');
    cout << hero4.timeToComplete << endl;
    cout << Hero::timeToComplete << " <= More preferred than ^ because this data belongs to Class" << endl;

    return 0;
}