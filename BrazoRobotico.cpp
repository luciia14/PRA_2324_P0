nclude "BrazoRobotico.h"



BrazoRobotico::BrazoRobotico(double x, double y, double z,bool sujobj){
	        this->x = x;
		 this->y = y;
		 this->z = z;
		 this->sujobj = sujobjn;
}
    double BrazoRobotico::getx(){
	                return x;
			    }
    double BrazoRobotico::gety(){
	                return y;
			    }
    double BrazoRobotico::getz(){
	                return z;
			    }
    bool BrazoRobotico::haysujecion(){
	                return sujobj;
			    }
    void BrazoRobotico::coger(){
	                sujobj=true;
			    }
    void BrazoRobotico::soltar(){
	                sujobj=false;
			    }
    void BrazoRobotico::mover(double xnew, double ynew, double znew){
	                x += xnew;
			y += ynew;
			z += znew;
						    }
