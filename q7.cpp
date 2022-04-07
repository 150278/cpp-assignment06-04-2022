/****
 * 
 * Q7: Write a c++ program, this will take two input values for length and breadth of a chocolate bar.  
 * You will get more money if you sell the chocolate in square shapes. 
 * So, you would try to divide the  chocolate into minimum possible number of square pieces, such that each piece has the same area and  the piece divide the chocolate bar (original big bar) perfectly. 
 * Note that this will give you most profit  for the entire bar. 
 * Ex: Length: 10, breadth: 15, answer = 6 
****/

#include<iostream>
#include<math.h>

using namespace std;



int findMinSqr(int l, int b)            //function to find the minimum no. of square pieces
{
    int n;      //no. of pieces
    int area;
    int min = b;
    //int VAL;
    
    area = l*b;     //total area of rectangle
    
    if(l>b)
        min = l;
    
    for(n = 1; n <= min; n++)
    {
        //cout << "step : " << n << endl;
        
        if( sqrtf(area/n) == (int)sqrtf(area/n) )
         {  
            //cout << "div by : " << area/n << " "<< n << endl;
            //VAL = n;
            return n;
         }
    }
    
    return 0;
    
} 

//main function
int main()
{
    int Len, B;
    int minNo = 0;
    
    //taking Len and B as input 
    cout << "Enter the Length and Breadth of chocolate : " << endl;
    cin >> Len >> B;
    
    minNo = findMinSqr(Len, B);
    
    cout << "Minimum possible number of square pieces are : " << minNo << endl;
    
    return 0;

    
}   //end of main()



