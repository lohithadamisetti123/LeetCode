class CustomStack {
    int m;
    stack<int> st;
public:
    CustomStack(int maxSize) {
        this->m=maxSize;
    }
    
    void push(int x) {
        if(st.size()<m){
        st.push(x);
        }
    }
    
    int pop() {
        int p=-1;
        if(!st.empty()){
           p=st.top();
            st.pop();
        }
        return p;
    }
    
    void increment(int k, int val) {
        vector<int> temp;
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        for(int i=0;i<min(k,(int)temp.size());i++)
            { 
                temp[i]+=val;
            }
        for(int x:temp)st.push(x);
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */