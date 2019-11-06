#include <iostream>

struct Advertiaing
{
	int quantityShow;
	double percentageСlicked;
	double summforClickonBanner;
};

void value(Advertiaing day)
{
	using namespace std;

	cout << "Show is " << day.quantityShow << endl;
	cout << "Procent click is " << day.percentageСlicked << endl;
	cout << "Price is " << day.summforClickonBanner << endl;

	double result = day.quantityShow * day.percentageСlicked / 100 * day.summforClickonBanner;

	cout << "All summ is " << result << endl;
}

int main()
{
	using namespace std;

	Advertiaing day1;

	cout << "How many ads were shown today? ";
	cin >> day1.quantityShow;

	cout << "What percentage of users clicked on the ads? ";
	cin >> day1.percentageСlicked;

	cout << "What was the average earnings per click? ";
	cin >> day1.summforClickonBanner;

	value(day1);

	return 0;
}