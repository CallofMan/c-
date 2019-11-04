#include <iostream>
#include "constants.h"

using namespace std;
using namespace myConstants;

int inputHeightofTower()
{
	cout << "Enter the initial height of the tower in meters: ";

	int height;
	cin >> height;

	return height;
}

double calculateFallBall(long long int seconds)
{
	return (gravity * (seconds * seconds) / 2);
}

double calculateHeightBall(int heightofTower, double fallHeight)
{
	return (heightofTower - fallHeight);
}

void valueResult(int heightofTower, int seconds)
{
	double heightFallBall = calculateFallBall(seconds);
	double heightBall = calculateHeightBall(heightofTower, heightFallBall);

	
	if (heightBall > 0)
		cout << "At " << seconds << " seconds, the ball is at height: " << heightBall << " meters" << endl;
	else if (heightBall <= 0)
		cout << "At " << seconds << " seconds the ball is on the ground." << endl;
	else if (seconds == 0)
		cout << "At " << seconds << " seconds, the ball is at height: 100 meters" << endl;
}

int main()
{
	int heightofTower = inputHeightofTower();

	valueResult(heightofTower, 0);
	valueResult(heightofTower, 1);
	valueResult(heightofTower, 2);
	valueResult(heightofTower, 3);
	valueResult(heightofTower, 4);
	valueResult(heightofTower, 5);

	return 0;
}