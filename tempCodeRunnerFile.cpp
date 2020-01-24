  
#include<iostream>
using namespace std;

//Write the function printO() here
int printO(int N,int M){
    int i=0,p=0;

    if(N<=0 || M<=0){
        cout<<"Invalid Input";
}

    for ( i = 0; i < M; i++)
    {
    
        /* code */
    
            for(p=0;p<N;p++)
            {
                cout<<"o";

            }
        cout<<endl;
    }

}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}