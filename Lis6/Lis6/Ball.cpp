#include<iostream>
using namespace std;

class Ball {
public:
	virtual void showBallInfo();
};


class FootBall : public Ball{
public:
	void showBallInfo();
};

class BasketBall :public Ball{
public:
	void showBallInfo();
};

void Ball::showBallInfo() {
	cout << "I'm Ball,请文明观球." << endl;
}

void FootBall::showBallInfo(){
	cout << "I'm FootBall,请文明观球." << endl;
}

void BasketBall::showBallInfo() {
	cout << "I'm BasketBall,请文明观球." << endl;
}

void main() {
	Ball * bp;
	FootBall footBall;
	BasketBall basketBall;

	bp = &footBall;
	bp->showBallInfo();
	bp = &basketBall;
	bp->showBallInfo();

	getchar();
}




