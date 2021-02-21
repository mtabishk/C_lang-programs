//Program 2 to calculate fibonacci sequence using static and extern 

static int f1=1,f2=1;
extern int fibonacci(int i) {
	int f;
	f= (i<3) ? 1 : f1+f2;
	f1 = f2;
	f2 = f;
	return (f);
}