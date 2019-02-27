#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include"clock.h"
using namespace std;

int main (){
	CK ck;
	ifstream in("file.in");
	if(!in){
		cout<<"Failed Opening Folder";
		return 0;}
	ofstream out("stdout",ios::out);
	vector<int> v;
	int x,y;
	in>>x;
	in.ignore();
	for (int i=0;i<x;i++){
		in>>y;
		in.ignore();
		v.push_back(y);}
	ck.start();
	vector<int>v1(v);
	int pointer,next,init;
	for (next=1;next<x;next++){
		init=v.at(next);
		for(pointer=next;pointer>0;pointer--){
			if(v.at(pointer-1)>v.at(pointer)){
					v.at(pointer)=v.at(pointer-1);
					v.at(pointer-1)=init;}}}
	cout<<ck.GetDiffTime()<<"seconds"<<endl;
	cout<<"v1 and v2 are "<<((v==v1)?"the same":"different")<<endl;
	ck.start();
	sort(v1.begin(),v1.end());
	cout<<ck.GetDiffTime()<<"seconds"<<endl;
	cout<<"v1 and v2 are "<<((v==v1)?"the same":"different")<<endl;
	static int ans =0;
	for (int i=x-5;i<x;i++)
		ans +=v.at(i);
	out<<ans<<endl;}
