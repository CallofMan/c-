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
	else
	{
		cout << "At " << seconds << " seconds the ball is on the ground." << endl;
		exit(0);
	}
}

int calculateSecondsFly(int heightofTower)
{
	int second{ 0 };
	double coveredDistance{ 0.0 };

	while (heightofTower > 0)
	{
		if (coveredDistance < 3333.3)
		{
			coveredDistance += gravity;
			heightofTower -= coveredDistance;
			++second;
		}
		else
		{
			heightofTower -= coveredDistance;
			++second;
		}
	}

	return second;
}

int main()
{
	int heightofTower = inputHeightofTower();
	int secondsinFly = calculateSecondsFly(heightofTower);

	for (int second = 0; second <= secondsinFly + 1; ++second)
	{
		valueResult(heightofTower, second);
	}
	
	return 0;
}