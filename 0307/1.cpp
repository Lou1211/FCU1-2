#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    int Age;
    int Weight;
    int High;
    string Skill;
    string Sex;
    string Name;

public:
    // set
    Person(int Choice, int newInfo)
    {
        if (Choice == 1)
        {
            setAge(newInfo);
        }
        if (Choice == 2)
        {
            setWeight(newInfo);
        }
        if (Choice == 3)
        {
            setHigh(newInfo);
        }
        if (Choice == 4)
        {
            getAge();
        }
        if (Choice == 5)
        {
            getWeight();
        }
        if (Choice == 6)
        {
            getHigh();
        }
    }
    Person(int Choice, string newInfo)
    {
        if (Choice == 1)
        {
            setSkill(newInfo);
        }
        if (Choice == 2)
        {
            setSex(newInfo);
        }
        if (Choice == 3)
        {
            setName(newInfo);
        }
        if (Choice == 4)
        {
            getSkill();
        }
        if (Choice == 5)
        {
            getSex();
        }
        if (Choice == 6)
        {
            getName();
        }
    }
    int Weight;
    int High;
    string Skill;
    string Sex;
    string Name;
    // age
    void setAge(int newAge)
    {
        Age = newAge;
    }
    int getAge()
    {
        return Age;
    }
    // weight
    void setWeight(int newWeight)
    {
        Weight = newWeight;
    }
    int getWeight()
    {
        return Weight;
    }
    // high
    void setHigh(int newHigh)
    {
        High = newHigh;
    }
    int getHigh()
    {
        return High;
    }
    // skill
    void setSkill(string newSkill)
    {
        Skill = newSkill;
    }
    string getSkill()
    {
        return Skill;
    }
    // sex
    void setSex(string newSex)
    {
        Sex = newSex;
    }
    string getSex()
    {
        return Sex;
    }
    // name
    void setName(string newName)
    {
        Name = newName;
    }
    string getName()
    {
        return Name;
    }
    // intro
    void showInfo()
    {
        cout << Name << "'s Age is" << Age << "/n";
        cout << Name << "'s Weight is" << Weight << "/n";
        cout << Name << "'s High is" << High << "/n";
        cout << Name << "'s Skill is" << Skill << "/n";
        cout << Name << "'s Sex is" << Sex << "/n";
    }
};

int main()
{
    int choice = 99;
    int heroact;
    string name;
    Person Hero1();
    Person Hero2();
    Person Hero3();
    while (choice != 0)
    {
        cout << "Select your action\n"
             << "------------------\n"
             << "1.Set Hero's name\n"
             << "2.Set your hero\n"
             << "3.Cheak out your Hero\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Which one?\n";
            cin >> heroact;
            cout << "What's his/her name?\n";
            cin >> name;
            switch (heroact)
            {
            case 1:
                cout << "Your Hero is" << Hero1.setName(name) << "\n";
                break;

            default:
                break;
            }
            cout << "Your Hero is" << name << "\n";
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
        }
    }
    cout << "End!Thanks for your using!\n";
}