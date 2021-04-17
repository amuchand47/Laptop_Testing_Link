
// header files

#include <iostream>
#include <stack>
using namespace std;


// function to check if symbols of parenthesis are balanced

bool check_Balanced(string symbol)
{

  // take stack to store
	stack<char> st;

	char x;

	// processing each character of symbols

	for (int i = 0; i < symbol.length(); i++)
	{
	  // if it is left delimiter
		if (symbol[i] == '(' || symbol[i] == '['|| symbol[i] == '{')
		{
			// Push it on to the stack
			st.push(symbol[i]);
			continue;
		}

		// suppose if current character of symbols is
		// not an opening bracket
		// then it must be a closing brackets . So stack
		// cannot be empty at this point.

		if (st.empty())
			return false;

		//checking if delimiter
		// is right parenthesis
		switch (symbol[i]) {

		case ')':

     //Store the top element in x
			x = st.top();

			// if it is left parenthesis
			if (x == '(' ){
        // then pop
       st.pop();
			}
			else{
       return false;
			 break;
			}

		case '}':

			// Store the top element in x
			x = st.top();

			if (x == '{'){
        st.pop();
			}
			else{
       return false;
			 break;
			}

		case ']':

			// Store the top element in x
			x = st.top();

			if (x == '['){
        st.pop();
			}
			else{
         return false;
			   break;
			}


		}
	}

	// Check Empty Stack
	return (st.empty());
}


// main function

int main()
{

  // input symbols of parenthesis

	string symbols ;

	cin>>symbols;

	// Function call
	if(check_Balanced(symbols))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}
