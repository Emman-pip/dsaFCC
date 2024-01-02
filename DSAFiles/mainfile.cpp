#include <iostream>
// for circle

//#include "Utillity.h"
//#include "Circle.h"
//using namespace std;
//
//int main()
//{
//	int radius;
//	Utility util;
//	cout << "Enter radius: ";
//	cin >> radius;
//	cout << endl;
//	Circle c1(radius);
//	//c1.setRadius();
//	std::cout << "radius: " << c1.getRadius() << std::endl;
//	std::cout << "area: " << util.calculateArea(c1);
//	return 0;
//}

// for word game
//#include "wordGame.h"
//
//int main()
//{
//	wordGame haha;
//	haha.display();
//	return 0;
//}


// for ArrayPractice
//#include "ArrayPractice.h"
//
//int main()
//{
//	ArrayPractice;
//	return 0;
//}

// for linkedListTry
#include "linkedListTry.h"
#include <iostream>

using namespace std;

int main()
{
	node one;
	one.data = "hahaha";
	linkedListTry linkedlist;
	linkedlist.insertAtStart("hahha");
	linkedlist.insertAtStart("hohoho");
	linkedlist.insertAtEnd("hihihi");
	linkedlist.insertAtMiddle(1, "huhu");
	linkedlist.insertAtMiddle(0, "huho");
	node lal = linkedlist.getHead();
	string item3 = lal.link->link->data;

	cout << linkedlist.getLength() << endl << item3;
	return 0;
}