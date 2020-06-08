#ifndef S1_H
#define S1_H
struct StructCircle {
private:
	int  a1;
public:
	StructCircle(int a);
	double getArea();
};
StructCircle::StructCircle(int a) {
	a1 = a;
}
double StructCircle::getArea() {
	return a1 * a1*3.14;
}
#endif 