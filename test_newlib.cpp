//Electron Configuration
#include <libndls.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int electronsLeft;

int maxS = 2;
int maxP = 6;
int maxD = 10;
int maxF = 14;

int one_s   = 0;
int two_s   = 0;
int two_p   = 0;
int three_s = 0;
int three_p = 0;
int four_s  = 0;
int three_d = 0;
int four_p  = 0;
int five_s  = 0;
int four_d  = 0;
int five_p  = 0;
int six_s   = 0;
int four_f  = 0;

void calculateLevel(int *level, int levelMax) {
	if (levelMax <= electronsLeft) {
		*level = levelMax;
		electronsLeft -= levelMax;
	} else if (electronsLeft != 0 && *level != levelMax) {
		*level = electronsLeft;
		electronsLeft = 0;
	} else if (electronsLeft == 0) {

	} else {
		cout << "error";
	}
}

void runCalculator() {
		calculateLevel(&one_s, maxS);
		calculateLevel(&two_s, maxS);
		calculateLevel(&two_p, maxP);
		calculateLevel(&three_s, maxS);
		calculateLevel(&three_p, maxP);
		calculateLevel(&four_s, maxS);
		calculateLevel(&three_d, maxD);
		calculateLevel(&four_p, maxP);
		calculateLevel(&five_s, maxS);
		calculateLevel(&four_d, maxD);
		calculateLevel(&five_p, maxP);
		calculateLevel(&six_s, maxS);
		calculateLevel(&four_f, maxF);
}

int main(int, char **) {
	cout << "Starting app...\n" << "Number of electrons: ";
	cin >> electronsLeft;

	runCalculator();
	cout << "Done with leveling\n";

	cout << "1s" << one_s
			<<"\n2s" <<two_s
			<<"\n2p" <<two_p
			<<"\n3s" <<three_s
			<<"\n3p" <<three_p
			<<"\n4s" <<four_s
			<<"\n3d" <<three_d
			<<"\n4p" <<four_p
			<<"\n5s" <<five_s
			<<"\n4d" <<four_d
			<<"\n5p" <<five_p
			<<"\n6s" <<six_s
			<<"\n4f" <<four_f
			<<"\nDone";

	wait_key_pressed();
	return 0;
}
////END main()////

