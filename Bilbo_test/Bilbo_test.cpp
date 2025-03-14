#include "time.h"
#include "iostream"
#include "cstdlib"

class Player
{
public:
	int Attack = 10;
	int Shield = 10;
	int Health = 10;
	
	Player(int a) {
		switch (a)
		{
		case 1:
			std::cout << "Haker\n";
			this->Attack += 10;
			this->Health += 5;
			this->Shield += 2;

			break;
		case 2:
			std::cout << "Killer\n";
			this->Attack += 15;
			this->Health += 10;
			this->Shield += 12;
			break;
		case 3:
			std::cout << "Tank\n";
			this->Attack += 5;
			this->Health += 25;
			this->Shield += 20;
			
			break;
		case 4:
			std::cout << "Vydo\n";
			this->Attack += 20;
			this->Health += 25;
			this->Shield += 22;
			break;
		}
		
	
	}

};


int main() {
	int temp = rand() % 3 + 1;
	Player player(temp);


}
