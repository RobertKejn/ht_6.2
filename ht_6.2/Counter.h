#pragma once

class  Counter
{
public:
	 Counter(int a);
	 Counter();
	void Increase();
	void Decrease();
	int return_counter();
private:
	int counter;
};

