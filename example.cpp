#include<iostream>
#include"Queue/queue.h"
//testing the queue header

int main(){
    queue<int> q;
    
    int n;
    std::cin>>n;
    
    for(int i=0;i<n;i++){
		int x;
		std::cin>>x;
		
		q.push_back(x);
	}
	
	q.pop();
	
	
	if(!q.empty())
		std::cout<<q.head()<<' '<<q.size()<<'\n';
	
	
    return 0;
}

/*
 
 input:
 5
 1 2 3 4 5
 
 output:
 2 4
 
 
 */
