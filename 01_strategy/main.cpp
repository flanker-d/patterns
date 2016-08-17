#include <list>

#include "Ducks/duckbase.h"
#include "Ducks/exoticduck.h"
#include "Ducks/simpleduck.h"
#include "Ducks/woodenduck.h"
#include "Ducks/rubberduck.h"
#include "Ducks/upgradableduck.h"

int main(int argc, char *argv[])
{
  std::list<DuckBase*> ducks;
  ducks.push_back(new ExoticDuck());
  ducks.push_back(new SimpleDuck());
  ducks.push_back(new WoodenDuck());
  ducks.push_back(new RubberDuck());

  for(auto duck : ducks)
  {
    duck->Display();
    duck->Swim();
    duck->Quack();
    duck->Fly();
  }

  DuckBase *upgrDuck = new UpgradableDuck();
  upgrDuck->Display();
  upgrDuck->Swim();
  upgrDuck->Quack();
  upgrDuck->Fly();


  upgrDuck->SetFlyBehaviour(new FlyWithWings);
  upgrDuck->SetQuackBehaviour(new ExoticQuack);
  upgrDuck->Display();
  upgrDuck->Swim();
  upgrDuck->Quack();
  upgrDuck->Fly();

  std::cout << std::endl;

  return 0;
}
