 #ifndef HELLOWORLD_H 
 #define HELLOWORLD_H
 
 #include <string>
 
 class HelloWorld
 {
    public:
        HelloWorld();
        HelloWorld(std::string fName, std::string lName);
        ~HelloWorld();
 };
 
 #endif