#include <iostream>
// #include "Hero.cpp"
using namespace std;

class Hero
{
    //  int value;
    // Properties
private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;
    Hero()
    {
        cout << "Default Constructor called" << endl;
        name = new char[100];
    }

    // Parameterised Constructor
    Hero(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }
    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // Copy Constructor
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout << "Copy Constructor Called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {
        cout << endl
             << endl;
        cout << "[ Name : " << this->name << " , ";
        cout << "health " << this->health << " , ";
        cout << "Level  " << this->level << " ]";
        cout << endl;
    }
    int getHealth()
    {
        return health;
    }

    int getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    static int random(){
        return timeToComplete;
    }
    // DESTRUCTOR
    ~Hero()
    {
        cout << "Destructor called " << endl;
    }
};

int Hero::timeToComplete = 5;
int main()

{

    // cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;
    // Hero a;
    // cout << a.timeToComplete << endl;
    // Hero b;
    // b.timeToComplete = 10;
    // cout << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;

















    /*
    // DESTRUCTOR
    // Static
    Hero a;
    // Dynamically
    Hero *b = new Hero();
    // Manually
    delete b;
    */

    /*
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    // hero1.print();

    //Use default copy constructor
    Hero hero2(hero1);
    // hero2.print();
    // Hero hero2 = hero1;
    hero1.name[0] ='G';
    hero1.print();
    hero2.print();
    hero1 = hero2;
    hero1.print();
    hero2.print();
    */
    /*
    // Hero S(70, 'C');
    // S.print();

    // // Copy COnstructor
    // Hero R(S);
    // R.print();
    */

    /*
    //Object created statically
    // cout << "Hi" << endl;
    Hero ramesh(10);
    cout << "Address of Ramesh " << &ramesh << endl;
    ramesh.getHealth();
    ramesh.print();
    // cout << "hello  "<< endl;


    // Dynamically
    Hero *h = new Hero(11);
    h->print();
    // Hero *h = new Hero();

    Hero temp(22, 'B');
    temp.print();
    */

    /*
    //Static Allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "level is "<< a.level <<endl;
    cout << "health is " << a.getHealth() << endl;
    //Dynamically
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout << "level is " << (*b).level << endl;
    cout << "health is " << (*b).getHealth() << endl;

    cout << "level is " << b->level << endl;
    cout << "health is " << b->getHealth() << endl;
    */

    // Creation of Object
    // Hero ramesh;
    // cout << "Size of Ramesh is  " << sizeof(ramesh) << endl;
    // cout << "Ramesh health is " << ramesh.getHealth() << endl;
    // Use Setter
    // ramesh.setHealth(70);
    // ramesh.level = 'A';
    // cout << "health is :" << ramesh.health << endl;
    // cout << "health is :" << ramesh.level << endl;
    // cout << "Size : " << sizeof(h1) << endl;

    return 0;
}