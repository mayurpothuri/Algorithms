#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(unsigned int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return;
}

void bubbleSort(vector<int> &v){
    for(unsigned int i = 0; i < v.size() - 1; i++){
        for(unsigned int j = 0; j < v.size(); j++){
            if(v[j] > v[j + 1]){
                int t = v[j + 1];
                v[j + 1] = v[j];
                v[j] = t;
            }
        }
    }
    return;
}

int main()
{
    int data = 0;
    vector<int> v;
    for(int i = 0; ; i++){
        cout<<"Enter the data in vector :- (-1 to exit)\n";
        cin>>data;
        if(data == -1)
            break;
        v.push_back(data);
    }
    bubbleSort(v);
    cout<<"Bubble Sorted Elements are :-\n";
    print(v);
    return 0;
}
