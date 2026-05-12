#include <iostream>
#include <string>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
        
        int l = 0, r = s.size() - 1;

        while ( l < r ) {

            if ( ! std::isalnum ( static_cast<unsigned char> ( s [ l ] ) ) ) {

                l++;

            }   else if (! std::isalnum ( static_cast<unsigned char> ( s [ r ] ) )) {
                
                r--;

            }   else {

                if ( ( char ) std :: tolower ( s [ l ] ) == ( char ) std :: tolower (s [ r ] ) ) {
                    
                    l++, r--;

                }   else {

                    return false;

                }

            }

        }

        return true;
    }
};