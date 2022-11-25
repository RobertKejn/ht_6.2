#include "Counter.h"

Counter::Counter() {
	counter = 1;
}
Counter::Counter(int a) {
	counter = a;
}

void Counter::Increase() {
	++counter;
}

void Counter::Decrease() {
	--counter;
}

int Counter::return_counter() {
	return counter;
}