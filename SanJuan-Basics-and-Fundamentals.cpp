#include <iostream>
using namespace std;

int main() {

int element;

    int arrayOne[10], arrayTwo[10], mergedArray[20];
    int arraySizeOne = 0, arraySizeTwo = 0, mergedSize = 0, arrOneCount = 0, arrTwoCount = 0;
    
    cout << "Enter the number of elements for the first array (maximum of 10): ";
    cin >> arrOneCount; 

    cout << endl << "Enter the Elements for the First Array" << endl << endl;

    for (int i = 0; i < arrOneCount; i++) {

        cout << "Element " << i + 1 << ": ";
        cin >> element;

        arrayOne[arraySizeOne++] = element;
    }

    cout << endl << "Enter the number of elements for the second array (maximum of 10): ";
    cin >> arrTwoCount;

    cout << endl << "Enter the Elements for the Second Array" << endl << endl;

    for (int i = 0; i < arrTwoCount; i++) {

        cout << "Element " << i + 1 << ": ";
        cin >> element;

        arrayTwo[arraySizeTwo++] = element;
    }

        
    for (int i = 0; i < arraySizeOne; i++) {
        mergedArray[mergedSize++] = arrayOne[i];
    }           
    for (int i = 0; i < arraySizeTwo; i++) {
        mergedArray[mergedSize++] = arrayTwo[i];
    }

    for (int i = 0; i < mergedSize - 1; i++) {

        for (int j = 0; j < mergedSize - i - 1; j++) {

            if (mergedArray[j] < mergedArray[j + 1]) {

                int temp = mergedArray[j];

                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = temp;
            }
        }
    }

    cout << endl << "Merged array in Descending Order: ";

    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }

    return 0;
}
