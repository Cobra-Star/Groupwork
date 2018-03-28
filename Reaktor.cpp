#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	ifstream input;
	size_t pos;
	string line,search;
	cout<<"enter search:"<<endl;
	cin>>search;
	input.open("myfile.dat");
	if(input.is_open()){
		                while(getline(input,line)){
		                	                       pos=line.find(search);
		                	                       if(pos!=string::npos) //string::pos is returned if string not found
		                	                       {
		                	                       	//cout<<"Found!";
		                	                       	cout<<line<<endl;
		                	                       	//break;
		               	                       }
		                	                       
		                	                       //0else cout<<"Not Found"<<endl; break;
		                }
	}
	input.close();
	system("pause");
	return 0;
}
//IVO NDE
