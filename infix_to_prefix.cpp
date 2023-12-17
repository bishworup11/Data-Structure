#include<bits/stdc++.h>
using namespace std;

int prec(char ch)
{
	if(ch=='^')
		return 3;
	else if(ch=='/'||ch=='*')
		return 2;
	else if(ch=='+'||ch=='-')
		return 1;
	else
		return -1;
}

void infixToPostfix(string s)
{
	string ns;
	stack<char>st;
	st.push('@');
	int l=s.size();
	for(int i=0;i<l;i++)
	{
		if('a'<=s[i]&&'z'>=s[i]||'A'<=s[i]&&'Z'>=s[i])
		{
			ns+=s[i];
		}

		else if(s[i]==')')
			st.push(')');

		else if(s[i]=='(')

		{
			while(st.top()!='@'&&st.top()!=')')
			{
				char ch=st.top();
				st.pop();
				ns+=ch;
			}
			if(st.top()==')')
			st.pop();
		}

		else
		{
			while(st.top()!='@'&&prec(s[i])<prec(st.top()))
			{
				char ch=st.top();
				st.pop();
				ns+=ch;
			}
			st.push(s[i]);
		}
	}

	while(st.top()!='@')
	{
		char ch=st.top();
				st.pop();
				ns+=ch;

	}

cout<<ns<<endl;

}

int main()
{
	string s1;
	cin>>s1;
	reverse(s1.begin(),s1.end());
	infixToPostfix(s1);

	


   }