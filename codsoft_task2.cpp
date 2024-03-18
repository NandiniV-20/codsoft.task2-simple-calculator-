#include<iostream>
using namespace std;

int main(){
	char op;
	float num1,num2;
	cout<<"Enter two numbes to perform operations:";
    cin>>num1>>num2;
    cout<<"\nEnter an operator to perform operation('+','-','*','/'):";
    cin>>op;
    switch(op){
	    case'+':
		    cout<<"\n\tResult="<<num1+num2;
		    break;
	    case'-':
		    cout<<"\n\tResult="<<num1-num2;
	        break;
    	case'*':
		    cout<<"\n\tResult="<<num1*num2;
		    break;
		case'/':
		    if (num1!=0){
			    cout<<"\n\tResult="<<num1/num2;
			}
		    else {
			    cout<<"\n\tResult="<<num1/num2==0;
		        break;
			}	 
	}
	
	return 0;
}
