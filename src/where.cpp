#include <string>

std::string hello() {
   return "Hello World!";
}

int findString(const std::string &input, const std::string &subString) {
   int location = 0;
   for (const auto &c : input) {
      location++;
      if (input.substr(location - 1, subString.size()) == subString) {
         break;
      }
   }
   if (location == input.size() && input.substr(location - 1, subString.size()) != subString) {
      location = -1;
   }
   return location;
}

int findString(const std::string &input, const char &subChar) {
   int location = 0;
   for (const auto &c : input) {
      location++;
      if (c == subChar) {
         break;
      }
   }
   if (location == input.size() && input.back() != subChar) {
      location = -1;
   }
   return location;
}