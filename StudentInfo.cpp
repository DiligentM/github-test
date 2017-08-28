#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class ID
{
public:
	ID():name(" "),score(0) {}
	ID(string n,int s):name(n),score(s) {}
	string name;
	int score;
};

bool operator==(const ID& x,const ID& y)
{
	return (x.name==y.name) && (x.score==y.score); 
}

bool operator<(const ID& x,const ID& y)
{
	return x.score < y.score;
}

bool compare(const ID& x,const ID& y)
{
	return x.score > y.score;
}

int main()
{
	vector<ID> ids;
	vector<ID>::iterator iter;

	ids.push_back(ID("Li",99));
	ids.push_back(ID("Zi",8));
	ids.push_back(ID("xi",33));

    sort(ids.begin(),ids.end(),compare);

	cout<<"name and score: "<<endl;
	for(iter=ids.begin();iter!=ids.end();++iter)
	{
		cout<<(*iter).name<<"    "<<(*iter).score<<endl;
	}
	return 0;
}
