/*

Project 8: Part 1/1
video: Chapter 4 Part 6

Purpose:  This project will teach you more about casting across class hierarchies as well as range-based for() loops, and issues that come with inheritance.

Create a branch named Part1

Public vs. Protected vs Private & Friend

Build/Run often with this task to make sure you're not breaking the code with each step.
    I recommend committing after you get each step working so you can revert to a working version easily if needed.
    it's very easy to mess this task up. 

your task: 
    0) get familiar with the classes. 

    1) Fix the include errors. 

    2) HighwayPatrol can check the speed of vehicles on the highway. 
        make this happen *without* adding getters to the Highway or Vehicle class 
        and *without* making any private member variables public

    3) implement the Highway::addVehicleInternal 
        this function should call the non-evasive member function of the derived class, so use the technique shown in the Casting video.

    4) implement the Highway::removeVehicleInternal
        this function should call the evasive member function of the derived class, if it has one. use the technique shown in the Casting video.

    5) Add a Truck type
        semi-trucks don't evade when they're pulled over, unlike cars and motorcycles.  
        They'll also need a member function that can be called when they are added to the highway.  Look at the Highway member functions for more hints on this.

    6) Add some Cars to the Highway
    7) Add some Motorcycles to the Highway
    8) Add some SemiTrucks to the highway. 

    9) clear any warnings as best you can, based on what you've learned in the previous projects
        see the note in main() about implementing the special member functions.
        This will clear a lot of warnings if implemented correctly.
    
    10) correct any unnecessary keywords related to access specifiers used in the UDTs.

    11) Remember the rules about 'Don't include what you don't use'
        check each source file for things being included that aren't used.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    Highway highway;
    
    std::vector<Car> cars;
    std::vector<Motorcycle> motorcycles;
    std::vector<SemiTruck> trucks;
    
    /*
     instantiating vectors like this creates unexpected copies during the construction process:
     
     std::vector<std::string> strings
     {
        std::string("a string"),
        std::string("another string)"
     };
     
     We have not learned how to properly implement copy constructors or copy assignment operators yet at this point in the course.
     These functions are part of the group of special member functions that all UDTs have.
     
     Instead we will learn about in-place construction to avoid making unexpected copies of our UDTs.
     Unexpected copies could cause Undefined Behavior (UB)
     The rule of 3-5-0 video will explain these special member functions and this UB in more detail.
     
     For now, these special member functions will be implemented using the compiler's default implementation.
     the Vehicle class shows how to do this.
     
     You must implement these special member functions for all of the classes that derive from Vehicle.

     v-table warnings can be resolved by eliminating header file implementations.
     */
    
    /*
     In order to correctly construct an object in-place inside a vector, we must first reserve space for it.
     
     reserve how ever many cars, motorcycles, and trucks you'll create first
     */
    cars.reserve(3); //reserving room for 3 Car instances
    
    /*
     Now that we have reserved space for our UDT instances inside the vector, we can construct them in-place inside the vector.
     emplace_back is passed the constructor arguments for your UDT.
     
     use the vector member function 'emplace_back' to construct your car/truck/motorcycle instances in-place
     */
    cars.emplace_back("janice"); //constructing the first Car instance in-place in the cars vector
    
    /*
     construct 2 more Car instances via emplace_back.
     */
    
    /*
     now reserve and emplace_back your Trucks and Motorcyles
     */
    
    
    
    
    assert(false);
    //add the cars, motorcycles and trucks to the highway using range-based for() loops: for( element : vec ) { ... }
    //be careful to not accidentally make element copies when iterating.
    
    HighwayPatrol cop;
    cop.scanHighway(&highway);

    std::cout << "done" << std::endl;

    return 0;
}
