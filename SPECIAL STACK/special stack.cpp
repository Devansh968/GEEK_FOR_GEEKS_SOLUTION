int  mi = 100000;
void push(stack<int>& s, int a){
	if(s.empty()){
	mi =a;
	}
	mi =  min(a,mi);
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n)  return true;
	
	else return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes 
	if(s.empty()) return true;
	else  return false;
}

int pop(stack<int>& s){
	// Your code goes here
	int  v =  s.top();
	s.pop();
	
	  return v;  
	    
	}


int getMin(stack<int>& s){
	// Your code goes here
	return mi;
}