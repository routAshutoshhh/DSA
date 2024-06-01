// Pair is used to combine together two values that may be of different data types. Pair provides a way to store two heterogeneous objects as a single unit. It is basically used if we want to store tuples. The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 

// The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
// Pair can be assigned, copied, and compared. The array of objects allocated in a map or hash_map is of type ‘pair’ by default in which all the ‘first’ elements are unique keys associated with their ‘second’ value objects.
// To access the elements, we use variable name followed by dot operator followed by the keyword first or second.
#include<utility>
#include<iostream>

using namespace std;

int main(){
       // defining a pair
    pair<int, char> PAIR1;ss
 
    // first part of the pair
    PAIR1.first = 100;
    // second part of the pair
    PAIR1.second = 'G';
    pair  g1;         //default
pair  g2(1, 'a');  //initialized,  different data type
pair  g3(1, 10);   //initialized,  same data type
pair  g4(g3);    //copy of g3
g2 = make_pair(1, 'a');

//swap
pair1.swap(pair2) ;

//tie in pairs
 pair<int, int> pair1 = { 1, 2 };
    int a, b;
    tie(a, b) = pair1;
    cout << a << " " << b << "\n";
 
    pair<int, int> pair2 = { 3, 4 };
    tie(a, ignore) = pair2;
 
    // prints old value of b
    cout << a << " " << b << "\n";
 
    // Illustrating pair of pairs
    pair<int, pair<int, char> > pair3 = { 3, { 4, 'a' } };
    int x, y;
    char z;
 
    // tie(x,y,z) = pair3; Gives compilation error
    // tie(x, tie(y,z)) = pair3; Gives compilation error
    // Each pair needs to be explicitly handled
      tie(x,ignore) = pair3;
    tie(y, z) = pair3.second;
    cout << x << " " << y << " " << z << "\n";
}
 
 
    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;
 
    return 0;
}