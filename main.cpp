#include <iostream>
using namespace std;

void descendingSort(int myArray[], int numElements){
    int i;
    int j;
    int indexGreatest;
    int tempVal;

    for(i=0;i<numElements-1;++i){
        indexGreatest=i; //starting point for element index comparison
        for(j=i+1;j<numElements;++j){
            if(myArray[j]>myArray[indexGreatest]){
                indexGreatest=j; //update indexGreatest w current greatest index
            }
        }
        //swap myArray[i] and myArray[indexGreatest]
        tempVal=myArray[i];
        myArray[i]=myArray[indexGreatest];
        myArray[indexGreatest]=tempVal;
    }

    cout << "Descending sorted array: "<<endl;
    for(i=0;i<numElements;++i){
        cout << myArray[i] << ' ';
    }

}
int main() {

    int numElements;
    cout <<"Enter the number of elements: "<<endl;
    cin >> numElements;
    int numArray[numElements];
    int input;
    int i;

    cout << "Enter the elements: " << endl;
    for(i=0;i<numElements;++i){
        cin >> input;
        numArray[i]=input;
    }

    descendingSort(numArray, numElements);
    return 0;
}
