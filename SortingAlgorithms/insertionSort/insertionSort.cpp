#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(unsigned int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return;
}

void insertionSort(vector<int> &v){
    for(unsigned int i = 1; i < v.size(); i++){
        int key = v[i],h;
        for(h = i; ((h > 0) && v[h - 1] > key); h--){
            v[h] = v[h - 1];
        }
        v[h] = key;
    }
    return;
}

int main()
{
    int data = 0;
    vector<int> v;
    for(unsigned int i = 0; ; i++){
        cout<<"Enter the data in vector :- (-1 to exit)\n";
        cin>>data;
        if(data == -1)
            break;
        v.push_back(data);
    }
    insertionSort(v);
    cout<<"Insertion Sorted Elements are :-\n";
    print(v);
    return 0;
}
