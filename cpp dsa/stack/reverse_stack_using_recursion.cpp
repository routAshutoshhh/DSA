void solve(stack<int>& s, int x) {
    //base case
    if(s.empty()) {
        s.push(x);
        return ;
    }
    
    int num = s.top();
    s.pop();
    
    //recursive call
    solve(s, x);
    
    s.push(num);
}


stack<int> insertAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}


void reverseStack(stack<int> &stack) {

    //base case 
    if(stack.empty()){
        return ;
    }

     int num =  stack.top();
     stack.pop();

     //recursive call
     reverseStack(stack);
     insertAtBottom(stack,num);
    
}
//basically how this gonna work :
/*
1.base case would depth of the stack i mean we will go untill the stack is empty 
2. now when the stack is not empty i mean the preprocesing part  for the code, we will take up the top 
    element of the stack and store it in the variable and hence pop the element 
3. Now we call for recursion i mean reverseStack so that we can reach up to the bottom of the stack
4. Now we will start pushing the first element that i mean which was popped at the fisr time and this will continue 

*/
