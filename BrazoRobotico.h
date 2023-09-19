#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
	private:
	 double x;
	 double y;
	 double z;
	 bool sujobj;

	public:
	 BrazoRobotico(double x, double y, double z,bool sujecion);
	 double getx();
	 double gety();
	 double getz();
	 bool sujeccio();
	 void coger();
	 void soltar();
	 void mover(double xnew, double ynew, double znew);
};

#endif
