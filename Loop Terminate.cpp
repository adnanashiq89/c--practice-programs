# include <iostream>
using namespace std ;
int main(){
	
//	Loop terminate 
	
    int no[4],smallest,largest;

	for(int i = 0; i < 5 ; i++){	
		cout<<"Enter Number "<<i+1<<": ";
		cin>>no[i];
		if (no[i] == 0){
			break;
		}  
   	}
	largest = no[0];
    smallest = no[0];
	for(int i = 0; i < 5; i++){
		if(no[i]<smallest)
		smallest = no[i];
	}
   
    for(int i = 0; i < 5; i++){
	    if(no[i]>largest)
		largest = no[i];
		cout<<no[i]<<endl;
    }	 
		cout<<"\n smallest number: "<<smallest;	
	    cout<<"\n largest number:  "<<largest;		
}	
