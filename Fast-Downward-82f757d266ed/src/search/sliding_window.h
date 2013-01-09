#ifndef SLIDING_WINDOW_H
#define SLIDING_WINDOW_H

#include <vector>
#include "open_lists/open_list.h"
#include "search_engine.h"
#include "search_space.h"
#include "state.h"
#include "timer.h"
#include "evaluator.h"
#include "search_progress.h"
#include "time.h"
#include "priority_queue.h"
#include "sliding_window.h"


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

