#include "Node.h"
#include "Student.h"

using namespace std;

Node::Node() {
	nodePtr = nullptr;
	studPtr = nullptr;
}

Node* Node::getNext() { return nodePtr; }

Student* Node::getStudent() { return studPtr; }

void Node::setNext(Node* nextNode) { nodePtr = nextNode; }

void Node::setStudent(Student* setStudent) { studPtr = setStudent; }

Node::~Node() {
	delete nodePtr;
	delete studPtr;
}
