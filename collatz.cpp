#include <iostream> 
#include <vector>
#include <limits>
#include <iomanip>


using namespace std;


template <typename S>
ostream& operator <<(ostream& os, const vector<S>& vector)
{
    // Printing all the elements
    // using <<
    int j=0;

    for (auto element : vector){
        j++;
        os << setw(6) << element << "-->";
        if (j == 10) {
            cout << "\n";
            j = 0;
        }
        
    }
    return os;
}


int main(){
	uint64_t i = 0;
	
	cout << "Please enter in a number: ";
	
	cin >> i;
	
	while(std::cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Bad entry.  Enter a NUMBER: ";
        cin >> i;
	}
	
	vector <int> vec;

	
	while(i != 1){
		if(i%2 == 1) {
			i = (i * 3) + 1;
			vec.push_back(i);
		}else if(i%2 == 0) {
			i = i/2;
			vec.push_back(i);
		}
		
    }
    cout << vec << "This repeats eternally. 1 to 4 to 2 to 1." << endl;
		
		return 0;
}