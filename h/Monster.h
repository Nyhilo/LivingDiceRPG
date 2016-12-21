/*
Holds data related to enemies. Their name, health, evasion and attack.
*/

class Monster
{
private:
    std::string name;
    float health;
    float evasion;
    float attack;
public:
    monster(td::string Name, float Health, float Evasion, float Attack);
    ~Monster();

    // void damage (Monster& monster);
    
    //Setters and Getters
    void setName (std::string Name);
    void setHealth (float Health);
    void setEvasion (float Evasion);
    void setAttack (float Attack);

    std::string getName ();
    float getHealth ();
    float getEvasion ();
    float getAttack ();    
};