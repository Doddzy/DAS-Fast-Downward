#ifndef SLIDING_WINDOW_H
#define SLIDING_WINDOW_H

#include <vector>



class SlidingWindow {
    int curr;
	int amount;
    int *window;
	int total;
	

public:
    unsigned long evaluate();
    void add(int num);
    void empty();
    SlidingWindow( int num); 
};

#endif

