
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>

namespace mySet {
typedef std::pair<int, int> IntPair;
};

template<class KEY, class VALUE>
void PrintPair ( const std::pair<KEY, VALUE> theOne)
{
	std::cout << "The first element of hashMap_01 is "<<
		theOne.first << ",and this value is " <<
		theOne.second <<std::endl;
}


// This source is citation, not Original
//from
//  http://www.codecogs.com/reference/computing/stl/containers/associative/hash_map.php
//
//write first... 2013/January/05
// and somewhere modefied.
//
int FirstCase()
{
	std::unordered_map<int, int> hashMap_01;

	hashMap_01.insert( mySet::IntPair(1, 1) );
	hashMap_01.insert( mySet::IntPair(2, 4) );
	hashMap_01.insert( mySet::IntPair(3, 9) );

	auto cIter = hashMap_01.begin();
	PrintPair( *cIter );

	auto Iter= hashMap_01.begin();
	hashMap_01.erase( Iter );
	
	// The following the line would error because the cIter is const.
	// hashMap_01.erase( cIter );

	cIter = hashMap_01.begin();
	PrintPair( *cIter );

	return 0;
}

// This source is citation, not Original
//from
//  http://d.hatena.ne.jp/faith_and_brave/20081002/1222940314
//
//write first... 2013/January/05
// and somewhere modefied.
//
int SecondCase()
{
	std::unordered_map< std::string, int> hashMap_02;
	hashMap_02["HogeHoge"] = 23;
	hashMap_02["Akagi"] = 66;
	hashMap_02["Kudo"] =16;

	std::cout << "Akagi is "<<hashMap_02["Akagi"] <<" years old." 
		<< std::endl;

	return 0;
}

int main(int argc, char** argv)
{
	FirstCase();
	SecondCase();
	return 0;
}


