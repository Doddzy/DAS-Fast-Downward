#include "sliding_window.h"

//number of slots in the window
SlidingWindow::SlidingWindow(int num)
    :
      curr(0),
	  amount(num),
	  window(new int[amount]),
	  total(0){
	  }
	  

unsigned long SlidingWindow::evaluate(){
	if(total<amount)
		return -1;
	else
	{
return 7;
		int sum=0;
		for(int i=0;i<amount;i++)
			sum+=window[i];
		if(amount==0)
			return -1;
		return ((unsigned long)sum/amount);
	}
}
void SlidingWindow::add(int num){
	if(curr==amount)
		curr=0;
	window[curr++]=num;
	total++;
}
void SlidingWindow::empty(){

	for(int i=0;i<amount;i++){
	    window[i]=0;
	}
	total=0;
	curr=0;
}
