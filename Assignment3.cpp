//Lily Zelt
//bzgkd@mail.umkc.edu


#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include "Postfix_Evaluator.h"
#include "Syntax_Error.h"
using namespace std;

//Question 3
/*Write a function that reads a line and reverses the words in the line(not the characters) using a stack.*/
void WordReversal(string input){
	stack<string> reversalStack;
	string tempWord = "";
	for (int i = 0; i < size(input); ++i) {
		if (input.at(i) == ' ') {
			reversalStack.push(tempWord);
			tempWord = "";
		}
		else if (i == size(input) - 1) {
			tempWord = tempWord + input.at(i);
			reversalStack.push(tempWord);
			tempWord = "";
		}
		else {
			tempWord = tempWord + input.at(i);
		}
	}
	while (reversalStack.empty() == false) {
		cout << reversalStack.top() << ' ';
		reversalStack.pop();
	}
}

//Question 8
/*Write a new queue function called move_to_rear that
moves the element currently at the front of the queue to the rear of the queue. The
element that was second in line will be the new front element. Do this using
functions push, front, and pop.*/
//Copy the front item to the rear. Remove the front item.
void move_to_rear(queue<int> &input) {
	input.push(input.front());
	input.pop();
}

int main() {
	
	//Question 4
	//Trace this operation
	Postfix_Evaluator newObject;
	string sampleExpression = "10 2 * 5 / 6 2 5 * + -";
	newObject.eval(sampleExpression);

	system("pause");
}