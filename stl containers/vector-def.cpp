#include"vector-dec.h"
void dispVector(vector<int>v)
{
	vector<int>::iterator i;
	
	for(i=v.begin();i!=v.end();i++)
		cout<<*i<<" ";
		cout<<endl;
	return;
}
void dispList(list<int>l)
{
	
	list<int>::iterator it;
	for(it=l.begin();it!=l.end();it++)
		cout<<*it<<" ";
		cout<<endl;
	return;

}
void dispSortedList(list<int>SL)
{
	SL.sort();
	
	dispList(SL);

	return;
}

void Copy(vector<int>v)
{
	cout<<"Number of elements to copy??"<<endl;
	vector<int>vc;
	int num,ele;
	cin>>num;
	//if(num>v.size()){
	//vc.copy(v.begin(),v.end());
	//return;	
	//}	
	int i=0;
	while(num--)
	{
		ele=v[i];
		vc.push_back(ele);
		i++;
	}
	cout<<"New vector is: ";
	dispVector(vc);
}


