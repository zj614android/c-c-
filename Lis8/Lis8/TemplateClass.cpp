#include <iostream>
#include <string>

using namespace std;

template <class T>
class A {

	public:
		void sayHello(T const&);
		T get();

};

template <class T>
void A<T> :: sayHello(T const& t){
	cout << "say :" << t << endl;
}

template <class T>
T A<T>::get() {
	cout << ": : get : :" << endl;
	return NULL;
}

int main()
{
	A<int> a;
	a.get();
	a.sayHello(666);
	

	getchar();

	return 0;
}
