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
	cout << "I'm Ball,����������." << endl;
}

void FootBall::showBallInfo(){
	cout << "I'm FootBall,����������." << endl;
}

void BasketBall::showBallInfo() {
	cout << "I'm BasketBall,����������." << endl;
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




