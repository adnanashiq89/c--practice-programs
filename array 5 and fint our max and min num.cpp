# include <iostream>
using namespace std ;
int main(){
	
//	array five and find out max and mni number:

    int no[4],smallest,largest;
    cout<<" Enter Five Number:- "<<endl;

	for(int i = 0; i < 5; i++){	
		cout<<" Enter Number "<<i+1<<": ";
		cin>>no[i];
    }
	 smallest = no[0];

	for(int i = 0; i < 5; i++){
		if(no[i]<smallest)
		smallest = no[i];
    }
    largest = no[0];
    for(int i = 0; i < 5; i++){
	    if(no[i]>largest)
		largest = no[i];
        cout<<no[i]<<endl;
	}
		cout<<"\n smallest number: "<<smallest;	
	    cout<<"\n largest number:  "<<largest;	
	
}
