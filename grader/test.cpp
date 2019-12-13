#include <iostream>

using namespace std;

int main()
{
  std::string text = "Let me split this into words";
  auto splitText = text | view::split(' ') | ranges::to<std::vector<std::<wbr /> string>>();
}