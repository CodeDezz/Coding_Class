// #include <iostream>

// //cout : meaning character output
// // <<: means outputs
// //endl : means end line

// int main(){
// std::string n = "Hello, world!";
// std::cout << "String data type: " << std::endl;
// std::cout << n << std::endl;
//     return 0;
// }

// #include <iostream>

// int main(){

//     int x = 5;
//     int y = 6;
//     int sum = x + y;
//     int age = 21;
//     double pi = 3.1415;
//     char grade = 'A';
//     char symbol = '$';
//     bool student = 0;
//     bool power = 1;
//     bool forSale = 1;

//     std::string name = "Jelly";
//     std::string day = "Monday";
//     std::string breakfast = "Scrambled Eggs";


//     std::cout << sum << '\n';
//     std::cout << age << '\n';
//     std::cout << pi << '\n';
//     std::cout << grade << '\n';
//     std::cout << symbol << '\n';
//     std::cout << "This is age " << age << std::endl;
//     std::cout << "The user name is " << name << " age: " << age;


//     return 0;
// }

// #include <iostream>

// int main(){

//     const double PI = 3.14159;
//     const int LIGHT_SPEED = 299792458;
//     const int WIDTH = 1920;
//     const int HEIGHT = 1080;
    
//     double radius = 10;
//     double circumference = 2 * PI * radius;


//     std::cout << circumference << "cm";

//     return 0;
// }

// Namespace - prevent issues with name conflicts
// #include <iostream>

// namespace first{
//     int x = 0;
// }
// namespace second{
//     int x = 2;
// }

// int main(){

//     using namespace second;

//     std::cout << x;

//     return 0;
// }

//typedef - used for renaming a data type

// #include <iostream>
// #include <vector>

// //typedef std::vector<std::pair<std::string, int>> pairlist_t;
// //typedef std::string text_t;
// //typedef int number_t;
// using text_t = std::string;
// using number_t = int;

// int main(){

//     text_t firstName = "Bro";
//     number_t age = 21;

//     std::cout << firstName << '\n';
//     std::cout << age << '\n';

//     return 0;
// }

// Arithmetic operators

// #include <iostream>

// int main(){

//     int students = 6 - 5 + 12 / 2;

    // students+=1;
    // students++;

    // students*=2;
    // students/=3;

    // int remainder = students % 2;

    // std::cout << students;
    // std::cout << remainder;
    
//     return 0;
// }

// Type conversion - Implicit and Explicit conversion. Automatic and Explicit

// #include <iostream>

// int main(){

//     int correct = 8;
//     int questions = 10;
//     double score = correct/questions * 100;

//     std::cout << score << "%";

//     return 0; 
// }

// cout (<<) output operator
// cin (>>) input or scanf() operator

// #include <iostream>

// int main(){

//     std::string name;
//     int age;

//     std::cout << "What's your age?: ";
//     std::cin >> age;


//     std::cout << "What's your full name?: ";
//     std::getline(std::cin >>  std::ws, name);



//     std::cout << "Hello " << name << '\n';
//     std::cout << "You are " << age << " year old";

//     return 0;
// }

// Math functions

#include <iostream>
#include <cmath>

int main(){

    double x =3;
    double y = 4;
    double z;

    z = std::min(x, y);
    z = std::min(x, y);
    z = pow(2, 4);
    z = sqrt(9);
    z = abs(-3); // How far is it from zero example output of this would be 3
    z = round(x);
    z = ceil(x);
    z = floor(x);

    std::cout << z;

    return 0;
}