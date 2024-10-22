
// Code - 1
// // #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// void nothing() {
//     cout << "Hello world!";
// }

// int main() {
//     // int x;
//     // cin >> x;
//     int _x = 7;
//     cout << "Hey" << _x << endl;
//     nothing();
//     std::cout << "\n";
//     cout << "Hey";

//     printf("This is the given number: %d", _x);
// }


// // Code - 2

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string my_color;
//     cout << "Enter your fav. color: \n";
//     getline(cin, my_color);
//     cout << "My fav. color is " << my_color << endl;
//     return 0;
// }


// // Code - 3 - about pointers

// #include <iostream>
// using namespace std;

// int main() {
//     int life;
//     life = 7;

// // Pointer : points to memory location of a variable
//     int *myp;
//     myp = &life;

//     cout << life << endl;
//     cout << myp << endl;


//     // Reference : references to a variable - can able to change the data in memory

//     int score = 200;
//     int &ref_score = score;

//     cout << score << endl;
//     cout << myp << endl;
//     cout << *myp << endl;

//     ref_score = 800;

//     cout << score << endl;
//     cout << myp << endl;
//     cout << *myp << endl;

//    return 0;
// }


// // Code - 4 - Arrays with pointers
// #include <iostream>
// using namespace std;

// int main() {
//     int array[4] = {1, 2, 3, 4};
//     cout << array[0] << endl;
//     cout << array << endl;
//     cout << *array << endl;
//     cout << &array << endl;
//     cout << array[0] << endl;
//     int *myp = array;
//     myp++;
//     *myp = 22;

//     int &ref_myp = *myp;
//     ref_myp = 44;
//     cout << ref_myp << endl;
//     cout << array[1] << endl;

//     return 0;
// }


// // Code - 5 - Data types sizes

// #include <iostream>
// using namespace std;

// int main() {

// // 1 byte is of 8 bits
// cout << "Size of char is :"<<sizeof(char) * 8 << "bits" << endl;
// cout << "Size of short int is :"<<sizeof(short int) * 8 << "bits" << endl;
// cout << "Size of int is :"<<sizeof(int) * 8 << "bits" << endl;
// cout << "Size of long int is :"<<sizeof(long int) * 8 << "bits" << endl;
// cout << "Size of long long int is :"<<sizeof(long long int) * 8 << "bits" << endl;

// // Binary to integers
// int bin = 0b0010;
// int hex = 0x16;
// cout << bin << endl;
// cout << hex << endl;

//     return 0;
// }



// // Code - 6 - Conditionals

// #include<iostream>
// #include <cstdio>
// using namespace std;

// int main() {
    
//     int rating = 4;


//     if(rating == 5) {
//         puts("5 star rated\n");
//     }
//     else {
//         puts("Not 5 star rated");
//     }

//     int rate = 7;
//     cout << 9;
//     cout << (rate == 7 ? 7 : 9);    // Ternary operator
//     return 0;
// }



// Code - 7 - Loops

// #include<iostream>
// using namespace std;

// int main() {

//     int my_array[] = {1,2,3,4,5,6,7};
//     int i = 0;

// // While loop
//     while(i < 7) {
//         if(i == 3) {
//             i++;
//             continue;
//         }
//         cout << "Current number is: " << my_array[i] << endl;
//         i = i + 1;
//     }
//     cout << "Out of loop";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//    int my_nums[] = {1,2,3,4,5};
//    int i = 0;
//    do {
//     cout << i << my_nums[i] << endl;
//     i++;
//    }
//    while(i < 1);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//     int nums[] = {2,3,5,6,7,8};
//     // Normal for loop
//     for(int i = 0; i < 5;i++) {
//         cout << i << endl;
//     }

//     cout << "For each loop" << endl;
//     // For each loop

//     for(int num : nums) {
//         cout << num << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
    
//     char my_string[] = "vishnu";
//     char my_name[] = {'v', 'i', 's', 'h', 'n', 'u', 0};

// // First type
// cout << "First type" << endl;
//     for(int i = 0; my_string[i] != 0;i++) {
//         cout << my_string[i] << endl;
//     }

//     // Second type
// cout << "Second type" << endl;
//     for(int i = 0; my_string[i];i++) {
//         cout << my_string[i] << endl;
//     }

//     //  Third type
// cout << "Third type" << endl;    
//     for(int i = 0; my_name[i] ;i++) {
//         cout << my_string[i] << endl;
//     }

// // Fourth type
// cout << "Fourth type" << endl;
//     for(char *cp = my_name; *cp != 0;cp++) {
//         cout << *cp << endl;
//     }

//     // Fifth type
// cout << "Fifth type" << endl;
//     for(char ch : my_name) {
//         cout << ch << endl;
//     }


//     return 0;
// }



// Code - 8 - float data type

// #include<iostream>
// using namespace std;

// int main() {

//     printf("Float size is %ld bits\n", sizeof(float) * 8);
//     printf("Float size is %ld bits\n", sizeof(double) * 8);
//     printf("Float size is %ld bits\n", sizeof(long double) * 8);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     float a = 20.2;
//     double b = 20.2;
//     cout << a + 20;
//     cout << endl;
//     printf("%f\n", a);
//     printf("%f\n", b);

//     return 0;
// }


// Code - 9 : Exception Handling


// #include<iostream>
// using namespace std;

// int main() {
//     char call_api = 'a';

//     try {
//           cout << "Trying to use API value\n";
//           cout << "Did some testing with api value\n";
//           throw call_api;
//     }
//     catch(int e) {
//           cout << "Integer exception handled " << e << "\n";
//     }

//     catch(float e) {
//         cout << "Float exception handled " << e << "\n";
//     }

//     catch(...) {
//         cout << "Something went wrong\n";
//     }

//     cout << "Keep moving on\n";

//     return 0;
// }



// Code - 10 : Functions in C++

    #include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello there!";
}

int sayTwo() {
    return 2;
}

int main() {
    sayHello();
    cout << endl;
    cout << sayTwo();
    return 0;

}



