#include <iostream>
using std::cout;
using std::endl;
using std::string;

class AbstractEnemy
{
    virtual void isAlive() = 0;
};
class Enemy : AbstractEnemy
{
protected:
    string Name;
    int Health;
    int Attack;
    int Move;

public:
    string getName()
    {
        return Name;
    }
    int getHealth()
    {
        return Health;
    }
    int getAttack()
    {
        return Attack;
    }
    int getMove()
    {
        return Move;
    }
    void setName(string name)
    {
        Name = name;
    }
    void setHealth(int health)
    {
        Health = health;
    }
    void setAttack(int attack)
    {
        Attack = attack;
    }
    void setMove(int move)
    {
        Move = move;
    }

    void isAlive()
    {
        if (Health > 0)
        {
            cout << "Enemy is Alive." << endl;
        }
        else
        {
            cout << "Enemy is Death." << endl;
        }
    }
    virtual void useWeapon(){
        cout << Name << " use bare hands" << endl;
    }
    void introduce()
    {
        cout << "Name : " << Name << endl;
        cout << "Health : " << Health << endl;
        cout << "Attack : " << Attack << endl;
        cout << "Move : " << Move << endl;
        isAlive();
        useWeapon();
    }
    Enemy(string name, int health, int attack, int move)
    {
        Name = name;
        Health = health;
        Attack = attack;
        Move = move;
    }
};
class Melee : public Enemy
{
public:
    string Weapon;
    Melee(string name, int health, int attack, int move, string weapon)
        : Enemy(name, health, attack, move)
    {
        Weapon = weapon;
    }
    void useWeapon()
    {
        cout << Name << " use " << Weapon << "." << endl;
    }
};
class Ranged : public Enemy
{
public:
    string Ammo;
    Ranged(string name, int health, int attack, int move, string ammo)
        : Enemy(name, health, attack, move)
    {
        Ammo = ammo;
    }
    void useWeapon()
    {
        cout << Name << " use " << Ammo << "." << endl;
    }
};
int main()
{
    Enemy enemy1 = Enemy("enemy1", 10, 3, 1);
    enemy1.introduce();
    cout << endl;

    Enemy enemy2 = Enemy("enemy2", 0, 1, 1);
    enemy2.introduce();
    cout << endl;

    Melee enemy3 = Melee("enemy3", 7, 3, 1, "club");
    enemy3.introduce();
    cout << endl;

    Ranged enemy4 = Ranged("enemy4", 4, 1, 1, "arrows");
    enemy4.introduce();
    cout << endl;

    return 0;
}