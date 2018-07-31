#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(unsigned int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return;
}

int findMin(vector<int> &v, unsigned int start){
    int mini = v[start];
    unsigned int index = start;
    for(unsigned int i = start + 1; i < v.size(); i++){
        if(mini > v[i]){
            mini = v[i];
            index = i;
        }
    }
    return index;
}

void selectionSort(vector<int> &v){
    for(unsigned int i = 0; i < v.size(); i++){
        int index = findMin(v, i);
        int t = v[index];
        v[index] = v[i];
        v[i] = t;
    }
    return;
}

int main()
{
    int data = 0;
    vector<int> v;
    for(unsigned int i = 0; ; i++){
        cout<<"Enter the data in vector :- (-1 to exit):-\n";
        cin>>data;
        if(data == -1)
            break;
        v.push_back(data);
    }
    selectionSort(v);
    cout<<"Selection Sorted Elements are :-\n";
    print(v);
    return 0;
}
