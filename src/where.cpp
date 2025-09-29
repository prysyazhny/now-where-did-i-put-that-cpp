#include <string>

std::string hello() {
   return "Hello World!";
}

int findString(const std::string &input, const std::string &subString) {
   int location = 0;
   for (const auto &c : input) {

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
   return location;
}