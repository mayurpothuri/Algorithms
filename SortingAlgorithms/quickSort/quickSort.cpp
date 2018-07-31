#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(unsigned int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return;
}

int partition(vector<int> &v, int start, int end){
    int index = start - 1, pivotIndex = end;
    for(unsigned int k = start; k < end; k++){
        if(v[k] < v[pivotIndex]){
            index++;
            int t = v[index];
            v[index] = v[k];
            v[k] = t;
        }
    }
    index++;
    int t = v[pivotIndex];
    v[pivotIndex] = v[index];
    v[index] = t;
    return index;
}

void quickSort(vector<int> &v, int start, int end){
    if(start >= end)
        return;
    int partitionIndex = partition(v, start, end);//first element is chosen always as default pivot.
    quickSort(v, start, partitionIndex - 1);
    quickSort(v, partitionIndex + 1, end);
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
    quickSort(v, 0, v.size() - 1);
    cout<<"Quick Sorted Elements are :-\n";
    print(v);
    return 0;
}
