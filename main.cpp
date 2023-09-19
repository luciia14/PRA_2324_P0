nclude<iostream>
#include "BrazoRobotico.h"


int main(){
	        BrazoRobotico Brazo(0.0,0.0,0.0,false);
		 Brazo.mover(14.0,40.0,3.0);
		Brazo.coger();
			return 0;
}
