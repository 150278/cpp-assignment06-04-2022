/*

Q3: You have a binary string with length N. You are allowed to do swap() operations of two elements
only if the index parity of both elements is the same. This means that: you can swap() an element at
index 2, with any element at index4, 6, 8 etc. (even parity), similarly the element at index 3 can be
swapped with the element at index1, 5,7,9 etc.
Ex: Given string 1110, you can swap 2nd and 4th char to get 1011. But, you can never get 1101 if you
follow the swap rules.
Now, the task is to find the number of times substring 01 can occur for all such possible swaps.

Ex: 1110 does not have any substring of 01. Now you can swap2nd and 4th to get 1011, this will have
‘one’ occurrence of 01. We can now perform more swaps but we will never get any more 01
substrings here.
Input: 00100 output should be 1, for: 01010-> 2, for 10001-> 2



Abhishek sahu

*/




#include <iostream>
#include <string>
using namespace std;

int count=0;


void swap(char &a,char &b){
    char temp;
    temp=a;
    a=b;
    b=temp;
}

void find_string(string inp, int len){
    string temp;
    
    for(int i=0;i<len;i++){
        temp = inp.substr(i,2);

        if(temp=="01"){
            count++;
        }
    }
}

int main()
{
    string str;
    int total_count = 0;
    
    cout<<"Enter a string: ";
    cin>>str;
    
    int len = str.length();
    
    find_string(str,len); // check original string has 01 
    
    total_count += count; 
    
    count=0;

    for(int i=0;i<len-2;i++)
    {
        for(int j=i+2;j<len;j+=2){
            string temp = str;
            swap(temp[i],temp[j]);
            if(temp!=str){
                find_string(temp,len);
                cout<<temp<<" "; // swapped string
                //cout<<"count: "<<cur_count<<endl;
                total_count += count;
                count = 0;
            }
        }
    }

    cout<<endl<<"Total number of '01' occur in string: " << total_count << endl;
    return 0;
}

