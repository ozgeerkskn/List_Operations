#include <iostream>
#include <vector>
using namespace std;
int main() {
    char selection{};
    vector <int> vec{};
    int number{};
    int count{0};
    double sum{0};
    
    do{
        cout << "P - Print numbers " << endl;
        cout << "A - Add a number " << endl;
        cout << "M - Display mean of the numbers " << endl;
        cout << "S - Display the smallest number " << endl;
        cout << "L - Display the largest number " << endl;
        cout << "Q - Quit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> selection;
        
        if(selection == 'P' || selection == 'p'){ 
            if(vec.size() == 0){
            cout << "[] - the list is empty" << endl;
            }
            else{
                cout << "[";
                for(auto numbers: vec){
                     cout << " " << numbers << " "; 
                    }
                cout << "]";    
            }
            cout << endl;
            }
        else if(selection == 'A' || selection == 'a'){ 
            cout << "Enter an integer to add to the list: ";
            cin >> number;
            vec.push_back(number);
            cout << number << " added." << endl;
            }
        else if(selection == 'M' || selection == 'm'){ 
            if(vec.size() == 0){
                cout << "Unable to calculate the mean - no data "<< endl;
                }
            else{
                for(auto numbers: vec) {
                sum += numbers;
                }
                 cout << "Average of the elements is " << static_cast<double>(sum) / vec.size() << endl;
                }    
            
           
            }
        else if(selection == 'S' || selection == 's'){ 
           
            if(vec.size() == 0){
                cout << "Unable to determine the smallest number - list is empty " << endl;
                }
             else{
                int min = vec.at(0);
                for(auto numbers:vec){
                    if(numbers < min){
                        min = numbers;
                        }
                    }
                  cout << "The smallest number is " << min << endl;
                }
          
            }
            
        else if(selection == 'L' || selection == 'l'){ 
            
            if(vec.size() == 0){
                cout << "Unable to determine the smallest number - list is empty " << endl;
                }
             else{
                int max = vec.at(0);
                for(auto numbers:vec){
                    if(numbers > max){
                        max = numbers;
                        }
                    }
                  cout << "The largest number is " << max << endl;
                }
           
                 
            }
        else if(selection == 'Q' || selection == 'q'){ 
            cout << endl;
            cout << "Goodbye.."<< endl;
            }
        else{
            cout << "Unknown selection, try again. " << endl;
            }
        } while (selection != 'Q' && selection != 'q');
           
            
        return 0;
    }     
          
        
      
 
            
    
    
