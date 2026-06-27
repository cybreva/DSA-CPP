#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void vector_declaration(vector <int> &num){
    int number ;
    for(int i = 0 ; i < 10 ; i++){
        cout << "enter '" << i << "'. number : " << flush ;
        cin >> number;
        num.push_back(number);
    }
    sort(num.begin(), num.end());
    cout << "the vector is sorted automatically" << "\n" << flush;
}
void sort_vector(vector <int> &num){

    sort(
        num.begin() ,
        num.end() 
    );
}void display_vector(vector <int> &num){
    for_each(num.begin(),
             num.end(),
             [](int n)
             {cout << n << " " << flush ;
             }
            );
}
void reverse_vector(vector <int> &num){
     reverse
        (
            num.begin(),
            num.end()
        );
}
void linear_Searching_vector(vector <int> &num){
    int target ;
    cout << "\n" << flush;
    cout << "enter the number you want to find : " << flush ; 
    cin >> target;
    auto it = find(
        num.begin(),
        num.end(),
        target
    );

    

    if(it == num.end())
    {
        cout << "Not Found \n " << flush  ;
    }
    else
    {
        cout << "Found at index :  "<< it-num.begin() << "\n" << flush ;
        
    }
}
void min_value(vector <int> &nums){
    auto it = min_element(
        nums.begin() ,
        nums.end() 
    ) ;

    cout << "\nthe minimum value in the vector is : " << *it << " and its index is : " << it-nums.begin() << "\n" << flush;
}

void max_value(vector <int> &nums){
    auto it = max_element(
        nums.begin() ,
        nums.end() 
    );
    
    cout << "\nthe maximum value in the vector is : " << *it << " and its index is : " << it-nums.begin() << "\n" << flush;
}
void find_unique_numbers(vector <int> &nums){
    sort(nums.begin(), nums.end());
    
    auto it = unique
    (
        nums.begin(),
        nums.end()
    );

    

    nums.erase
    (
        it,
        nums.end()
    );

    for_each
    (
        nums.begin(),
        nums.end(),
        [](int n){
        cout << "" << n << " " << flush;
        }
    );
}


void Lower_bounds_and_upper_bounds(vector <int> &nums , int &num){

    cout << "without equal range --------------->>>>>>>>>>" << "\n" << flush ;

    auto it = lower_bound
    (
        nums.begin(),
        nums.end(),
        num
    );
    int index = it-nums.begin() ;

   
    cout << " index suggested by lower_bound : " << index << "\n" << flush ; 
    

    auto it2 = upper_bound
    (
        nums.begin(),
        nums.end(),
        num
    );
    int index2 = it2-nums.begin() ;

    cout << " index suggested by upper_bound : " << index2 << "\n" << flush ; 
}

void equal_range_vector(vector <int> &nums , int &num){
    cout << "with equal range --------------->>>>>>>>>>\n" << flush;

    auto range = equal_range(nums.begin(), nums.end(), num);
    
    int lb_index = range.first - nums.begin();
    int ub_index = range.second - nums.begin();
    int frequency = range.second - range.first;
    
    cout << "the index as per lower bound is : " << lb_index << "\n";
    cout << "the index as per upper bound is : " << ub_index << "\n";
    cout << "the frequency is : " << frequency << "\n" << flush;

    
    if (range.first != nums.end() && *range.first == num) {
        cout << "Element found: " << *range.first << "\n";
    } else {
        cout << "Element not present in vector (Iterators point to next greater or end)\n";
    }
}
void replace_item_in_vector(vector <int> &nums){
    int target ;
    cout << "enter the numebr which you want to replace : " <<flush ;
    cin >> target ;
    cout << "\n";
    cout <<  endl;
    int target2 ;
    cout << "enter the numebr you want to replace " << target << " with : " << flush ;
    cin >> target2 ;
    cout << "\n" << flush;
    replace(
        nums.begin(),
        nums.end(),
        target ,
        target2
    );

    for_each(
        nums.begin(),
        nums.end(),
        [](int n){
            cout << n << " " ;
        }
    );
    cout << "\n" << flush; 
}
void remove_item_in_vector(vector <int> &num){
    int value ;
    cout << "enter value :" << endl ;
    cin >> value ;
    
    num.erase(remove(num.begin(), num.end(), value), num.end());
}
void binary_search_in_vector(vector <int> &nums)
{
    sort(nums.begin(), nums.end());
    int target ;
    cout << "enter the number you you want to search : " <<  flush;
    cin >> target ;

    bool result = binary_search(
        nums.begin() ,
        nums.end() ,
        target 
    );

    if (result != true ) {
        cout << "number not found \n" << flush ;
    }
    else{
        cout << " the number is found " << "\n" << flush ;
    }

    
}
void accumulate_result(vector <int> &nums , int &input) {
    int result = accumulate(
        nums.begin() ,
        nums.end() ,
        input 
    ) ;
    cout << "the result is : " << result << "\n" << flush ;
    
}
void allofeven(vector<int> &num){

    bool a = all_of(
        num.begin() ,
        num.end() ,
        [](int n){
            return n % 2 == 0 ;
        }
    ) ;
    cout << "the ans of all of are : " << a << "\n" << flush ;
}
void allofodd(vector<int> &num){

    bool a = all_of(
        num.begin() ,
        num.end() ,
        [](int n){
            return n % 2 != 0 ;
        }
    ) ;
    cout << "the ans of all of are : " << a << "\n" << flush ;
}
void anyofeven(vector<int> &num){

    bool c = any_of(
        num.begin() ,
        num.end() ,
        [](int n){
            return n % 2 == 0 ;
        }
    ) ;
    cout << "the ans of anyof are : " << c << "\n" << flush ;
}void anyofodd(vector<int> &num){

    bool c = any_of(
        num.begin() ,
        num.end() ,
        [](int n){
            return n % 2 != 0 ;
        }
    ) ;
    cout << "the ans of anyof are : " << c << "\n" << flush ;
}
void noneofeven(vector<int> &num){

    bool b = none_of(
        num.begin() ,
        num.end() ,
        [](int n){
            return n % 2 == 0 ;
        }
    ) ;
    cout << "the ans of none of are  : " << b << "\n" << flush ;
}
void noneofodd(vector<int> &num){

    bool b = none_of(
        num.begin() ,
        num.end() ,
        [](int n){
            return n % 2 != 0 ;
        }
    ) ;
    cout << "the ans of none of are  : " << b << "\n" << flush ;
}
void find_if_vector(vector <int> &num){
    auto it = find_if(
        num.begin() ,
        num.end() ,
        [](int n ){
            return n%2==0;
        }
    );
    
    if(it != num.end())
    {
        cout << "the numeber youre looking is  " << *it << "\n" << flush;
    }
    else
    {
        cout << "Not Found in vector  ";
    } 
    cout << "\n" << flush ;
}
void transform_vector(vector <int> &nums){
    vector<int> results(10);
    cout << "currently transform only can transform the vector by multiplying with 10 . " << "\n" <<flush;

    cout << "the initial vector : " << flush ;
    for_each
    (
        nums.begin(),
        nums.end(),
        [](int n){
        cout << "" << n << " " << flush;
        }
    );

    transform
    (
        nums.begin(),
        nums.end(),
        results.begin(),
        [](int n){
        return n * 10;
        }
    );

    cout << "\nthe transformed vector : " << flush ;

    for_each
    (
        results.begin(),
        results.end(),
        [](int n){
        cout << "" << n << " " << flush;
        }
    );

    cout << "\n" << flush ;


}
void copy_vector(vector <int> &nums){

    vector <int> z(9);

    cout << "initially the vector is : " << flush ;

    for_each(
        nums.begin(),
        nums.end(),
        [](int n){
            cout << n << " " << flush ;
        }
    );



    copy(
        nums.begin(),
        nums.end(),
        z.begin()
    );

    cout << "the vector after copying data from the main vector : " << flush ;

    for_each(
        z.begin(),
        z.end(),
        [](int n){
            cout << n << " " << flush ;
        }
    );
}
void copy_if_vector(vector <int> &nums){
    vector <int> z(9);

    cout << "initially the vector is : " << flush ;

    for_each(
        nums.begin(),
        nums.end(),
        [](int n){
            cout << n << " " << flush ;
        }
    );

    cout << "\ncurrently copy_if only copies hte even number in the new vector . " << flush ;

    copy_if(
        nums.begin(),
        nums.end(),
        z.begin(),
        [](int n){
            return n % 2 == 0 ;
        }
    );

    cout << "\nthe vector after copying data from the main vector : " << flush ;

    for_each(
        z.begin(),
        z.end(),
        [](int n){
            cout << n << " " << flush ;
        }
    );

}
void count_vector(vector <int> &nums){
    int target10 ;
    cout << "enter the numebr you want to count : " << flush ;
    cin >> target10;
    cout << "\n" << flush ;
    int result = count
                (
                    nums.begin(),
                    nums.end(),
                    target10
                );

    cout << "number of occurences of : " << target10 << " is : " << result << "\n" << flush ; 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);



    vector <int> x ;

    vector_declaration(x);

    int choice;

    do
    {
        cout << "\n\n===== VECTOR OPERATIONS =====\n";
        cout << "1. REMOVE ITEM\n" << flush;
        cout << "2. LINEAR SEARCH\n" << flush;
        cout << "3. BINARY SEARCH\n" << flush;
        cout << "4. REPLACE \n" << flush;
        cout << "5. MAXIMUM VALUE\n" << flush;
        cout << "6. MINIMUM VALUE \n" << flush;
        cout << "7. SORT VECTOR \n" << flush;
        cout << "8. REVERSE VECTOR \n" << flush;
        cout << "9. DISPLAY VECTOR \n" << flush;
        cout << "10. ACCUMULATE \n" << flush;
        cout << "11. UNIQUE \n" << flush;
        cout << "12. EQUAL RANGE \n" << flush;
        cout << "13. BOUNDS\n" << flush;
        cout << "14. ALL_OF \n" << flush;
        cout << "15. ANY_OF \n" << flush;
        cout << "16. NONE_OF \n" << flush;
        cout << "17. FIND_IF \n" << flush;
        cout << "18. TRANSFORM \n" << flush;
        cout << "19. COPY \n" << flush;
        cout << "20. COPY_IF \n" << flush;
        cout << "21. COUNT \n" << flush;
        cout << "22. EXIT \n" << flush ;
        

        cout << "\nEnter Your Choice : " << flush;
        cin >> choice;

       switch (choice)
        {
            case 1:
                remove_item_in_vector(x);
                break; 

            case 2:
                linear_Searching_vector(x);
                break;

            case 3:
                binary_search_in_vector(x);
                break;

            case 4:
                replace_item_in_vector(x);  
                break;

            case 5:
                max_value(x);
                break;

            case 6:
                min_value(x);
                break;
            case 7:
                sort_vector(x);
                break;
            case 8:
                reverse_vector(x);
                break;
            case 9:
                display_vector(x);
                break;
            case 10:
                int target3 ;
                cout << "enter number" << flush ;
                cin >> target3 ;
                accumulate_result(x,target3);
                break;
            case 11:
                find_unique_numbers(x);
                break;        
            case 12:
                int target4 ;
                cout << "enter number" << flush ;
                cin >> target4 ;
                equal_range_vector(x , target4);
                break;
            case 13:
                int target5 ;
                cout << "enter number" << flush ;
                cin >> target5 ;
                Lower_bounds_and_upper_bounds(x , target5);
                break;
            case 14:
                int target6;
                cout << "1. check even. \n2.check odd \nenter your choice : " << flush ;
                cin >> target6;
                switch (target6)
                {
                    case 1:
                        allofeven(x);
                        break;
                    case 2:
                        allofodd(x);
                        break;
                    default :
                        cout << "invalid choice" << "\n" << flush ;
                }
                break;
            case 15:
                int target7;
                cout << "1. check even. \n2.check odd \nenter your choice : " << flush ;
                cin >> target7;
                switch (target7)
                {
                    case 1:
                        anyofeven(x);
                        break;
                    case 2:
                        anyofodd(x);
                        break;
                    default :
                        cout << "invalid choice" << "\n" << flush ;
                }
                break;
            case 16:
                int target8;
                cout << "1. check even. \n2.check odd \nenter your choice : " << flush ;
                cin >> target8;
                switch (target8)
                {
                    case 1:
                        noneofeven(x);
                        break;
                    case 2:
                        noneofodd(x);
                        break;
                    default :
                        cout << "invalid choice" << "\n" << flush ;
                }
                break;
            case 17:
                find_if_vector(x);
                break;
            case 18:
                transform_vector(x);
                break;
            case 19:
                copy_vector(x);
                break;
            case 20:
                copy_if_vector(x);
                break;
            case 21:
                count_vector(x);
                break;
            case 22:
                cout << "byy" << "\n" << flush ;
                break;
                
            default:
                cout << "\nInvalid Choice! Try Again.\n";
                break;
        }

    } while (choice != 22);
    cout << endl << "\n" << flush ;
    return 0;
}


