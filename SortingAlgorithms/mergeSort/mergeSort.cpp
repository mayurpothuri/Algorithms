#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(unsigned int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return;
}

void merge(vector<int> &v, unsigned int start, unsigned int end){
    unsigned int mid = start + ((end - start)/2);
    vector<int> left, right;
    for(unsigned int k = start; k <= mid; k++)
        left.push_back(v[k]);
    for(unsigned int k = mid + 1; k <= end; k++)
        right.push_back(v[k]);
    unsigned int i = 0, j = 0, k = start;
    while(i < left.size() && j < right.size()){
        if(left[i] < right[j])
            v[k++] = left[i++];
        else
            v[k++] = right[j++];
    }
    while(i < left.size())
        v[k++] = left[i++];
    while(j < right.size())
        v[k++] = right[j++];
    return;
}

void mergeSort(vector<int> &v, unsigned int start, unsigned int end){
    if(start >= end)
        return;
    mergeSort(v, start, start + ((end - start)/2));
    mergeSort(v, start + ((end - start)/2) + 1, end);
    merge(v, start, end);
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
    mergeSort(v, 0, v.size() - 1);
    cout<<"Merge Sorted Elements are :-\n";
    print(v);
    return 0;
}

