#include <string>
#include <iostream>
#include <fstream>
#include <char>
#include <vector>

using namespace std;


class Spell{
  public:
    Spell();
  
    void setName(string s){name = s;};
    string getName(){return name};
  
    void setComponents (bool v, bool s, bool m){Components = {v, s, m};};
    vector<string> getComponents(){return Components;};
  
    void setRange(int ft){range = ft;};
    int getRange(){return range;};
    
  private:
    string name;
    int range;
    //targets, description, effect, heal, damage, cost/materials
    vector<string> Components;
    Save saveCondition; 
};

void Spell::Spell(){
  range = 0;
  name = "";
  description = "";  
}


class Save{
  public:
    Save();
  
    void setHasSave(bool n){hasSave = n;};
    bool getHasSave(){return hasSave;};
  
    void setTyp(string saveRoll){typ = saveRoll;};
    string getTyp(){return typ;};  
  
    void setSaveDC(int dc){dc = saveDC;};
    int getSaveDC(){return saveDC;};
  
  private:
    bool hasSave;
    string typ;
    int saveDC;
};

void Save::Save(){
  hasSave = false;
  typ = "";
  saveDC = 0;
}

//------------------------------------------------------
class Roll{
  public:
    void setNumDice(int n){numDice = n;};
    int getNumDice(){return numDice;};
  
    void setDie(int n){die = n;};
    int getDie(){return die;};
  
  private: 
    int numDice;
    int die;
};

void Roll::Roll(){
  numDice = 0;
  die = 0;
}
