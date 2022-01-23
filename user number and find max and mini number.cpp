# include <iostream>
using namespace std ;
int main(){
	
	//	use number and find out max and mni number:
    int no,largest,smallest;
    cout<<" Enter number of element you want to insert: ";
    cin>>no;
    int number[no];

	for(int i=0;i<no;i++){		
		cout<<"Enter Number "<<i+1<<": ";
		cin>>number[i];	
}
    for(int i=0;i<no;i++){
		if(number[i]<smallest)
		smallest=number[i];
}
    for(int i=0;i<no;i++){
	    if(number[i]>largest)
		largest=number[i];
        cout<<number[i]<<endl;
	} 
	
	cout<<"\nsmallest number: "<<smallest;
	cout<<"\nlargest number:  "<<largest;
	
}
