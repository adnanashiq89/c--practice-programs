# include <iostream>
using namespace std;
int main(){
	
//	time Descussion 
	
	int x;
	cout<<"enter number type 1 to 3 > its mean first time , second time , third time ? "<<endl<<" time  ";
	cin>>x;
	if (x == 1){
	cout<<"Morning Time";
    }
	else if (x == 2){
	cout<<"Afternoon Time";
    }
	else if (x == 3){
	cout<<"Evening time";
    }
	else{
	cout<<"Wrong Typing";
    }
	return 0;
}

