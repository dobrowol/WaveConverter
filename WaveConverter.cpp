#include <iostream>
#include <lame/lame.h>
using namespace std;

int main(int argc, char **argv) {
	cout << "Hello world";
	lame_t lame = lame_init();
	lame_close(lame);
	return 0;
}
