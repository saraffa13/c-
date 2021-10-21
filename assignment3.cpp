// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 1000

// class Stack {
// 	int top;

// public:
// 	int a[MAX]; // Maximum size of Stack

// 	Stack() { top = -1; }
// 	bool push(int x);
// 	int pop();
// 	int peek();
// 	bool isEmpty();
// 	bool isFull();
// };

// bool Stack::push(int x)
// {
// 	if (top >= (MAX - 1)) {
// 		cout << "Stack Overflow";
// 		return false;
// 	}
// 	else {
// 		a[++top] = x;
// 		cout << x << " pushed into stack\n";
// 		return true;
// 	}
// }

// int Stack::pop()
// {
// 	if (top < 0) {
// 		cout << "Stack Underflow";
// 		return 0;
// 	}
// 	else {
// 		int x = a[top--];
// 		return x;
// 	}
// }
// int Stack::peek()
// {
// 	if (top < 0) {
// 		cout << "Stack is Empty";
// 		return 0;
// 	}
// 	else {
// 		int x = a[top];
// 		return x;
// 	}
// }

// bool Stack::isEmpty()
// {
// 	return (top < 0);
// }
// bool Stack::isFull()
// {
// 	return (top == 999);
// }

// // Driver program to test above functions
// int main()
// {
// 	class Stack s;
// 	s.push(10);
// 	s.push(20);
// 	s.push(30);
// 	cout << s.pop() << " Popped from stack\n";
// 	//print all elements in stack :
// 	cout<<"Elements present in stack : ";
// 	while(!s.isEmpty())
// 	{
// 		// print top element in stack
// 		cout<<s.peek()<<" ";
// 		// remove top element in stack
// 		s.pop();
// 	}

// 	return 0;
// }




// C++ program to Implement a stack
//using singly linked list
// #include <bits/stdc++.h>
// using namespace std;

// // Declare linked list node

// struct Node
// {
// 	int data;
// 	struct Node* link;
// };

// struct Node* top;

// // Utility function to add an element data in the stack insert at the beginning
// void push(int data)
// {
	
// 	// Create new node temp and allocate memory
// 	struct Node* temp;
// 	temp = new Node();

// 	// Check if stack (heap) is full. Then inserting an element would lead to stack overflow
// 	if (!temp)
// 	{
// 		cout << "\nHeap Overflow";
// 		exit(1);
// 	}

// 	// Initialize data into temp data field
// 	temp->data = data;

// 	// Put top pointer reference into temp link
// 	temp->link = top;

// 	// Make temp as top of Stack
// 	top = temp;
// }

// // Utility function to check if
// // the stack is empty or not
// bool isEmpty()
// {
// 	return top == NULL;
// }

// // Utility function to return top element in a stack
// int peek()
// {
	
// 	// Check for empty stack
// 	if (!isEmpty())
// 		return top->data;
// 	else
// 		exit(1);
// }

// // Utility function to pop top
// // element from the stack
// void pop()
// {
// 	struct Node* temp;

// 	// Check for stack underflow
// 	if (top == NULL)
// 	{
// 		cout << "\nStack Underflow" << endl;
// 		exit(1);
// 	}
// 	else
// 	{
		
// 		// Top assign into temp
// 		temp = top;

// 		// Assign second node to top
// 		top = top->link;

// 		// Destroy connection between
// 		// first and second
// 		temp->link = NULL;

// 		// Release memory of top node
// 		free(temp);
// 	}
// }

// // Function to print all the
// // elements of the stack
// void display()
// {
// 	struct Node* temp;

// 	// Check for stack underflow
// 	if (top == NULL)
// 	{
// 		cout << "\nStack Underflow";
// 		exit(1);
// 	}
// 	else
// 	{
// 		temp = top;
// 		while (temp != NULL)
// 		{

// 			// Print node data
// 			cout << temp->data << "-> ";

// 			// Assign temp link to temp
// 			temp = temp->link;
// 		}
// 	}
// }

// // Driver Code
// int main()
// {
	
// 	// Push the elements of stack
// 	push(11);
// 	push(22);
// 	push(33);
// 	push(44);

// 	// Display stack elements
// 	display();

// 	// Print top element of stack
// 	cout << "\nTop element is "
// 		<< peek() << endl;

// 	// Delete top elements of stack
// 	pop();
// 	pop();

// 	// Display stack elements
// 	display();

// 	// Print top element of stack
// 	cout << "\nTop element is "
// 		<< peek() << endl;
		
// 	return 0;
// }










/* C++ implementation to convert
infix expression to postfix*/

// #include<bits/stdc++.h>
// using namespace std;

// //Function to return precedence of operators
// int prec(char c) {
// 	if(c == '^')
// 		return 3;
// 	else if(c == '/' || c=='*')
// 		return 2;
// 	else if(c == '+' || c == '-')
// 		return 1;
// 	else
// 		return -1;
// }

// // The main function to convert infix expression
// //to postfix expression
// void infixToPostfix(string s) {

// 	stack<char> st; //For stack operations, we are using C++ built in stack
// 	string result;

// 	for(int i = 0; i < s.length(); i++) {
// 		char c = s[i];

// 		// If the scanned character is
// 		// an operand, add it to output string.
// 		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
// 			result += c;

// 		// If the scanned character is an
// 		// ‘(‘, push it to the stack.
// 		else if(c == '(')
// 			st.push('(');

// 		// If the scanned character is an ‘)’,
// 		// pop and to output string from the stack
// 		// until an ‘(‘ is encountered.
// 		else if(c == ')') {
// 			while(st.top() != '(')
// 			{
// 				result += st.top();
// 				st.pop();
// 			}
// 			st.pop();
// 		}

// 		//If an operator is scanned
// 		else {
// 			while(!st.empty() && prec(s[i]) <= prec(st.top())) {
// 				result += st.top();
// 				st.pop();
// 			}
// 			st.push(c);
// 		}
// 	}

// 	// Pop all the remaining elements from the stack
// 	while(!st.empty()) {
// 		result += st.top();
// 		st.pop();
// 	}

// 	cout << result << endl;
// }

// //Driver program to test above functions
// int main() {
// 	string exp = "a+b";
// 	infixToPostfix(exp);
// 	return 0;
// }








// C++ program to evaluate value of a postfix expression
// #include <iostream>
// #include <string.h>

// using namespace std;

// // Stack type
// struct Stack
// {
// 	int top;
// 	unsigned capacity;
// 	int* array;
// };

// // Stack Operations
// struct Stack* createStack( unsigned capacity )
// {
// 	struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));

// 	if (!stack) return NULL;

// 	stack->top = -1;
// 	stack->capacity = capacity;
// 	stack->array = (int*) malloc(stack->capacity * sizeof(int));

// 	if (!stack->array) return NULL;

// 	return stack;
// }

// int isEmpty(struct Stack* stack)
// {
// 	return stack->top == -1 ;
// }

// char peek(struct Stack* stack)
// {
// 	return stack->array[stack->top];
// }

// char pop(struct Stack* stack)
// {
// 	if (!isEmpty(stack))
// 		return stack->array[stack->top--] ;
// 	return '$';
// }

// void push(struct Stack* stack, char op)
// {
// 	stack->array[++stack->top] = op;
// }


// // The main function that returns value of a given postfix expression
// int evaluatePostfix(char* exp)
// {
// 	// Create a stack of capacity equal to expression size
// 	struct Stack* stack = createStack(strlen(exp));
// 	int i;

// 	// See if stack was created successfully
// 	if (!stack) return -1;

// 	// Scan all characters one by one
// 	for (i = 0; exp[i]; ++i)
// 	{
// 		// If the scanned character is an operand (number here),
// 		// push it to the stack.
// 		if (isdigit(exp[i]))
// 			push(stack, exp[i] - '0');

// 		// If the scanned character is an operator, pop two
// 		// elements from stack apply the operator
// 		else
// 		{
// 			int val1 = pop(stack);
// 			int val2 = pop(stack);
// 			switch (exp[i])
// 			{
// 			case '+': push(stack, val2 + val1); break;
// 			case '-': push(stack, val2 - val1); break;
// 			case '*': push(stack, val2 * val1); break;
// 			case '/': push(stack, val2/val1); break;
// 			}
// 		}
// 	}
// 	return pop(stack);
// }

// // Driver program to test above functions
// int main()
// {
// 	char exp[] = "231*+9-";
// 	cout<<"postfix evaluation: "<< evaluatePostfix(exp);
// 	return 0;
// }


// Checking whether a string is  a pallindrome using stack
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        st.push(s[i]);
    }
    string t="";
    while(!s.emtpy())
    {
        t = t + s.top();
        s.pop();

    }
}