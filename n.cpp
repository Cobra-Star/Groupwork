#include <iostream>
#include <fstream>
#include <vector>
#include <map>

  using namespace std;



      void convert(string& string){

      	   for(int i=0;i<string.length();i++){

      	   		string[i]=tolower(string[i]);
      	   }
      }

  		vector<string> vig(string input){
  				vector<string>f_string;


  					while(input.find(":")){
  						string t_string=input.substr(0,input.find(":"));


  						f_string.push_back(t_string);
  						input.erase(0,input.find(":")+1);
  					}

                f_string.push_back(input);

        	return f_string;


  		}
     int main(int argc, char const *argv[])
     {
          string str;
          vector<string>line;
          	  string key;
  				  //string value;

          ifstream vigal("crawl.txt");

          	if(vigal.bad()){
          			cout<<"Error in opening file"<<endl;

          	   			system("pause");

          	   			return -1;
          	}


          while(getline(vigal,str)){
          	  	 line.push_back(str);
          }

          vigal.close();

          std::map<string, string> map;
          	for(string i:line){
          		std::vector<string> value = vig(i);
          	   	map.insert(make_pair(value[0],value[1]));
 			 }


 			for(;;){

 				 cout<<"SEARCH: "<<endl;
 					string search;

 				 getline(cin,search);

 				   	convert(search);
            if(search.empty()){
              break;
            }
 				 for(auto i: map){

 				 	if(search==i.first){
 				 		cout<<"\n\n"<<i.second<<endl;
 				 				break;
 				 		}
 				  	    //else{
 						//cout<<"SEARCH CANNOT BE FOUND"<<endl;
 					    //		break;
 						 //}

 				   }



 				}


     	return 0;
          }
